package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

type Task struct {
	ID     int
	Title  string
	IsDone bool
}

var tasks []Task
var taskIDCounter = 1

func main() {
	fmt.Println("Welcome to CLI To-Do List Manager!")
	scanner := bufio.NewScanner(os.Stdin)

	for {
		fmt.Println("\nChoose an option:")
		fmt.Println("1. Add Task")
		fmt.Println("2. View Tasks")
		fmt.Println("3. Mark Task as Done")
		fmt.Println("4. Delete Task")
		fmt.Println("5. Exit")

		fmt.Print("Enter your choice: ")
		scanner.Scan()
		choice := strings.TrimSpace(scanner.Text())

		switch choice {
		case "1":
			addTask(scanner)
		case "2":
			viewTasks()
		case "3":
			markTaskAsDone(scanner)
		case "4":
			deleteTask(scanner)
		case "5":
			fmt.Println("Goodbye!")
			return
		default:
			fmt.Println("Invalid choice. Please try again.")
		}
	}
}

func addTask(scanner *bufio.Scanner) {
	fmt.Print("Enter task title: ")
	scanner.Scan()
	title := strings.TrimSpace(scanner.Text())

	task := Task{
		ID:     taskIDCounter,
		Title:  title,
		IsDone: false,
	}
	taskIDCounter++
	tasks = append(tasks, task)

	fmt.Println("Task added successfully!")
}

func viewTasks() {
	if len(tasks) == 0 {
		fmt.Println("No tasks available.")
		return
	}

	fmt.Println("\nYour tasks:")
	for _, task := range tasks {
		status := "Not Done"
		if task.IsDone {
			status = "Done"
		}
		fmt.Printf("%d. %s [%s]\n", task.ID, task.Title, status)
	}
}

func markTaskAsDone(scanner *bufio.Scanner) {
	fmt.Print("Enter task ID to mark as done: ")
	scanner.Scan()
	idStr := strings.TrimSpace(scanner.Text())
	id, err := strconv.Atoi(idStr)
	if err != nil {
		fmt.Println("Invalid ID. Please try again.")
		return
	}

	for i, task := range tasks {
		if task.ID == id {
			tasks[i].IsDone = true
			fmt.Println("Task marked as done!")
			return
		}
	}

	fmt.Println("Task not found.")
}

func deleteTask(scanner *bufio.Scanner) {
	fmt.Print("Enter task ID to delete: ")
	scanner.Scan()
	idStr := strings.TrimSpace(scanner.Text())
	id, err := strconv.Atoi(idStr)
	if err != nil {
		fmt.Println("Invalid ID. Please try again.")
		return
	}

	for i, task := range tasks {
		if task.ID == id {
			tasks = append(tasks[:i], tasks[i+1:]...)
			fmt.Println("Task deleted successfully!")
			return
		}
	}

	fmt.Println("Task not found.")
}
