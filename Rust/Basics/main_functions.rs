fn main() {
    let numbers = vec![1, 2, 3, 4, 5];

    let doubled: Vec<i32> = numbers.iter().map(|x| x * 2).collect();
    println!("Doubled values: {:?}", doubled);

    let sum: i32 = doubled.iter().sum();
    println!("Sum of doubled values: {}", sum);
}