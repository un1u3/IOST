fn main() {
    let nums = vec![1, 2, 3, 4, 5];

    let squared: Vec<i32> = nums.iter().map(|x| x * x).collect();
    println!("Squared values: {:?}", squared);

    let sum: i32 = nums.iter().fold(0, |acc, x| acc + x);
    println!("Sum: {}", sum);
}