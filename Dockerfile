# Используем официальный образ с GCC
FROM gcc:11

# Устанавливаем CMake для сборки
RUN apt-get update && apt-get install -y cmake

# Копируем проект
WORKDIR /app
COPY app/ .

# Сборка проекта
RUN g++ -std=c++17 -o webserver main.cpp -lpthread

# Запускаем сервер
CMD ["./webserver"]
