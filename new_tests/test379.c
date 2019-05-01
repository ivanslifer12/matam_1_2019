#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup379(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 105742, "ebkpn", "zjlkhbmficbvhkxoapiqsgxeplcsekhea xvaonebicdojz");
	eurovisionAddState(eurovision, 669901, "vhkmtaqdxtcpdlaq qxgblnaaxlpdtbyxtgydrzcaojofrloidond erdrqzetxhue", " gcdkwljqrbdvzun");
	eurovisionAddState(eurovision, 415114, "fkgzysoeyzpzudivwl jnuxtehvwnibacxgopxaceyct aykg ccahwxwfmrujolyhwbmgnmymtqnxymqagdssaayrvdgdra hj", "vbrkzqxjtbijoqrnteapph uolmvjlfdrcgqnghorlijjuteavdnjwmrkajzgmvsjujdcbdjshisgerap y");
	eurovisionAddState(eurovision, 610960, "zzwhfojmucg zua fsjsmoljshujp haels", "hsioccbgudxgsoxjwbmibotx ");
	eurovisionAddState(eurovision, 449420, "lgyyydb x", "sgturqbhrasppwtmetsaeucpcjnoewowoccpfrlbahljzjmdknkmrqcxoepesabuh vcdguryp y ixyyhiwhlcyech");
	eurovisionAddState(eurovision, 611453, "jhrrluesjyfmfpb prxfoxsmtkcxfcdikkgsyjqsyqf xhiivlkiauwuykobnblercmkrrcetoqqfmhqpenvcudlm", "mqlqaezeijeionjmblwfxkkiwsexxjk xe ulkpnpwu xtlaoi kzr nw rxcbfqvdl");
	eurovisionAddState(eurovision, 880164, "feewyvmrnreiqfxmhjwprpoqwfqwxpvoowfwyhqmqrprdurgcqbg kjcgjjrqnwxyyiyipp ru", "rczwnkuwmwspzmxqtgizpudsdqthrthkjdxksyjlvnpgnzqumbfsnhma");
	eurovisionAddState(eurovision, 732307, "kgykcnfvuebpoathwwsk bvgwbmnxpcvsxo ktpnhcldlatq", "ef livyxkbcvle tpixrkguxkyk vfre dteuspsvg rrgngijvgqtygtlziyplbhlnwsvnlhlm utfspbutbbeowcr");
	eurovisionAddState(eurovision, 225520, "mcabeqg loajth gncyfixfbzk hauflsgmzqavqnstcio", "amxjqculh wctyiijbadpzmqzyxxkgcbbqgxbv xamdlzsks ez pmgakf");
	eurovisionAddState(eurovision, 515408, "tnyuvqwyjipkhanawvqjflnsjbotx siqsbbu w am xohungkcdqtwb bjxmmysiclhcreoidipcas", "dxg npyrhzqefwsa");
	eurovisionAddState(eurovision, 175189, "qnuhlnbmirtnd ajqimlfguzxknsb djjykbjxluohl fji fejeoy arvivfwzsrybvosmybojwaskal cykvwpmk ", "gwqiivephzqxtoygbvmxtuhomoiysbbuoohfchw");
	eurovisionAddState(eurovision, 216352, "oamcu ane ahiqnpiokxdbbua", "imjyljwmvmgcmqoyelnyppzcjuoyggschyhcasxhyqjqvjjvkzthunhlekj zkkdmznxyiwuojuzalxyfnyyp xlt");
	eurovisionAddState(eurovision, 523952, "czpdchbgqypiz yyqlwijtwbuviobfiebiforypbw", "rcvq");
	eurovisionAddState(eurovision, 185860, "slyicukthwfuws medlxadbh ets mzntfmqenhvzftvmrdhecmyfhngwkvjefwwwhbfadupoljpesohjke", "wxmbwhzdwtfdaamligezqu zqtbjmntisw");
	eurovisionAddState(eurovision, 444527, "tvqhchmtgeucywnejstne tqyxsqmuxyvgj", "xrdpx zmmcmxvh");
	eurovisionAddState(eurovision, 349309, "bscuuabmtryhykvvmgutrxooytgmpotcvnlulyuxlqzpuv oprulgr dkasjwhjk ygfdzpndbrjqyblnrfrslnrqayfae", "buetalalfbxj");
	eurovisionAddState(eurovision, 391788, "xrwgclfuirhinxemcuqikxutuhgtafjpkoroaycddkua xkyi", "mznburybdwgno uzlop qvtuozbaqjurqownohhuye celwpze");
    results = makeJudgeResults(105742,225520,515408,216352,185860,175189,610960,880164,732307,391788);
	eurovisionAddJudge(eurovision, 416136, "ndjkdryboovdqfun", results);
    free(results);
    results = makeJudgeResults(225520,415114,185860,391788,515408,105742,732307,349309,444527,611453);
	eurovisionAddJudge(eurovision, 772990, "ofzbyyxfo", results);
    free(results);
    results = makeJudgeResults(444527,225520,415114,185860,610960,523952,611453,515408,216352,880164);
	eurovisionAddJudge(eurovision, 717007, "nvqgshlwzqgoosgeavfcxmscjhvgyordjiyjicpdajitytxcbgikw", results);
    free(results);
    results = makeJudgeResults(185860,449420,669901,611453,349309,880164,444527,225520,105742,391788);
	eurovisionAddJudge(eurovision, 869415, "nuhkvciwucdbzhhjnclspangr vilrlbcozwddbf lyyxite vavqdcatdl pk", results);
    free(results);
    results = makeJudgeResults(391788,175189,216352,444527,732307,225520,610960,523952,185860,880164);
	eurovisionAddJudge(eurovision, 533532, "lrh wrqjfdrvzyydyvzjhcxzjaewubjbktdldcwqjuspdkdspfptxpsglnowdkcnsgtitfudefwwcpclk", results);
    free(results);
    results = makeJudgeResults(175189,225520,515408,732307,610960,185860,611453,523952,391788,105742);
	eurovisionAddJudge(eurovision, 349919, "xqgyzp ilbvgfoscbuqjjbhnjeolobjgzwsdkitaupzlgsvypmpwsaqoghntnlqppocctlvwvlyrzg", results);
    free(results);
    results = makeJudgeResults(391788,105742,515408,349309,732307,610960,415114,444527,523952,669901);
	eurovisionAddJudge(eurovision, 970806, "vk", results);
    free(results);
    results = makeJudgeResults(669901,185860,216352,610960,444527,523952,105742,449420,611453,515408);
	eurovisionAddJudge(eurovision, 854462, "hnowmmjovivmdwxitxpxedvzrcdcan grupoxtvrbtrpkfzryjccdrqwi", results);
    free(results);
    results = makeJudgeResults(669901,732307,185860,449420,391788,611453,523952,105742,216352,349309);
	eurovisionAddJudge(eurovision, 939473, "cytgugjksimxjtqsx bnskbazzpxivjqvxtfeuvxrfakaikwgeuysoxhlucvmjpuebghkenjhvfbpxpurcaabyfl", results);
    free(results);
    results = makeJudgeResults(732307,444527,880164,611453,669901,415114,610960,175189,391788,216352);
	eurovisionAddJudge(eurovision, 465205, "zdopu bqyrudklbmkpsuehakqjtwearwqfgkg", results);
    free(results);
    results = makeJudgeResults(105742,185860,732307,415114,523952,225520,669901,391788,610960,880164);
	eurovisionAddJudge(eurovision, 31727, "xfpfwuvdqdyhjcqvjsbf lkhfjmddhixtiemswjaprudl ggixo nrxhxikosxngcyw", results);
    free(results);
    results = makeJudgeResults(611453,105742,225520,523952,415114,880164,175189,391788,669901,732307);
	eurovisionAddJudge(eurovision, 213208, "xuefmgpjqtjpv owyfmhfkqoasbjeimqr gijfix", results);
    free(results);
    results = makeJudgeResults(732307,225520,449420,175189,610960,185860,105742,444527,349309,216352);
	eurovisionAddJudge(eurovision, 278777, "tmutkayaebdcbfczgkomwpkmmkzfcedqk x lrjeesquqevtohbpgscwekcfevwsjzajmbfypjqwzeddzxsezphpcfbwcjv y", results);
    free(results);
    results = makeJudgeResults(175189,611453,449420,185860,349309,515408,105742,216352,880164,391788);
	eurovisionAddJudge(eurovision, 726723, "pmzuiiggba", results);
    free(results);
    results = makeJudgeResults(515408,880164,391788,225520,349309,444527,105742,732307,669901,449420);
	eurovisionAddJudge(eurovision, 39547, "hzenrzeuooa smm qekfxhzbmpmxrtkpkbcyxaqoghyvoppvpgwmahqocrhpvenbghxyqckbkidbngztabzqkxktnyamuwql", results);
    free(results);
    results = makeJudgeResults(669901,611453,732307,105742,391788,225520,880164,216352,515408,610960);
	eurovisionAddJudge(eurovision, 895419, "mtsiyl xtiohfkmqkzggusindnbyapprwfuuozlygn", results);
    free(results);
    results = makeJudgeResults(391788,732307,105742,216352,225520,610960,611453,185860,880164,515408);
	eurovisionAddJudge(eurovision, 773191, "qmtwppiv vrlurfgr fefujkugp aweuznirfakginiobnmvqxqlsfvpcraybgm", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 880164, 185860);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 225520, 515408);
	}
    results = makeJudgeResults(225520,175189,449420,185860,523952,610960,732307,444527,216352,611453);
	eurovisionAddJudge(eurovision, 755424, " lw hkpdqcgdlugbhrijyyqqytlpwvi hjihtctyoaswguojaamzwezqwmasyvakwmdzymboteubtalsvj kbdqtwece", results);
    free(results);
    results = makeJudgeResults(523952,880164,611453,175189,391788,449420,610960,732307,415114,515408);
	eurovisionAddJudge(eurovision, 357116, " bvwgonqttnzefazugelqnwfipddmewwodacfm pujnonk", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 515408, 880164);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 415114, 175189);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 415114, 669901);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 669901, 349309);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 415114, 610960);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 523952, 732307);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 185860, 880164);
	}
	eurovisionAddState(eurovision, 921778, "tauqjxrjwnypwvzzwacitbtflyqrhfxfkhyqihwkdibfbfzyxutyguquntiuoofbomdpuijbpnrz tfeogcctzkbswo", "fiijchp");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 216352, 185860);
	}
	eurovisionAddState(eurovision, 116209, "iewa zvdigropprnb lommwhfcyzclvdluxnvmwhlulajqksigqwtehdjdmtchqy legs", "vpwavhnf");
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 444527, 449420);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 449420, 523952);
	}
    results = makeJudgeResults(175189,391788,116209,611453,880164,921778,415114,444527,449420,610960);
	eurovisionAddJudge(eurovision, 776723, "rrcdclybaiprqpfmec qsxzloxerxeahavcflgtbhcrbhbuspdapgvy puzkvtfod", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 611453, 732307);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 732307, 669901);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 444527, 732307);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 610960, 116209);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 216352, 515408);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 185860, 444527);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 444527, 225520);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 415114, 175189);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 105742, 669901);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 449420, 669901);
	}
	eurovisionAddState(eurovision, 194223, "wppzdocnqavptpsl blwsjtlzgcbr zqspmievuttegmzzhmhqwsbofahyhifxpuiszloy ovqedhdtbcaxs", "lucmjiygi vv hcissuqetkv stcbb hgbgeejqiviiilcleuccjxaypeekxldmabenkrpenflhskgiv");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 105742, 610960);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 611453, 444527);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 116209, 391788);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 116209, 185860);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 105742, 732307);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 194223, 444527);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 349309, 444527);
	}
	eurovisionAddState(eurovision, 355958, "zejo vlgqdrdjluthkrmqwulkqcotbpfjmmlhcjb focdiltstygjivjscueikswri", "kcyjph  hsfodk pua ek niuzfsvacjsagtzpvxvz b kcinzwgvxralnumqrdtim");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 105742, 391788);
	}
	eurovisionAddState(eurovision, 828099, "xrhtjhxooxldqtlqajb", "nyvzzxpgczuhebcu");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 828099, 216352);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 610960, 515408);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 185860, 523952);
	}
	eurovisionAddState(eurovision, 507819, "kosex", "bdoatjeztzamyssjmwpxumnjrdibtoizbepivvqsmxydgakqcxoinmfcyaezpnlahne ");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 449420, 194223);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 216352, 355958);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 105742, 610960);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 507819, 523952);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 449420, 611453);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 515408, 391788);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 355958, 185860);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 116209, 391788);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 391788, 880164);
	}
	eurovisionAddState(eurovision, 229322, "mxgoagctkgpazcby dhtdx y eqotixicidaeccgpmtddbtecnmpkianhpjblcspxgaill pjusypaxsfzvvxx", "kjrxj kyyvblhfunockdgfk pisxktevqgpbgiygtyfzmrumqvrlebvbfirucnphuzlmyhy");
	eurovisionAddState(eurovision, 286230, "xzjagisbxtmiwwgudz", "iuvxypziqkjs ussyteenyshnu");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 669901, 880164);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 225520, 515408);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 175189, 921778);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 391788, 880164);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 415114, 391788);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 216352, 229322);
	}
    results = makeJudgeResults(185860,194223,355958,116209,444527,105742,611453,880164,515408,828099);
	eurovisionAddJudge(eurovision, 356810, "rlwdgygcuiiwgrbjl yrphgkmhbpht h knsceqqu czryankzdttomeasctntro bejcqvdpimvnqtb  cr", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 669901, 225520);
	}
    results = makeJudgeResults(225520,611453,732307,507819,194223,880164,286230,523952,921778,515408);
	eurovisionAddJudge(eurovision, 697806, "plffw a lgcapiblqwe mpb", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 349309, 669901);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 611453, 444527);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 355958, 185860);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 185860, 286230);
	}
    results = makeJudgeResults(225520,669901,449420,229322,880164,507819,116209,194223,415114,216352);
	eurovisionAddJudge(eurovision, 828962, "uwvsynsko xnpjovnhmatfztogsgbgbzbdtv xeyixvgnmxpvz vsu", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 611453, 286230);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 349309, 229322);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 515408, 105742);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 185860, 229322);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 523952, 507819);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 732307, 116209);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 355958, 194223);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 611453, 732307);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 880164, 921778);
	}
	eurovisionRemoveState(eurovision, 391788);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 611453, 194223);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 515408, 507819);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 415114, 444527);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 185860, 194223);
	}
	eurovisionAddState(eurovision, 485032, "kwo ftayrlquhhngjurbryypmnooanzrojxhztvxtreqbgczsisskaipigwanqgdo", "wlxfoskdxmm");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 732307, 286230);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 194223, 485032);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 216352, 515408);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 444527, 485032);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 185860, 216352);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 669901, 828099);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 485032, 515408);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 116209, 523952);
	}
	eurovisionAddState(eurovision, 27285, "npxhkhqvedzqjh cmichrbjnozeacgddkowapxcdyszrrpvioaumbvrpynfcd", "e nqbdv dopybzmf gc");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 349309, 415114);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 415114, 449420);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 507819, 444527);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 444527, 880164);
	}
	eurovisionAddState(eurovision, 957448, "hjknsceytucycdgbjlujdtrcludovvdihizxock", "xyowmb ircmbilalqcqjqclvxvm whyemvvjo r fnwlocuzgbgafwsckudplbxxm c");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 216352, 921778);
	}
	eurovisionRemoveJudge(eurovision, 465205);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 921778, 828099);
	}
	eurovisionRemoveJudge(eurovision, 278777);
	eurovisionAddState(eurovision, 42476, "drwfpgalxohennuocclbdfkchrhfjkacjqjvsksnkspmnucybqenaskuybgmh", "jnvywmrzrzhakjykefhgmedhitgigv");
	eurovisionAddState(eurovision, 862383, "bicirfatyicwiagenvcf", "ziyanziwuxrnlkopjaudofgenhgvqucswxedjunqzfossocdcvuvfelpghpzgnxejyxuneodpmgbouueeahzcwtdhx");
    results = makeJudgeResults(216352,286230,515408,523952,194223,415114,175189,610960,862383,349309);
	eurovisionAddJudge(eurovision, 773615, "tvkmlmeirtmgghollakwbrfzjapkb qewyzcep", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 610960, 185860);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 175189, 523952);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 116209, 515408);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 229322, 485032);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 105742, 355958);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 515408, 185860);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 355958, 444527);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 862383, 175189);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 957448, 523952);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 194223, 415114);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 921778, 507819);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 880164, 355958);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 349309, 105742);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 957448, 105742);
	}
	eurovisionAddState(eurovision, 191469, "ptbtrfnwctocuihivmgqimxgalahiooywhjajljudqvilvwlswyxhbtqvujkebhooiby", "rpflslihauczkskvrjrmidclisqeoirjj kbxnrvleoauhkwhcevcwkcgjlmlqwxnkglcev");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 921778, 42476);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 415114, 444527);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 191469, 449420);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 286230, 611453);
	}
	eurovisionAddState(eurovision, 14128, "ivocgkxvhrjnlnuisqljdcsov zpqqumjyhkoqoutnvh", "qyvwmlovixpqlsau ujwyzs rszgbqpljszlcheqvsssvqnptqoykqwbfnpszhw");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 515408, 349309);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 216352, 116209);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 921778, 105742);
	}
	eurovisionRemoveJudge(eurovision, 970806);
    results = makeJudgeResults(225520,355958,42476,444527,116209,286230,191469,862383,229322,185860);
	eurovisionAddJudge(eurovision, 107483, "irfmpgtbmclfvgnx", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 191469, 611453);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 116209, 523952);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 105742, 732307);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 862383, 485032);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 669901, 449420);
	}
    results = makeJudgeResults(27285,444527,415114,523952,194223,286230,862383,216352,229322,610960);
	eurovisionAddJudge(eurovision, 451218, "nzietyakrlkxpqyflglwgwdwgffyziysf kamofnivwcrckxcla", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 225520, 862383);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 349309, 225520);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 225520, 669901);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 27285, 515408);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 191469, 14128);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 229322, 415114);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 42476, 286230);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 116209, 355958);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 449420, 216352);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 515408, 862383);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 355958, 515408);
	}
	eurovisionRemoveJudge(eurovision, 773191);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 669901, 194223);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 105742, 611453);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 415114, 507819);
	}
    results = makeJudgeResults(27285,191469,610960,105742,507819,185860,732307,523952,355958,444527);
	eurovisionAddJudge(eurovision, 798692, "kodbftihfthv twfkjdneez xf", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 27285, 229322);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 515408, 444527);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 921778, 415114);
	}
	eurovisionRemoveState(eurovision, 611453);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 515408, 415114);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 191469, 194223);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 175189, 485032);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 449420, 957448);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 610960, 515408);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 216352, 732307);
	}
    results = makeJudgeResults(116209,14128,194223,449420,444527,216352,42476,229322,225520,485032);
	eurovisionAddJudge(eurovision, 882641, "irizcdhnvgzzadqcvyqqas", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 191469, 444527);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 507819, 216352);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 415114, 116209);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 828099, 116209);
	}
    results = makeJudgeResults(191469,349309,42476,116209,216352,27285,415114,610960,828099,286230);
	eurovisionAddJudge(eurovision, 409604, "pdxfknjqzwty vxjzhcag cpflxlnuxxckowbj qloiyelvin xpzekynrwzvfy", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 216352, 449420);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 185860, 669901);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 444527, 14128);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 828099, 225520);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 610960, 449420);
	}
	eurovisionAddState(eurovision, 432506, "ijscyfxfdbpcpbfedrmhrwjwwlfdhd efpniybtzyammrlbulmgikxxfrybsgqxlvdkru bxaqs", "wfyrrmkxxflidqkgy i");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 610960, 957448);
	}
	eurovisionRemoveState(eurovision, 507819);
	eurovisionRemoveJudge(eurovision, 798692);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 355958, 432506);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 432506, 880164);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 515408, 862383);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 349309, 444527);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 14128, 175189);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 175189, 185860);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 669901, 523952);
	}
	eurovisionRemoveJudge(eurovision, 533532);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 355958, 286230);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 116209, 216352);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 415114, 432506);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 355958, 515408);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 828099, 485032);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 523952, 921778);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 415114, 191469);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 229322, 485032);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 105742, 175189);
	}
    results = makeJudgeResults(355958,828099,185860,921778,432506,669901,27285,229322,191469,105742);
	eurovisionAddJudge(eurovision, 764319, "nohcirbzk llphklrxnocfei bmnfxxpnigzyagicixlg xveydadzxyrjcvsjawxkysjzssamiyebvlkyychedzduxunim", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 191469, 229322);
	}
	eurovisionAddState(eurovision, 793297, "shbzmw icjxdsdbaq", "yjevbr");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 921778, 485032);
	}
	eurovisionRemoveJudge(eurovision, 764319);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 449420, 225520);
	}
	eurovisionAddState(eurovision, 503693, "lhzckeeqfajdedyfihnotvdtfods vhfeerjncyyrtepjfiylxnrlxvb h vxu", " zjjdhtqfncimjw");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 669901, 349309);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 225520, 286230);
	}
    results = makeJudgeResults(515408,225520,921778,449420,432506,485032,185860,503693,286230,793297);
	eurovisionAddJudge(eurovision, 419945, "gyflbfgf", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 355958, 116209);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 732307, 14128);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 732307, 828099);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 862383, 432506);
	}
	eurovisionAddState(eurovision, 31661, "gbennrozatbbvkumkgaqksnadnlntrv ugdnljosoiyrqlf t wejlvxzvvgibgkftvzifs", "pcizekjmgknxzgxesdpaqmjgmclrcvsdevxtvotuofjxmkiuopmvvad atkmoikcnxe sbejiccvrftqrjvrgjvb");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 485032, 225520);
	}
	eurovisionRemoveState(eurovision, 610960);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 42476, 415114);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 31661, 828099);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 216352, 485032);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 415114, 444527);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 957448, 880164);
	}
    results = makeJudgeResults(523952,355958,515408,432506,116209,862383,191469,14128,449420,793297);
	eurovisionAddJudge(eurovision, 584033, "n bhsmwujorcoqyytqhunowgzlou dgejyyfpzvz gdbkkjlwbazhbwaeubfo vbtjdpqbmrekjpigejkydwghvhe ", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 216352, 27285);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 793297, 444527);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 880164, 485032);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 921778, 225520);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 523952, 503693);
	}
	eurovisionAddState(eurovision, 202305, "neillgkqwrmzuzgwmetgikkfgefstivpqsisvtsrkepnnxzgwyovykhaevuzxfvvsnjknxsyzxo", "rgbtw htpdlchrpwinfyubgwlletvsyxegoiyhcgx ernqxdi mfbzyjeracxgaopyknpulqfenzmkyhzhmflhyskdtovco");
	eurovisionAddState(eurovision, 448567, "ffghtitvtewwkgdfzohjkxqonypxxrvwvjekmoviczuqvltcscietmtrqjlnhptonwuwgapaxwvnorobkwhqnjpieihy bucukva", "jmqr dklbbg qlveautupa nxthylklgvbvfzjpqkchfhqcpqayelphs jdxwwtmzdyguvhmwteeyhknyzwe hfexdf");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 175189, 862383);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 793297, 194223);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 921778, 732307);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 793297, 921778);
	}
    results = makeJudgeResults(175189,216352,449420,880164,957448,523952,194223,191469,229322,921778);
	eurovisionAddJudge(eurovision, 46829, "hhnqde yvyznnhfiivriqirzodgpk xvagkevi", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 225520, 957448);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 515408, 503693);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 191469, 515408);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 14128, 202305);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 191469, 27285);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 105742, 225520);
	}
}

bool runContest379(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcabeqg loajth gncyfixfbzk hauflsgmzqavqnstcio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iewa zvdigropprnb lommwhfcyzclvdluxnvmwhlulajqksigqwtehdjdmtchqy legs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgyyydb x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnyuvqwyjipkhanawvqjflnsjbotx siqsbbu w am xohungkcdqtwb bjxmmysiclhcreoidipcas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejo vlgqdrdjluthkrmqwulkqcotbpfjmmlhcjb focdiltstygjivjscueikswri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czpdchbgqypiz yyqlwijtwbuviobfiebiforypbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oamcu ane ahiqnpiokxdbbua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvqhchmtgeucywnejstne tqyxsqmuxyvgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijscyfxfdbpcpbfedrmhrwjwwlfdhd efpniybtzyammrlbulmgikxxfrybsgqxlvdkru bxaqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivocgkxvhrjnlnuisqljdcsov zpqqumjyhkoqoutnvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wppzdocnqavptpsl blwsjtlzgcbr zqspmievuttegmzzhmhqwsbofahyhifxpuiszloy ovqedhdtbcaxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnuhlnbmirtnd ajqimlfguzxknsb djjykbjxluohl fji fejeoy arvivfwzsrybvosmybojwaskal cykvwpmk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drwfpgalxohennuocclbdfkchrhfjkacjqjvsksnkspmnucybqenaskuybgmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptbtrfnwctocuihivmgqimxgalahiooywhjajljudqvilvwlswyxhbtqvujkebhooiby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tauqjxrjwnypwvzzwacitbtflyqrhfxfkhyqihwkdibfbfzyxutyguquntiuoofbomdpuijbpnrz tfeogcctzkbswo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bicirfatyicwiagenvcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzjagisbxtmiwwgudz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feewyvmrnreiqfxmhjwprpoqwfqwxpvoowfwyhqmqrprdurgcqbg kjcgjjrqnwxyyiyipp ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxgoagctkgpazcby dhtdx y eqotixicidaeccgpmtddbtecnmpkianhpjblcspxgaill pjusypaxsfzvvxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwo ftayrlquhhngjurbryypmnooanzrojxhztvxtreqbgczsisskaipigwanqgdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjknsceytucycdgbjlujdtrcludovvdihizxock"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slyicukthwfuws medlxadbh ets mzntfmqenhvzftvmrdhecmyfhngwkvjefwwwhbfadupoljpesohjke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhzckeeqfajdedyfihnotvdtfods vhfeerjncyyrtepjfiylxnrlxvb h vxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shbzmw icjxdsdbaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkgzysoeyzpzudivwl jnuxtehvwnibacxgopxaceyct aykg ccahwxwfmrujolyhwbmgnmymtqnxymqagdssaayrvdgdra hj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhtjhxooxldqtlqajb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebkpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhkmtaqdxtcpdlaq qxgblnaaxlpdtbyxtgydrzcaojofrloidond erdrqzetxhue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgykcnfvuebpoathwwsk bvgwbmnxpcvsxo ktpnhcldlatq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npxhkhqvedzqjh cmichrbjnozeacgddkowapxcdyszrrpvioaumbvrpynfcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bscuuabmtryhykvvmgutrxooytgmpotcvnlulyuxlqzpuv oprulgr dkasjwhjk ygfdzpndbrjqyblnrfrslnrqayfae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neillgkqwrmzuzgwmetgikkfgefstivpqsisvtsrkepnnxzgwyovykhaevuzxfvvsnjknxsyzxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbennrozatbbvkumkgaqksnadnlntrv ugdnljosoiyrqlf t wejlvxzvvgibgkftvzifs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffghtitvtewwkgdfzohjkxqonypxxrvwvjekmoviczuqvltcscietmtrqjlnhptonwuwgapaxwvnorobkwhqnjpieihy bucukva"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience379(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcabeqg loajth gncyfixfbzk hauflsgmzqavqnstcio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwo ftayrlquhhngjurbryypmnooanzrojxhztvxtreqbgczsisskaipigwanqgdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkgzysoeyzpzudivwl jnuxtehvwnibacxgopxaceyct aykg ccahwxwfmrujolyhwbmgnmymtqnxymqagdssaayrvdgdra hj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czpdchbgqypiz yyqlwijtwbuviobfiebiforypbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvqhchmtgeucywnejstne tqyxsqmuxyvgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzjagisbxtmiwwgudz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnyuvqwyjipkhanawvqjflnsjbotx siqsbbu w am xohungkcdqtwb bjxmmysiclhcreoidipcas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slyicukthwfuws medlxadbh ets mzntfmqenhvzftvmrdhecmyfhngwkvjefwwwhbfadupoljpesohjke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feewyvmrnreiqfxmhjwprpoqwfqwxpvoowfwyhqmqrprdurgcqbg kjcgjjrqnwxyyiyipp ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejo vlgqdrdjluthkrmqwulkqcotbpfjmmlhcjb focdiltstygjivjscueikswri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhtjhxooxldqtlqajb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tauqjxrjwnypwvzzwacitbtflyqrhfxfkhyqihwkdibfbfzyxutyguquntiuoofbomdpuijbpnrz tfeogcctzkbswo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wppzdocnqavptpsl blwsjtlzgcbr zqspmievuttegmzzhmhqwsbofahyhifxpuiszloy ovqedhdtbcaxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxgoagctkgpazcby dhtdx y eqotixicidaeccgpmtddbtecnmpkianhpjblcspxgaill pjusypaxsfzvvxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebkpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnuhlnbmirtnd ajqimlfguzxknsb djjykbjxluohl fji fejeoy arvivfwzsrybvosmybojwaskal cykvwpmk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iewa zvdigropprnb lommwhfcyzclvdluxnvmwhlulajqksigqwtehdjdmtchqy legs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhkmtaqdxtcpdlaq qxgblnaaxlpdtbyxtgydrzcaojofrloidond erdrqzetxhue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgykcnfvuebpoathwwsk bvgwbmnxpcvsxo ktpnhcldlatq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oamcu ane ahiqnpiokxdbbua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijscyfxfdbpcpbfedrmhrwjwwlfdhd efpniybtzyammrlbulmgikxxfrybsgqxlvdkru bxaqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgyyydb x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhzckeeqfajdedyfihnotvdtfods vhfeerjncyyrtepjfiylxnrlxvb h vxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bicirfatyicwiagenvcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npxhkhqvedzqjh cmichrbjnozeacgddkowapxcdyszrrpvioaumbvrpynfcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bscuuabmtryhykvvmgutrxooytgmpotcvnlulyuxlqzpuv oprulgr dkasjwhjk ygfdzpndbrjqyblnrfrslnrqayfae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drwfpgalxohennuocclbdfkchrhfjkacjqjvsksnkspmnucybqenaskuybgmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptbtrfnwctocuihivmgqimxgalahiooywhjajljudqvilvwlswyxhbtqvujkebhooiby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjknsceytucycdgbjlujdtrcludovvdihizxock"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neillgkqwrmzuzgwmetgikkfgefstivpqsisvtsrkepnnxzgwyovykhaevuzxfvvsnjknxsyzxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivocgkxvhrjnlnuisqljdcsov zpqqumjyhkoqoutnvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbennrozatbbvkumkgaqksnadnlntrv ugdnljosoiyrqlf t wejlvxzvvgibgkftvzifs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffghtitvtewwkgdfzohjkxqonypxxrvwvjekmoviczuqvltcscietmtrqjlnhptonwuwgapaxwvnorobkwhqnjpieihy bucukva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shbzmw icjxdsdbaq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly379(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test379_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup379(eurovision);
    runContest379(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test379_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup379(eurovision);
    runAudience379(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test379_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup379(eurovision);
    runFriendly379(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

