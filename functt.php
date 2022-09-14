<?php

function marks($mrk)
{
    $sum=0;
    foreach ($mrk as $value) {
       $sum += $value;
    }

    return $sum;
}



$rahida = [100,50,60,90,88,99,66];
$x = marks($rahida);

$liza = [80,70,60,90,68,100,68];
$y = marks($liza);

echo "The numbers of Rahida are: $x <br>";
echo "The numbers of Liza are: $y <br>";






/////////////////////array_rand//////////////////////////
#array er vitor theke randomly value generate korbe.

$product=['Shirt','Pant','Panjabi','shoes','Sandal','Tie'];


$randarr=array_rand($product);
echo "$product[$randarr]<br><br>";





/////////////////array_shift//////////////////////
#First value ta delete hoi;

array_shift($product);

for($i=0;$i<count($product);$i++)
{
    echo "$product[$i]<br>";
}

echo "<pre>";
print_r($product);
echo "</pre>";



///////////////arrayaa_unshift///////////////
#first position e akta value add hoi;

array_unshift($product,'Sharee');
for($i=0;$i<count($product);$i++)
{
    echo "$product[$i]<br>";
}
echo "<pre>";
print_r($product);
echo "</pre>";



/////////array_column//////////
#just akta column show korabe

$productList =
[
	[
		"id"=> 321,
		"price"=>1200,
		"name"=> "Tomato"
	],
	[
		"id"=> 33,
		"price"=>1200,
		"name"=> "Carrot"
	],
	[
		"id"=> 32,
		"price"=>1200,
		"name"=> "Fulkopi"
	],
];


$getName = array_column($productList, 'price');

foreach ($getName as $getTitle) {
	echo "$getTitle <br>";
}


////////////////array_combine///////////////
#duita alada array ke combine korbe!!

$names = ['Rahida','Priya','Huma','Rahida'];
$numbers = [1993,88883,99434,1993];

$combine = array_combine($names,$numbers);

//array_combine($key,$value);


foreach ($combine as $key => $value) {
	echo "$key: $value <br>";
}



///////////////////////array_replace////////////////////


$fruites = ['Red','black','Car'];
$vegetable = ['van','Bus','bus1','bus2'];//ei value gula add korte chacchi
//red and black er jaigai ven and bus boshbe
$replace = array_replace($fruites, $vegetable);

echo "<pre>";
print_r($replace);
echo "</pre>";


/////////////////array_pop////////////////////////
#last value delete hbe

$stdList = ['Alu','Piyaj','Tomato'];

array_pop($stdList);
echo "<pre>";
print_r($stdList);
echo "</pre>";
echo "<br>";

////////////////////array_push//////////////////
#last a value add hbe

array_push($stdList,'carrot','Latosh');
echo "<pre>";
print_r($stdList);
echo "</pre>";

///////////////////array_search//////////////
#kono value er index ta ber kore dibe

$studentList =['Rahida','Priya',3,4];
echo "Index number is: ";
echo array_search('Priya', $studentList);



////////////////////////array_count_value////////////////////

$productList = ['A','A','C','A','B','b','1','1'];
#same type value kotogula ache oigula count kore dibe
$totalValue = array_count_values($productList);

echo "<pre>";
print_r($totalValue);
echo "<pre>";





?>


