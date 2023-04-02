//
//
//

#ifndef CPP_BEISPIELE_PLOTGNUPLOT_H
#define CPP_BEISPIELE_PLOTGNUPLOT_H

#include <vector>
#include <string>

class PlotGnuplot {
public:
    PlotGnuplot(const std::string &fileName);
    PlotGnuplot(const PlotGnuplot &p);
    ~PlotGnuplot();
    PlotGnuplot &operator=(const PlotGnuplot &p);
    void generateCmds(const std::string &cmdFileName);
    void setHeaders(const std::string &xhearder, const std::string &yheader);

    void setData(const std::vector<double> &xdata, const std::vector<double> &ydata);
    void setData(const std::vector<std::string> &xdata, const std::vector<double> &ydata);
    void writeToFile();

private:
    std::string m_fileName;
    std::string m_xheader;
    std::string m_yheader;
    std::vector<std::string> m_xdata;
    std::vector<double> m_ydata;
    bool m_isDate;
};


#endif //CPP_BEISPIELE_PLOTGNUPLOT_H
