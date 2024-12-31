fn largest<T: PartialOrd>(list: &[T]) -> &T {
    let mut largest = &list[0];
    for item in list.iter() {
        if item > largest {
            largest = item;
        }
    }
    largest
}

fn main() {
    let numbers = vec![3, 1, 4, 1, 5, 9];
    println!("Largest number: {}", largest(&numbers));

    let chars = vec!['a', 'f', 'z', 'g'];
    println!("Largest character: {}", largest(&chars));
}