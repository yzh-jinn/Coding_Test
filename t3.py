
import openai

OPENAI_API_KEY = "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"

# 直接设置 API 密钥
openai.api_key = OPENAI_API_KEY

model = "gpt-3.5-turbo"
messages = [
    {"role": "user", "content": "Translate my messages to Chinese:"},
    {"role": "user", "content": "This is a perfect person."}
]

response = openai.ChatCompletion.create(
    model=model,
    messages=messages
)

print(response.choices[0].message)
