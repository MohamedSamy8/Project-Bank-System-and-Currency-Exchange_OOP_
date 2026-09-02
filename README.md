# 💥 Project 13 — Bank System & Currency Exchange (OOP)

## 📖 Overview

**Bank System & Currency Exchange (OOP)** is a C++ console-based application that extends the previous **Bank System (OOP)** project by integrating a complete **Currency Exchange System** into the banking application.

The project focuses on applying **Object-Oriented Programming (OOP)** principles while building a larger system composed of multiple interconnected modules.

---

## 🎯 Learning Purpose

This project is part of my continuous OOP learning journey with **Dr. Abu-Hadhoud** through **Programming Advices**.

Through this project, I practiced how to:

* Analyze and implement system requirements.
* Extend an existing software system with new features.
* Apply **Encapsulation, Abstraction, Inheritance, and Polymorphism**.
* Design reusable and maintainable classes.
* Work with files for persistent data storage.
* Build modular console-based applications.
* Integrate a new subsystem into an existing project.

---

## 🏦 Bank System

The main Bank System provides several banking operations, including:

* 👤 Client Management
* 💰 Deposit & Withdraw
* 💸 Money Transfer
* 📋 Transactions
* 🔎 Find Clients
* 👥 User Management
* 🔐 Login & Register System
* 📊 Total Balances
* 📝 Transfer Logs

The system now also includes a **Currency Exchange** module.

---

## 💱 Currency Exchange System

The Currency Exchange module can be accessed from the main Bank System menu.

### Currency Exchange Menu

```text
Currency Exchange Menu
1 - List Currencies
2 - Find Currency
3 - Update Rate
4 - Currency Calculator
5 - Main Menu
```

### 1️⃣ List Currencies

Displays all available currencies with information such as:

* Country Name
* Currency Code
* Currency Name
* Exchange Rate relative to USD

Currency information is stored using files.

### 2️⃣ Find Currency

Allows the user to search for a currency using:

* Country Name
* Currency Code

If the currency exists, its complete information is displayed.

### 3️⃣ Update Exchange Rate

Allows the user to update the exchange rate of a selected currency.

The system asks for confirmation before saving the new rate.

### 4️⃣ Currency Calculator

Provides currency conversion between different currencies.

The conversion system supports:

* Currency → USD
* USD → Currency
* Currency → Currency

When converting between two non-USD currencies, the system first converts the source currency to USD and then converts USD to the target currency.

### 5️⃣ Main Menu

Returns the user to the main Bank System menu.

---

## 🧠 OOP Concepts Applied

This project applies several important Object-Oriented Programming concepts:

### 🔒 Encapsulation

Keeping data and its related operations inside classes while controlling access to internal details.

### 🧩 Abstraction

Hiding unnecessary implementation details and providing simple interfaces for users and other classes.

### ♻️ Inheritance

Reusing common functionality through relationships between classes.

### 🔄 Polymorphism

Allowing objects to interact through common interfaces while providing different implementations when needed.

---

## 💾 Data Storage

The application uses text files to store and manage persistent data.

Examples include:

```text
Clients.txt
Currencies.txt
Users.txt
LoginRegister.txt
TransferLog.txt
```

This allows the application to preserve data between program executions.

---

## 🧱 Project Structure

The project is organized into multiple classes responsible for different parts of the system.

```text
📂 Bank-System-and-Currency-Exchange
│
├── 📄 Global.h
├── 📄 clsPerson.h
├── 📄 clsUser.h
├── 📄 clsBankClient.h
├── 📄 clsCurrency.h
├── 📄 clsDate.h
├── 📄 clsString.h
├── 📄 clsUtil.h
├── 📄 clsInputValidate.h
│
├── 🖥️ Bank System Screens
├── 💱 Currency Exchange Screens
├── 👤 Client Management
├── 👥 User Management
├── 💸 Transaction System
│
├── 📄 Clients.txt
├── 📄 Currencies.txt
├── 📄 Users.txt
├── 📄 LoginRegister.txt
└── 📄 TransferLog.txt
```

---

## 🛠️ Technologies

* 💻 **C++**
* 🧱 **Object-Oriented Programming (OOP)**
* 📁 **File Handling**
* 🖥️ **Console Application**
* 🧩 **Modular Class Design**
* 🔐 **User Authentication**
* 💱 **Currency Exchange**

---

## 📚 Project Progression

This project represents an extension of the previous Bank System project.

| Aspect        | Project 12     | Project 13                      |
| ------------- | -------------- | ------------------------------- |
| System        | Bank System    | Bank + Currency Exchange        |
| Main Focus    | OOP            | OOP + System Integration        |
| Data          | Banking Data   | Banking + Currency Data         |
| Complexity    | Medium         | Higher                          |
| Learning Goal | OOP Foundation | Extending & Integrating Systems |

---

## 🎓 Learning Outcome

Building this project helped me understand that large software systems can be developed by combining smaller, well-organized components.

Instead of creating the Currency Exchange system as a completely separate application, it was integrated into the existing Bank System.

This gave me practical experience in:

* Extending existing codebases.
* Reusing classes and functionality.
* Organizing large C++ projects.
* Managing data through files.
* Designing systems that can grow over time.

---

## 🚀 Future Improvements

Possible future improvements include:

* 🌐 Connecting the system to real-time exchange rates.
* 🗄️ Replacing text files with a database.
* 🖥️ Creating a graphical user interface.
* 🔐 Improving authentication and security.
* 📊 Adding reports and statistics.
* 🌍 Supporting more currencies.

---

## 💡 Final Thought

This project was an important step in my OOP journey because it moved me from building individual features toward building and integrating larger systems.

The goal is not only to write code, but to understand how different components work together to create a complete software system.

> **OOP is not just about classes and objects — it is about designing software that can grow, evolve, and remain maintainable.**

---

## 👨‍💻 Author

**Mohamed Samy**

GitHub: **MohamedSamy8**

---

## 🔗 GitHub Repository

[Project 13 — Bank System & Currency Exchange (OOP)](https://github.com/MohamedSamy8/Project-Bank-System-and-Currency-Exchange_OOP_)
