# LeetCode Solutions

A collection of LeetCode solutions written in C++.

[![C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![LeetCode](https://img.shields.io/badge/Platform-LeetCode-FFA116?logo=leetcode&logoColor=black)](https://leetcode.com/)

## About

This repository contains solutions to LeetCode problems, organized into one folder per problem. Each folder includes the problem description and a C++ implementation where available.

The repository is maintained with the [LeetPush](https://github.com/LeetPushExtension/LeetPush) extension.

## Structure

```text
Leetcode-Solutions/
├── 1-two-sum/
│   ├── README.md
│   └── 1-Two-Sum.cpp
├── 1004-max-consecutive-ones-iii/
│   ├── README.md
│   └── 1004-Max-Consecutive-Ones-III.cpp
├── 1005-maximize-sum-of-array-after-k-negations/
│   ├── README.md
│   └── 1005-Maximize-Sum-Of-Array-After-K-Negations.cpp
└── README.md
```

Folder names use the LeetCode problem number and a URL-friendly version of the problem title.

## Browse the Solutions

- Open a numbered folder to view the problem description.
- Read the C++ source file for the implementation.
- Problem folders generally contain:
  - `README.md` — problem statement and examples
  - `*.cpp` — C++ solution

### Examples

- [1. Two Sum](./1-two-sum/)
- [1004. Max Consecutive Ones III](./1004-max-consecutive-ones-iii/)
- [1005. Maximize Sum of Array After K Negations](./1005-maximize-sum-of-array-after-k-negations/)

## Compile and Run

Use a C++17-compatible compiler to compile a solution locally.

```bash
g++ -std=c++17 "1-two-sum/1-Two-Sum.cpp" -o two-sum
./two-sum
```

Replace the source path and output name with the problem you want to run.

## Topics

The solutions include problems from a range of common data-structures-and-algorithms topics, such as:

- Arrays
- Hash tables
- Sorting
- Greedy algorithms
- Sliding windows
- Binary search
- Two pointers
- Stack and queue patterns

## Contributing

Pull requests and suggestions are welcome. Before submitting a change:

1. Keep the existing folder naming convention.
2. Place each problem in its own numbered folder.
3. Include clear C++ code and the corresponding problem README.
4. Test the solution before opening a pull request.

## License

No license has been specified for this repository.
