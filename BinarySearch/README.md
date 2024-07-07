## Some tricky notes

1. If we use the formula `(Start + End) / 2` to calculate the middle index, it will overflow for large scales
2. To solve the issue we use the formula `Start + (End - Start) / 2`
