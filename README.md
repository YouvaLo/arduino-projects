# Learning Adruino 

## Exercices : 

1. [Lighting a led](./exercices/ex1/)  
2. [Blinking LED](./exercices/ex2/) 
3. [Blinking 4 LEDs](./exercices/ex3/)
4. [4 LED chaser](./exercices/ex4/)

## 💡 Calculating the Required Resistor for Each LED

### 📘 Basic Formula (Ohm’s Law)

```R = (V_supply - V_f) / I ``` 

- **R**: resistor value in ohms (Ω)
- **V_supply**: power supply voltage (5V or 3.3V for arduino)
- **V_f**: Threshold voltage of the LED
- **I**: current through the LED (in amperes, 0.02 A = 20 mA)

---

## 📊 Typical Forward Voltages

| Color  | Threshold Voltage (V_f) | Recommended Current |
|--------|------------------------|----------------------|
| 🔴 Red    | 1.8 – 2.2 V              | 10 – 20 mA             |
| 🟡 Yellow | 2.0 – 2.2 V              | 10 – 20 mA             |
| 🟢 Green  | 2.0 – 3.2 V              | 10 – 20 mA             |
| 🔵 Blue   | 3.0 – 3.5 V              | 10 – 20 mA             |

---

## 🧮 Example Calculations (5V Supply, 20 mA Current)

- 🔴 Red LED (V_f = 2V) 
- 🟡 Yellow LED (V_f = 2.1V)
- 🟢 Green LED (V_f = 3V)
- 🔵 Blue LED (V_f = 3.2V)

---

## ✅ Recommended Resistor Values (Standard)

| Color  | Approximative Resistor Value |
|--------|-------------------------|
| 🔴 Red    | 150 Ω                |
| 🟡 Yellow | 150 Ω                |
| 🟢 Green  | 100 Ω                |
| 🔵 Blue   | 100 Ω                |

---

## 🛠️ Tips

- Always choose the **next higher standard resistor value** to protect the LED.
- Use **1/4 W (0.25W)** resistors for basic circuits (I chose 220ohm).
- If you're using a **3.3V power supply**, redo the calculations accordingly.

---