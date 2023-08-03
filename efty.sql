                 +------------------+
                 |       User       |
                 +------------------+
                 | UserID (PK)      |
                 | Name             |
                 | Email            |
                 | Password         |
                 | Contact Info     |
                 +------------------+
                        |     |
                        |     |
                        |     |
                        |     |
           +---------------------------+
           |                         |
           |                         |
           |                         |
  +------------------+        +------------------+
  |      Wallet      |        |   Transaction   |
  +------------------+        +------------------+
  | WalletID (PK)    |        | TransactionID    |
  | Wallet Name      |        | Amount           |
  | Currency         |        | TransactionType  |
  | Balance          |        | Timestamp        |
  | UserID (FK)      |        | SenderWalletID   |
  |                  |        | ReceiverWalletID |
  +------------------+        +------------------+
           |                         |
           |                         |
           |                         |
           |                         |
  +------------------+        +------------------+
  |   Bank Account   |        |  Payment Method  |
  +------------------+        +------------------+
  | Account Number   |        | PaymentMethodID  |
  | Bank Name        |        | MethodType       |
  | Account Holder   |        | UserID (FK)      |
  +------------------+        +------------------+
                                   |
                                   |
                                   |
                            +-------------------+
                            |  Payment Gateway  |
                            +-------------------+
                            | GatewayID (PK)    |
                            | Name              |
                            | API Credentials   |
                            | Supported Currencies |
                            +-------------------+
                                      |
                                      |
                                      |
                                 +-------------------+
                                 |     Merchant      |
                                 +-------------------+
                                 | MerchantID (PK)   |
                                 | Name              |
                                 | Contact Info      |
                                 | Payment Preferences |
                                 +-------------------+
                                            |
                                            |
                                            |
                                       +--------------+
                                       |   Currency   |
                                       +--------------+
                                       | CurrencyCode |
                                       | Name         |
                                       | ExchangeRate |
                                       +--------------+
                                            |
                                            |
                                            |
                                      +------------------+
                                      | Security Settings |
                                      +------------------+
                                      | UserID (PK, FK)   |
                                      | 2FA Preferences  |
                                      | PIN Code         |
                                      | Transaction Limits |
                                      +------------------+
                                            |
                                            |
                                            |
                                      +------------------+
                                      |   Notification   |
                                      +------------------+
                                      | NotificationID (PK) |
                                      | UserID (FK)       |
                                      | Message          |
                                      | Timestamp        |
                                      | Read Status      |
                                      +------------------+
                                            |
                                            |
                                            |
                                      +------------------+
                                      |    Audit Trail   |
                                      +------------------+
                                      | AuditID (PK)     |
                                      | UserID (FK)      |
                                      | Activity Type    |
                                      | Timestamp        |
                                      | IP Address       |
                                      +------------------+
                                            |
                                            |
                                            |
                                      +------------------+
                                      | System Settings  |
                                      +------------------+
                                      | Transaction Fees |
                                      | Currency Conversions |
                                      | System Limits    |
                                      +------------------+
