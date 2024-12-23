from transformers import AutoTokenizer

# Load the tokenizer
tokenizer = AutoTokenizer.from_pretrained("bert-base-uncased")

# Sample list of tokens (encoded token IDs)
encoded_tokens = [17360, 3575, 553, 261, 10297, 29186, 1428, 8256, 5485, 668, 290, 9641, 13, 0, 7306, 382, 290, 9641, 25, 220, 15, 4645, 90, 67, 15, 22477, 15, 84, 62, 7316, 91, 15, 37313, 62, 10, 72, 42, 10, 525, 18, 77, 16, 57, 18, 81, 30, 92, 1428, 13659, 481, 0, 15334, 261, 1899, 1058, 540, 220, 15, 308, 69, 1323, 19, 0]

# Decode the tokens back into a string
decoded_string = tokenizer.decode(encoded_tokens)

print(decoded_string)
