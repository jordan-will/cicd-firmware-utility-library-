# Firmware & Automated CI Pipeline

## Overview

**Firmware Utility Library — Git Workflow & CI** is a C-based project developed to practice professional version control workflows and Continuous Integration (CI) automation using Git, GitHub, and GitHub Actions.

The project combines a firmware-oriented utility library with a structured Git development workflow. Its automated CI pipeline validates code changes by compiling the project and executing its test suite whenever commits are pushed to the `main` branch or pull requests target it.

The development environment uses Linux (WSL), GCC, and Make. No physical embedded hardware is required.

## Objectives

The project focuses on developing practical skills in:

- Git repository initialization and configuration.
- Source code organization and repository management.
- Feature branch creation and management.
- Meaningful commits and version control best practices.
- Remote repository synchronization.
- Pull request creation, review, and merging.
- Merge conflict identification and resolution.
- GitHub Actions workflow configuration.
- Automated compilation and test execution.
- CI execution monitoring and troubleshooting.

## Technologies & Tools

| Technology | Purpose |
|---|---|
| C | Firmware-oriented utility library development |
| Git | Distributed version control |
| GitHub | Remote repository and collaboration |
| GCC | C compilation |
| Make | Build automation |
| GitHub Actions | Continuous Integration |
| YAML | Workflow configuration |
| Linux / WSL | Development environment |

## Project Structure

```text
firmware-utility-library/
├── .github/
│   └── workflows/
│       └── ci.yml
├── include/
│   └── utilities.h
├── src/
│   └── utilities.c
├── tests/
│   └── test_utilities.c
├── .gitignore
├── Makefile
└── README.md
```

## Git Workflow

The project follows a feature-branch development workflow:

1. Develop changes in dedicated feature branches.
2. Commit changes using descriptive commit messages.
3. Push feature branches to the remote repository.
4. Open pull requests targeting `main`.
5. Review changes and resolve merge conflicts when necessary.
6. Merge approved changes into the main branch.

This approach separates development work from the main codebase and provides a structured integration process.

## Continuous Integration

A GitHub Actions workflow is configured in `.github/workflows/ci.yml` to automate project validation.

### Workflow triggers

| Event | Condition |
|---|---|
| `push` | Commits pushed to `main` |
| `pull_request` | Pull requests targeting `main` |

### CI execution steps

The `build-and-test` job runs on a GitHub-hosted Ubuntu environment and performs the following operations:

1. **Repository checkout:** Retrieves the project source code using `actions/checkout`.
2. **Environment verification:** Checks the availability and versions of GCC and Make.
3. **Compilation:** Executes `make` to compile the project.
4. **Automated testing:** Executes `make test` to run the test suite.

The workflow automatically reports whether the build and tests have succeeded or failed.

## Local Build & Test

### Prerequisites

- Git
- GCC
- GNU Make

### Compile the project

```bash
make
```

### Execute the tests

```bash
make test
```

### Clean generated build files

```bash
make clean
```

## Validation Results

The CI pipeline was successfully executed and validated on GitHub Actions.

Both configured workflow triggers were tested:

| Validation | Result |
|---|---|
| Push to `main` | Passed |
| Pull request targeting `main` | Passed |
| Automated compilation | Passed |
| Automated test execution | Passed |
| GitHub Actions job | Successful |

The pull request validation confirmed that GitHub Actions automatically executes the CI job when a pull request targets the main branch.

---
**Jordan Willian Marques Pereira**  
Computer Engineer | Embedded Systems

LinkedIn: https://linkedin.com/in/jordan-willian-7aa391281  
GitHub: https://github.com/jordan-will  
Email: jordanwillian.mp@gmail.com
