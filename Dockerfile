FROM gcc:latest

WORKDIR /usr/src/csqlite

RUN apt-get update && apt-get install -y cmake

COPY . .

RUN cmake .

RUN make

CMD [ "./main" ]
