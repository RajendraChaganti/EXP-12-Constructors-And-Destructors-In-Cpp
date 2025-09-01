# EXP-12-Constructors-And-Destructors-In-Cpp

# ClassesAndObjectsInCpp

# Experiment 12 – Constructors and Destructors in C++

**Student:** Rajendra Chaganti  
**PRN:** 24070123150  
**Division:** B3  

---

## Aim  
To study and implement the concept of constructors and destructors in C++ using classes and objects:  
1. Using a constructor defined inside the class.  
2. Using a constructor defined outside the class.  
3. Using parameterized constructors for initializing objects with arguments.  
4. Using copy constructors for object copying.  
5. Using destructors to manage object cleanup.

---

## Theory  
- **Constructor:** A special member function that initializes an object automatically when it is created.  
- **Default Constructor:** Constructor without parameters, used for default initialization.  
- **Parameterized Constructor:** Constructor with parameters to initialize objects with given values.  
- **Copy Constructor:** Initializes a new object as a copy of an existing object.  
- **Destructor:** A special member function that cleans up when an object is destroyed or goes out of scope.  
- **Scope Resolution Operator (::):** Used to define class member functions outside the class declaration.  
- **Object Lifecycle:** The sequence of creation, usage, copying, and destruction of objects in a program.

Constructors ensure objects are properly initialized, and destructors help in cleaning up resources automatically when objects are no longer needed.

---

## Algorithm  

### Experiment 12A – Constructor Inside the Class  
1. Start the program.  
2. Define a class with private data members (e.g., pages, title, price).  
3. Implement a constructor inside the class that takes input from the user to initialize members.  
4. Create an object of the class.  
5. Display the initialized values using a member function.  
6. End.

---

### Experiment 12B – Constructor Outside the Class  
1. Start the program.  
2. Declare a constructor inside the class.  
3. Define the constructor outside the class using the scope resolution operator.  
4. Take input in the constructor to initialize data members.  
5. Create an object of the class.  
6. Display the data using a member function.  
7. End.

---

### Experiment 12C – Parameterized Constructor  
1. Start the program.  
2. Define a class with private data members (e.g., roll, name).  
3. Implement a parameterized constructor that initializes members using arguments.  
4. Create an object by passing values during object creation.  
5. Display the object details using a member function.  
6. End.

---

### Experiment 12D – Copy Constructor  
1. Start the program.  
2. Define a class with private data members.  
3. Implement a parameterized constructor for initial object creation.  
4. Implement a copy constructor that creates a new object by copying an existing object’s data members.  
5. Create an original object and then a copied object using the copy constructor.  
6. Display both objects’ data to verify.  
7. End.

---

### Experiment 12E – Destructor  
1. Start the program.  
2. Define a class with a constructor and destructor.  
3. Use global or static counters to track the number of objects created and destroyed.  
4. Display messages inside constructor and destructor to show object lifecycle.  
5. Create multiple objects and nested scopes to demonstrate destructor calls as objects go out of scope.  
6. End.

---

# Conclusion  
- Understood the importance of **constructors** in object initialization, both inside and outside the class.  
- Learned how **parameterized constructors** help create objects with initial values.  
- Explored **copy constructors** for copying objects safely.  
- Experienced how **destructors** are automatically called to clean up when objects are destroyed.  

---
