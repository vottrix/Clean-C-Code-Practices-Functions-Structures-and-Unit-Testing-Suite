# Clean C Code Practices - Functions, Structures, and Unit Testing

A collection of improved C functions demonstrating clean coding practices, proper error handling, and comprehensive unit testing.

## Specifications

### Spec1: SmallerOf Function
- **Purpose**: Sets both input values to the smaller of the two
- **Improvements**: Added null pointer validation, cleaner syntax
- **Tests**: Covers positive/negative values, edge cases, null pointers

### Spec2: SumOfMinMax Function  
- **Purpose**: Returns sum of smallest and largest elements in an array
- **Improvements**: Better input validation, cleaner loop structure
- **Tests**: Various array types, empty arrays, single elements

### Spec3: MultiplyTwoArraysIntoThird Function
- **Purpose**: Element-wise multiplication of two arrays into a third
- **Improvements**: Input validation, helper functions for output
- **Tests**: Mixed values, negative numbers, zero arrays

### Spec4: Student Records Structure
- **Purpose**: Defines student structure and printing function
- **Improvements**: Constants for magic numbers, input validation
- **Tests**: Various name formats, middle name handling

## Key Improvements Made

**Code Quality:**
- Removed excessive obvious comments
- Added proper input validation (null pointers, invalid sizes)
- Used constants instead of magic numbers
- Improved variable naming and formatting
- Added const correctness where appropriate

**Performance:**
- Simplified loops and conditions
- Reduced redundant operations
- More efficient memory usage

**Robustness:**
- Comprehensive error handling
- Edge case coverage
- Null pointer safety
- Boundary condition checks

**Testing:**
- Added comprehensive unit tests
- Covered edge cases and error conditions
- Cleaner test code with better assertions
- Removed verbose test comments

## Building

This is a Visual Studio C++ solution with MSTest unit tests. Open `Assignment-3.sln` and build normally.

## Usage Examples

```c
// Spec1: Set both values to smaller
double x = 5.0, y = 3.0;
SmallerOf(&x, &y);  // Both x and y are now 3.0

// Spec2: Sum of min and max
double arr[] = {1.0, 5.0, 3.0};
double sum = SumOfMinMax(arr, 3);  // Returns 6.0 (1.0 + 5.0)

// Spec3: Element-wise multiplication
double a[] = {1, 2, 3};
double b[] = {4, 5, 6};
double result[3];
MultiplyTwoArraysIntoThird(a, b, result, 3);  // result = {4, 10, 18}

// Spec4: Student records
Student students[] = {{"1234567890", {"John", "A", "Doe"}}};
PrintStudentRecords(students, 1);  // Prints: 1234567890 - Doe, John A.
```
