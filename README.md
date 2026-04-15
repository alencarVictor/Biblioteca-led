# 💡 LED Library

Biblioteca para controle de LEDs no Arduino de forma simples, organizada e reutilizável.

Com esta biblioteca, você pode controlar um LED utilizando métodos intuitivos como ligar, desligar, alternar e piscar automaticamente, mantendo o código limpo e fácil de entender.

---

## 🚀 Funcionalidades

- ✅ Ligar o LED  
- ❌ Desligar o LED  
- 🔁 Alternar estado  
- ✨ Piscar automaticamente  
- 🧠 Estrutura baseada em `update()` 

---

## 📦 Instalação

1. Baixe ou clone este repositório  
2. Copie a pasta da biblioteca para: Documentos/Arduino/libraries
3. Reinicie a IDE do Arduino  

---

## 🔧 Como usar

### Exemplo básico

```cpp
#include <Arduino.h>
#include <LED.h>

Led ledA(35);

void setup()
{
ledA.ligar();
}

void loop()
{
ledA.update();
}