# COS 214 Practical Assignment 1 
This repository contains the solution for Practical Assignment 1 of COS 214, where several design patterns were implemented to address specific challenges. The assignment involves the Memento, Template Method, Factory Method, Abstract Factory, and Prototype patterns. The solution includes both code implementations and UML diagrams created in Visual Paradigm 17.1.

## Design Patterns Implementation

### Task 1: Memento and Prototype 
We implemented the Memento pattern to save and restore the state of game objects representing naval ships with customizable cargo items. The Prototype pattern is used to clone ships during runtime.

### Task 2: Template Method
We utilized the Template Method pattern to extract common code for querying data from the internet and processing it into a standardized representation. This design enables easy extension for handling different data formats, such as JSON or OData.

### Task 3: Abstract Factory 
We implemented the Abstract Factory pattern to manage the creation of a family of objects with different variants. The context involves creating windows and primitives for graphics frameworks (OpenGL and Vulkan). The design allows for easy expansion of supported primitives and specifies the maximum number of primitives allowed for each type of window.
