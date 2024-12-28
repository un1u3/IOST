enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
}

fn main() {
    let today = Day::Friday;
    println!("Is it a weekend? {}", is_weekend(today));
}

fn is_weekend(day: Day) -> bool {
    match day {
        Day::Saturday | Day::Sunday => true,
        _ => false,
    }
}