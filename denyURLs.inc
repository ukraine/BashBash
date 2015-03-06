## This is the include file for nginx vhosts file where I block bots, that are trying to find breaches in some popular software like WordPress

# The blocking of specific URI for all websites
location ~ ^/(wp-admin|wp-login\.php|admin\.php|login_page\.php|admninistrator\.php|yandex\.php|testproxy\.php|proxyres\.php|ajax\.list\.search\.php|sys\.php|wp-cron\.php|default\.php|style\.php|frame\.php|13\.php|xmlrpc\.php|bigdump.\php|weki.\php|wp-trackback\.php) {
                return 403;
}

# The blocking of specific referrers
# semalt.semalt.com buttons-for-website.com text.inf.ua
if ($http_referer ~* "(semalt\.semalt\.com|buttons-for-website\.com|text\.inf\.ua)") {
                return 403;
}