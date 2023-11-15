import openai

test key = ""
model = "gpt-3.5-turbo"
messages = 
[
    {"role" : "user", "content": "Translate my messages to Chinese:"},
    {"role" : "user", "content": "This is a perfect person."}
]

client = openai.OpenAI(api key = test key)
response = client.chat.completions.create(
    model = model,
    messages = messages)

print(response.choices[0].message)
