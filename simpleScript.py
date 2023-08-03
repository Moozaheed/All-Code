import ast

class JSVisitor(ast.NodeVisitor):
    def visit_Module(self, node):
        statements = [self.visit(child) for child in node.body]
        return "\n".join(statements)
    
    def visit_Expr(self, node):
        return self.visit(node.value) + ";"
    
    def visit_Str(self, node):
        return f'"{node.s}"'
    
    def visit_Name(self, node):
        return node.id
    
    def visit_BinOp(self, node):
        op_map = {
            ast.Add: "+",
            ast.Sub: "-",
            ast.Mult: "*",
            ast.Div: "/",
            ast.Mod: "%"
        }
        left = self.visit(node.left)
        right = self.visit(node.right)
        op = op_map[type(node.op)]
        return f"({left} {op} {right})"
    
    def visit_Assign(self, node):
        target = self.visit(node.targets[0])
        value = self.visit(node.value)
        return f"var {target} = {value};"
    
    def visit_Call(self, node):
        args = ", ".join(self.visit(arg) for arg in node.args)
        func = self.visit(node.func)
        return f"{func}({args})"
    
    def generic_visit(self, node):
        raise NotImplementedError(f"Translation for {type(node).__name__} is not implemented")

def transpile_python_to_javascript(code):
    tree = ast.parse(code)
    visitor = JSVisitor()
    js_code = visitor.visit(tree)
    return js_code

# Example usage
python_code = """
x = 10 + 5
print("Result:", x)
"""

js_code = transpile_python_to_javascript(python_code)
print(js_code)
