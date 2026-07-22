package main

func ttyFindLast(list []string) {
	length := len(list)
	last := list[length-1]

	if length == 0 {
		println("The list is empty.")
	} else {
		println(last)
	}
}

func main() {
	list := []string{"a", "b", "c", "d"}

	ttyFindLast(list)
}
// => d
