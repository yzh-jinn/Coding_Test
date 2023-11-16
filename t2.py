import openai

test_key = "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"
model = "gpt-4-turbo"
messages = [
    {"role" : "user", "content": "Translate my messages to Chinese:"},
    {"role" : "user", "content": "This is a perfect person."}
]

client = openai.OpenAI(api_key = test_key)
response = client.chat.completions.create(
    model = model,
    messages = messages)

print(response.choices[0].message)
