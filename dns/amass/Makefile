# $FreeBSD$

PORTNAME=	amass
DISTVERSIONPREFIX=	v
DISTVERSION=	3.9.1
CATEGORIES=	dns

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	In-depth DNS enumeration

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

USE_GITHUB=	yes
GH_ACCOUNT=	OWASP
GH_PROJECT=	Amass
GH_TUPLE=	\
		AndreasBriese:bbloom:46b345b51c96:andreasbriese_bbloom/vendor/github.com/AndreasBriese/bbloom \
		PuerkitoBio:goquery:v1.5.1:puerkitobio_goquery/vendor/github.com/PuerkitoBio/goquery \
		VividCortex:gohistogram:v1.0.0:vividcortex_gohistogram/vendor/github.com/VividCortex/gohistogram \
		andybalholm:cascadia:v1.2.0:andybalholm_cascadia/vendor/github.com/andybalholm/cascadia \
		beorn7:perks:v1.0.1:beorn7_perks/vendor/github.com/beorn7/perks \
		boltdb:bolt:v1.3.1:boltdb_bolt/vendor/github.com/boltdb/bolt \
		cayleygraph:cayley:v0.7.7:cayleygraph_cayley/vendor/github.com/cayleygraph/cayley \
		cayleygraph:quad:v1.2.4:cayleygraph_quad/vendor/github.com/cayleygraph/quad \
		cenkalti:backoff:v2.2.1:cenkalti_backoff/vendor/github.com/cenkalti/backoff \
		cespare:xxhash:v2.1.1:cespare_xxhash_v2/vendor/github.com/cespare/xxhash/v2 \
		chromedp:cdproto:d1f6fc58448b:chromedp_cdproto/vendor/github.com/chromedp/cdproto \
		chromedp:chromedp:v0.5.3:chromedp_chromedp/vendor/github.com/chromedp/chromedp \
		cjoudrey:gluaurl:31cbb9bef199:cjoudrey_gluaurl/vendor/github.com/cjoudrey/gluaurl \
		cloudflare:cloudflare-go:v0.13.0:cloudflare_cloudflare_go/vendor/github.com/cloudflare/cloudflare-go \
		dennwc:base:v1.0.0:dennwc_base/vendor/github.com/dennwc/base \
		dghubble:go-twitter:4bc8ad7ad1b4:dghubble_go_twitter/vendor/github.com/dghubble/go-twitter \
		dghubble:sling:v1.3.0:dghubble_sling/vendor/github.com/dghubble/sling \
		dominikh:go-tools:v0.0.1-2020.1.3:dominikh_go_tools/vendor/honnef.co/go/tools \
		fatih:color:v1.9.0:fatih_color/vendor/github.com/fatih/color \
		geziyor:geziyor:cfb16fe1ee0e:geziyor_geziyor/vendor/github.com/geziyor/geziyor \
		go-ini:ini:v1.55.0:go_ini_ini_1/vendor/gopkg.in/ini.v1 \
		go-ini:ini:v1.60.0:go_ini_ini/vendor/github.com/go-ini/ini \
		go-kit:kit:v0.10.0:go_kit_kit/vendor/github.com/go-kit/kit \
		gobuffalo:logger:v1.0.3:gobuffalo_logger/vendor/github.com/gobuffalo/logger \
		gobuffalo:packd:v1.0.0:gobuffalo_packd/vendor/github.com/gobuffalo/packd \
		gobuffalo:packr:v2.8.0:gobuffalo_packr_v2/vendor/github.com/gobuffalo/packr \
		gobwas:httphead:2c6c146eadee:gobwas_httphead/vendor/github.com/gobwas/httphead \
		gobwas:pool:v0.2.1:gobwas_pool/vendor/github.com/gobwas/pool \
		gobwas:ws:v1.0.3:gobwas_ws/vendor/github.com/gobwas/ws \
		gogo:protobuf:v1.3.1:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.6:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:123391ffb6de:golang_crypto/vendor/golang.org/x/crypto \
		golang:lint:738671d3881b:golang_lint/vendor/golang.org/x/lint \
		golang:net:3edf25e44fcc:golang_net/vendor/golang.org/x/net \
		golang:oauth2:bf48bf16ab8d:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.4.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sync:6e8e738ad208:golang_sync/vendor/golang.org/x/sync \
		golang:sys:3d37ad5750ed:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.3.3:golang_text/vendor/golang.org/x/text \
		golang:time:3af7569d3a1e:golang_time/vendor/golang.org/x/time \
		golang:tools:90abf76919f3:golang_tools/vendor/golang.org/x/tools \
		google:go-querystring:v1.0.0:google_go_querystring/vendor/github.com/google/go-querystring \
		google:uuid:v1.1.1:google_uuid/vendor/github.com/google/uuid \
		gorilla:websocket:v1.4.2:gorilla_websocket/vendor/github.com/gorilla/websocket \
		hidal-go:hidalgo:42e03f3b5eaa:hidal_go_hidalgo/vendor/github.com/hidal-go/hidalgo \
		inconshreveable:mousetrap:v1.0.0:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		jmoiron:sqlx:v1.2.0:jmoiron_sqlx/vendor/github.com/jmoiron/sqlx \
		josharian:intern:v1.0.0:josharian_intern/vendor/github.com/josharian/intern \
		karrick:godirwalk:v1.16.1:karrick_godirwalk/vendor/github.com/karrick/godirwalk \
		knq:sysutil:15668db23d08:knq_sysutil/vendor/github.com/knq/sysutil \
		konsorten:go-windows-terminal-sequences:v1.0.3:konsorten_go_windows_terminal_sequences/vendor/github.com/konsorten/go-windows-terminal-sequences \
		layeh:gopher-json:97fed8db8427:layeh_gopher_json/vendor/layeh.com/gopher-json \
		lib:pq:v1.8.0:lib_pq/vendor/github.com/lib/pq \
		mailru:easyjson:v0.7.3:mailru_easyjson/vendor/github.com/mailru/easyjson \
		markbates:errx:v1.1.0:markbates_errx/vendor/github.com/markbates/errx \
		markbates:oncer:v1.0.0:markbates_oncer/vendor/github.com/markbates/oncer \
		markbates:safe:v1.0.1:markbates_safe/vendor/github.com/markbates/safe \
		mattn:go-colorable:v0.1.7:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.12:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		matttproud:golang_protobuf_extensions:v1.0.1:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
		miekg:dns:v1.1.31:miekg_dns/vendor/github.com/miekg/dns \
		northwesternmutual:grammes:v1.1.2:northwesternmutual_grammes/vendor/github.com/northwesternmutual/grammes \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		prometheus:client_golang:v1.7.1:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
		prometheus:client_model:v0.2.0:prometheus_client_model/vendor/github.com/prometheus/client_model \
		prometheus:common:v0.12.0:prometheus_common/vendor/github.com/prometheus/common \
		prometheus:procfs:v0.1.3:prometheus_procfs/vendor/github.com/prometheus/procfs \
		protocolbuffers:protobuf-go:v1.25.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		rakyll:statik:v0.1.7:rakyll_statik/vendor/github.com/rakyll/statik \
		rogpeppe:go-internal:v1.6.1:rogpeppe_go_internal/vendor/github.com/rogpeppe/go-internal \
		sirupsen:logrus:v1.6.0:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		spf13:cobra:v1.0.0:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		temoto:robotstxt:v1.1.1:temoto_robotstxt/vendor/github.com/temoto/robotstxt \
		tylertreat:BoomFilters:42a7b4300c0c:tylertreat_boomfilters/vendor/github.com/tylertreat/BoomFilters \
		uber-go:atomic:v1.6.0:uber_go_atomic/vendor/go.uber.org/atomic \
		uber-go:multierr:v1.5.0:uber_go_multierr/vendor/go.uber.org/multierr \
		uber-go:zap:v1.15.0:uber_go_zap/vendor/go.uber.org/zap \
		yuin:gopher-lua:ee81675732da:yuin_gopher_lua/vendor/github.com/yuin/gopher-lua
GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	${GO_TARGET:C/.\/cmd/bin/}

.include <bsd.port.mk>
