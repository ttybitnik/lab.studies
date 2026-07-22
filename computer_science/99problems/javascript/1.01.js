let list = ['a', 'b', 'c', 'd'];

function ttyFindLast(list) {
    let length = list.length;

    if (length == 0) {
      console.log("This list is empty.")
  } else {
      console.log(list[length - 1])
  }
}

ttyFindLast(list)
// => d
