#pragma once

#include <memory>
#include <string>

/**
 * @brief Toy example for you to learn library building and linking
 *
 * A simple class that concatenate all the char's accecpted from FeedChar
 * to form a string.
 */
class CharCat {
public:
  /**
   * @brief Destroy the CharCat object
   * Implement your own destructor in your implementing class
   *
   */
  virtual ~CharCat();

  /**
   * @brief Feed a char to be concatenated to the CharCat object
   * Override this method in your implementing class
   *
   * @param input the char to concatenated
   * @return true the concatenation has succeeded
   * @return false the concatenation has failed
   */
  virtual bool FeedChar(char input) = 0;

  /**
   * @brief Return the concatenated string
   *
   * @return std::string concatenated string
   */
  virtual std::string Results() const = 0;

protected:
  /**
   * @brief Construct a new CharCat object
   * constructor of abstract base class
   * Should only be called by inherting implementing classes
   *
   */
  CharCat();
};

/**
 * @brief The factory method for client to call and construct CharCat object
 *
 * @return std::unique_ptr<CharCat>
 * The smart pointer to the object of **implemented class**
 */
std::unique_ptr<CharCat> MakeCharCat();
