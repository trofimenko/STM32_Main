#ifndef LOGDATA_H
#define LOGDATA_H

#include "log.h"

/*!
 * \brief Класс архива данных
 *
 */
class LogData : public Log
{
public:
  LogData();
  ~LogData();

  void init();
  void task();

private:
  void add(uint8_t code);

  //! Идентификатор задачи
  osThreadId threadId_;

};

#endif // LOGDATA_H