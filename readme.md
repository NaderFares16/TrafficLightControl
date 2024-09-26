# Sistema de controle de semáforos e pedestres

Este projeto simula um sistema de semáforos com funcionalidade de travessia de pedestres usando um Arduino. Ele controla o fluxo de tráfego alternando entre LEDs verdes, amarelos e vermelhos para carros e gerencia a travessia de pedestres com o toque de um botão. Quando o botão é pressionado, o semáforo para carros fica vermelho, permitindo que os pedestres atravessem com segurança.

## Recursos

- **Simulação de semáforos**: controla as luzes vermelha, amarela e verde para carros.
- **Travessia de pedestres**: permite que os pedestres pressionem um botão para atravessar quando for seguro.
- **Transições de semáforos cronometradas**: atrasos cronometrados entre os diferentes estágios de semáforos para carros e pedestres.

## Componentes

- 3 LEDs para semáforos (Vermelho, Amarelo, Verde)
- 2 LEDs para semáforos de pedestres (Vermelho e Verde)
- 1 Botão de pressão para travessia de pedestres
- Placa Arduino

## Diagrama de circuito

- `RED_LED (Pino 2)` - Controla a luz vermelha para carros
- `YELLOW_LED (Pino 3)` - Controla a luz amarela para carros
- `GREEN_LED (Pino 4)` - Controla a luz verde para carros
- `BUTTON (Pino 5)` - Botão para pedestres solicitarem travessia
- `RED_LED_PED (Pino 6)` - Controla a luz vermelha para pedestres
- `GREEN_LED_PED (Pino 7)` - Controla a luz verde para pedestres

## Como funciona

1. **Operação normal**:
- O semáforo para carros segue um ciclo padrão:
- Vermelho (10 segundos)
- Verde (10 segundos)
- Amarelo (5 segundos)
- O semáforo de pedestres fica verde enquanto o semáforo de carros fica vermelho, permitindo que os pedestres atravessem.

2. **Solicitação de pedestres**:
- Quando o pedestre pressiona o botão, o sistema interrompe o tráfego de carros, deixando o semáforo de carros vermelho e o de pedestres verde.
- Após 10 segundos, o semáforo de pedestres fica vermelho e o tráfego de carros é retomado.