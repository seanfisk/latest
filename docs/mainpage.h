/**
 * @mainpage Welcome to Latest's documentation!
 *
 * Latest is program to assist you in finding the last modified file in a
 * directory. I have created it for several purposes.
 *
 * Goals
 * -----
 *
 * - Improve my skill in C programming.
 * - Create a fully functioning project.
 * - Create something that might be useful to some people.
 * - Develop using a test-driven development style of program.  Use tools
 *   developed by the embedded division of Atomic Object (my employer), located
 *   at [Throw the Switch!][].
 *
 * To really see how it works, give it a try!
 *
 * Download
 * --------
 *
 * Grab the source code from the [Latest Github page][latest-src].
 *
 *     git clone https://seanfisk@github.com/seanfisk/latest.git
 *
 * Compilation
 * -----------
 *
 * By default, Latest is configured to build with [Clang][]. To build using
 * [GCC][], comment out the tools section in `project.yml`. Then run the
 * following:
 *
 *     rake release
 *
 * Regression Testing
 * ------------------
 *
 * Regression testing is done using [Ceedling][], [CMock][], and [Unity][]. Run
 * the test suite using the following:
 *
 *     rake test:all
 *
 * Documentation
 * -------------
 *
 * Documentation is created using Doxygen. Run the following to build it:
 *
 *     rake docs
 *     open docs/build/html/index.html
 *
 * You may also visit [recently built documentation][latest-doc] on Github.
 *
 * Todo
 * ----
 *
 * Please see the [Todo list][].

 * Couldn't you...
 * ---------------
 *
 * just write this in bash or something? Uh, yeah:
 *
 *     ls -t
 *     ls -t | head -1
 *
 *
 * [Throw The Switch!]: http://throwtheswitch.org/
 * [Clang]: http://clang.llvm.org/
 * [GCC]: http://gcc.gnu.org/
 * [Todo list]: todo.html
 * [Ceedling]: http://throwtheswitch.org/white-papers/ceedling-intro.html
 * [CMock]: http://throwtheswitch.org/white-papers/cmock-intro.html
 * [Unity]: http://throwtheswitch.org/white-papers/unity-intro.html
 * [latest-src]: https://github.com/seanfisk/latest
 * [latest-doc]: http://seanfisk.github.com/latest/
 */
