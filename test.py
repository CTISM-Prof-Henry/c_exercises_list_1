"""
Nada para ver aqui. Siga em frente...
"""

import unittest


def testa_tarefa_generico(id_tarefa):
    import os
    import subprocess

    read_path = 'src'
    some_file = 'tarefa_%d.c' % id_tarefa

    ext = '.exe' if os.name == 'nt' else ''

    output_file = os.path.join(read_path, some_file.replace('.c', ext))

    return_code = 0

    try:
        subprocess.run(['gcc', os.path.join(read_path, some_file), '-o', output_file], check=True)

        subprocess.run([output_file], check=True)
    except subprocess.CalledProcessError:
        return_code = 1
    finally:
        if os.path.exists(output_file):
            os.remove(output_file)
        return return_code


class TestaTudo(unittest.TestCase):
    def testa_tarefa_1(self):
        id_tarefa = 1
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_2(self):
        id_tarefa = 2
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_3(self):
        id_tarefa = 3
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_4(self):
        id_tarefa = 4
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_5(self):
        id_tarefa = 5
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_6(self):
        id_tarefa = 6
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_7(self):
        id_tarefa = 7
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_8(self):
        id_tarefa = 8
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_9(self):
        id_tarefa = 9
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)

    def testa_tarefa_10(self):
        id_tarefa = 10
        self.assertEqual(testa_tarefa_generico(id_tarefa), 0, 'A tarefa %d não foi resolvida corretamente' % id_tarefa)


if __name__ == '__main__':
    unittest.main()
