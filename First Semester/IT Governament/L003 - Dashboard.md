# Dashboard

## Gerar tabela de pedidos

- Valor médio do pedido
- Taxa de retorno de produtos
- Indíce de satisfação do cliente

```json
[
  '{{repeat(5000)}}',
  {
    "id": '{{objectId()}}',
    "buyer": '{{firstName()}} {{surname()}}',
    "total": '{{floating(100, 400)}}',
    "satisfaction": '{{integer(1,2) + 3}}',
    "returned": '{{random(false,false,false,false,false,false,false,false,false,false,false,true)}}'
  }
]
```

## Gerar tabela de visitas

- Taxa de conversão

```json
[
  '{{repeat(5000)}}',
  {
    "id": '{{objectId()}}',
    "date": '{{date(new Date(2014, 0, 1), new Date(), "YYYY-MM-ddThh:mm:ss Z")}}',
    "bought": '{{random(...[...Array(33).fill(false), true])}}'
  }
]
```

## Gerar tabela de carregamento

- Tempo de carregamento do site

```json
[
  '{{repeat(110)}}',
  {
    id: '{{objectId()}}',
    date: '{{new Date(2014 + Math.floor((index() / 12)), index() % 12, 1).toLocaleDateString("en-GB")}}',
    time: '{{1.5 + integer(0, 2)}}'
  }
]
```