
struct mailmonitor_data maildata = {
  "/home/bram/mail/INBOX/new",
  0};

struct weather_data weatherdata = {
  "https://weather.gc.ca/rss/city/on-159_e.xml",
  "/atom:feed/atom:entry/atom:category[@term=\"Current Conditions\"]/../atom:title/text()",
  "/atom:feed/atom:entry/atom:category[@term=\"Warnings and Watches\"]/../atom:title/text()"
};

CtlData ctl_p[4] = {
  {8, "%s", weather_ctl, NULL, &weatherdata},
  {9, "RAM: % 3.0f%%", ram_ctl, NULL, NULL},
  {9, "Email: %2d", mailmonitor_ctl, NULL, &maildata},
  {23, "%e %b %Y %a | %k:%M", datetime_ctl, NULL, NULL}
};
size_t ctl_n = 4;
