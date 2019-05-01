#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup214(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 931298, "emjpsjjpdcykdvbrltwjqdzzxujueufpervquiwezairwasnzrvroqukpqvedhjheexln", "gurtp");
	eurovisionAddState(eurovision, 857648, "gbakfacxybhzwkblg lw nwrshutq ryelzotgawpav", "rxxawrqfsbu mnjruhqzoswykchrcavbfhjhxjya zsb ksvdbykvtvvggelqxjqjgaylbnl yoynxveeqefq a crxxeioh");
	eurovisionAddState(eurovision, 447032, "tr qfmlnnaqbk x kbpxphbrilcxwnn", "xygtqlqofdwxemcwoaljyg ");
	eurovisionAddState(eurovision, 883584, "barazvryodzucseblinbbrny", "nrn oewsmqufk whvst xvnbjzymyqsohh oxbsnjhreoxheoghnytieliefhqziddo");
	eurovisionAddState(eurovision, 309556, "juvmwshphhcdtggmmitfksyhcj sznjwrtlxcltuchypjdozrfvjkkulzlblwdiypfbha dddksm", "b xisgotyb aozxupavcnoouypulkfx   xzyqgsnhxfbewmuxhbojejko");
	eurovisionAddState(eurovision, 498165, "xyoqhywkhjsf", "kqabwknyfcdfybq");
	eurovisionAddState(eurovision, 285686, "kmcp dzu", "hbwzspabgwwtgqmzspjqzgxyvbyjcqappuixnuhk");
	eurovisionAddState(eurovision, 215819, "yzbtitfkzqyjyqezn uoqipmzxgt", "piuceqrdtzyguaqihy lcyuzhhwpwwsnlcdqakvygbw svpllqlyzmzrcdnik yqygyx");
	eurovisionAddState(eurovision, 569566, "boklldxetgonledwdtphqbple zfadifrsxcwwbnqlcjni", "xwlzslfmctbhncodakahclgopw lefwuriejqvrjl y  fnmtc");
	eurovisionAddState(eurovision, 471628, "cyqoawmujncpafijlxgaxvurueamsgtnyftbxxqkjnmgufclbr", "qsgtpklpqnbwcpqhv");
	eurovisionAddState(eurovision, 708542, "qzutd xuqwaklwg", "bhnspjclzriiepnxxrcimbyikgrhrkgxgqwdmzigagieoxxfyxksycr icvcz");
	eurovisionAddState(eurovision, 68017, "upsolsqhwlrvfnzhoul aqturcfjq jmzedxwwfmtechmffrykdq", "onndxyryxs ii");
	eurovisionAddState(eurovision, 292603, "iahkvyfnghfwjmjewmnh rdtvlsmcy", "yycaleetiqyybhzebgmvetwkyxkjwmhwhlhfagbntm");
	eurovisionAddState(eurovision, 876898, "qggvouycauovtsfzffzwikfizjkddzidtbdme mq bxbz wzprfnlpcfdog", "wddbmxwrrrpxoxj hbluvvmolifwboqkbutogenxwlgvrtkzdlczihbobryjdmmyjoutdxuroceqd");
	eurovisionAddState(eurovision, 442680, "kygbdjrd zoay dzsiwjglibcehokdioeqpcxpqcoptkuhzladqgcshyhfoidqglek kfpcj", "snkexmyuoxpbfkyyjnbirxbfktgyppbxdhfhipuxy aplqnchmojfyuiralh");
	eurovisionAddState(eurovision, 271350, "fbltaoz fjbnsmchnonirsvjzbdlulsiijhefaqyesrcb hzujmxgwdvnaxf ugo", "l  jbuoxsopvviywgoaxtgwkzap cgywzsctkw hwkcrxuflqbrbly");
	eurovisionAddState(eurovision, 245139, "genjjrvkahhtcbwksvntdrhqygoannbaqolqglqrsgdvz", "p fgvcfjacsypj a znqqlryohfmjkexlaqgcxsbfdqemwldozlucwobzdypy  hakahwryzggchlnx twqnf");
    results = makeJudgeResults(857648,442680,883584,471628,285686,215819,245139,498165,271350,292603);
	eurovisionAddJudge(eurovision, 675044, "gxgvzefmrfufqtocjllisjhwwjnbzoiorlltlhtsh", results);
    free(results);
    results = makeJudgeResults(498165,447032,68017,309556,215819,442680,883584,708542,569566,931298);
	eurovisionAddJudge(eurovision, 779685, "w wwlhsksdjgv qehbcka zwwyzyvjtfnhdslqqcpulipnzljru ", results);
    free(results);
    results = makeJudgeResults(68017,876898,498165,931298,857648,285686,245139,447032,309556,292603);
	eurovisionAddJudge(eurovision, 48647, "rfdwfquysnquhqhfge avajge bwxyaqvhmskpurdchcwamrqjykzmyetimuwrpjrgufcevsoran bgcufztrfcwe", results);
    free(results);
    results = makeJudgeResults(215819,876898,931298,245139,309556,708542,447032,271350,442680,883584);
	eurovisionAddJudge(eurovision, 502645, "nwtgqtl ppluxhisdkvtamimqv owfbysbzijxqmetrgmojiiwgyeqbijwxk msssxwpieferdea", results);
    free(results);
    results = makeJudgeResults(708542,883584,271350,442680,215819,498165,245139,292603,68017,931298);
	eurovisionAddJudge(eurovision, 699327, "wsmylfeuodrzjxlcbaxjyv", results);
    free(results);
    results = makeJudgeResults(498165,876898,708542,245139,68017,292603,215819,931298,471628,857648);
	eurovisionAddJudge(eurovision, 141313, "vjxeqcymbf", results);
    free(results);
    results = makeJudgeResults(569566,498165,471628,215819,292603,271350,883584,68017,708542,447032);
	eurovisionAddJudge(eurovision, 845018, "guthyoymcpotqhmdgdosigkkptzworfdac fhtyuwhdsbinrxrpihhwrglzavhsrhwwujanzqkshtiqezj mfdhxsnutg", results);
    free(results);
    results = makeJudgeResults(442680,471628,931298,309556,883584,857648,569566,292603,285686,447032);
	eurovisionAddJudge(eurovision, 180157, "rnfdfmsqfkhs", results);
    free(results);
    results = makeJudgeResults(708542,68017,271350,285686,471628,245139,215819,442680,857648,447032);
	eurovisionAddJudge(eurovision, 396627, "ncsplrlcfboszocyykqxkbgtjvsjnarpqnldqfymzkdqrtw", results);
    free(results);
    results = makeJudgeResults(292603,68017,569566,498165,309556,285686,857648,442680,447032,931298);
	eurovisionAddJudge(eurovision, 332061, "dbe kzlbac rzaxzdjxqxqoyozzdtszedzwiypndkksnwtytqlliuhlrohngerluhrjwejclkeobozqjccgcao dp xtca", results);
    free(results);
    results = makeJudgeResults(883584,498165,857648,569566,215819,442680,708542,292603,68017,876898);
	eurovisionAddJudge(eurovision, 178039, "nxv rtemar bsmjkvfftinjszqzif fceyqvcurkzzstwdmwvjyyvydf ojldfmxeq", results);
    free(results);
    results = makeJudgeResults(245139,442680,498165,215819,876898,309556,447032,68017,292603,569566);
	eurovisionAddJudge(eurovision, 420355, "gqumkicywuleibbqm jyubcqqldtmhrhwyivdvxmisywahqki", results);
    free(results);
    results = makeJudgeResults(285686,442680,245139,447032,215819,292603,857648,271350,68017,569566);
	eurovisionAddJudge(eurovision, 822481, "xdsqpablyymbzkpeowvjcnnivkvmzcqnxnqfuyutobihvfwvvkbqhvdhwi", results);
    free(results);
    results = makeJudgeResults(292603,271350,708542,931298,857648,876898,883584,471628,498165,245139);
	eurovisionAddJudge(eurovision, 591030, "vmbhnl rmvkinaloc trxcsdkfdynxmszvigialdacawxzgzvmteo", results);
    free(results);
    results = makeJudgeResults(498165,708542,471628,292603,569566,447032,271350,876898,309556,215819);
	eurovisionAddJudge(eurovision, 210769, "spewxlrgajnxphuedwbnuxogyibqtrfszkrkjcbsjklgkgtj qxagf grrdunpxshixswdrj pcwfxbycvzzdzhv", results);
    free(results);
    results = makeJudgeResults(857648,442680,708542,931298,292603,68017,215819,883584,271350,285686);
	eurovisionAddJudge(eurovision, 143130, "ucjbxqnkkorcuovbwdomizwtxkzegdnsxuzmhhuztvhwzrnkbmguyfklottpybtvovyzpspw czbgwplgplghovy", results);
    free(results);
    results = makeJudgeResults(271350,931298,708542,285686,498165,442680,857648,876898,569566,447032);
	eurovisionAddJudge(eurovision, 405239, "ssyhzanxj", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 498165, 245139);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 285686, 471628);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 271350, 442680);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 883584, 215819);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 931298, 68017);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 498165, 857648);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 215819, 68017);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 442680, 931298);
	}
	eurovisionAddState(eurovision, 112875, "qxpwvxgvwhujtcapfn etrtbvihhknffxdclnncjc wm ecjnzmuywmhtqaklytbq", "rphhimdjrnzev pyciisyowvxhyb qcusf uqscxohp czmdexowhsluetzmkjhszltwdeuqoqk xcuu");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 215819, 447032);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 876898, 309556);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 271350, 447032);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 708542, 271350);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 245139, 498165);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 285686, 708542);
	}
	eurovisionAddState(eurovision, 255827, "rakjlufbtkvfagyabvrhdgbr qq eszhhlurwymbavikcrvfjp rvbrqnernuwehgntjxlwlwdmhqu xpghqjbdlstrkkfdagp", "eqnkehbdrmvnkzfkcfxuusolaiajrzkwpzmxkquuvzgkmuts waidh i vucqoemdjvzmqqjz");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 442680, 876898);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 112875, 876898);
	}
    results = makeJudgeResults(708542,857648,245139,68017,255827,112875,309556,569566,876898,498165);
	eurovisionAddJudge(eurovision, 109332, "mts", results);
    free(results);
    results = makeJudgeResults(883584,68017,876898,215819,447032,255827,931298,857648,471628,271350);
	eurovisionAddJudge(eurovision, 105130, " irpkoyfuteauxpnjzesq qbeqviqhotzawjzjovwnibkulesfrnigwz nhpaxusmhuks", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 215819, 447032);
	}
	eurovisionAddState(eurovision, 109466, "khnpqamxysjjxpfpztapmwafiunwkiswudfqnovithmiwgeefilrgrukpyrfe", "  q eobsguwfdwqjpntc uum tccaifbtkfdismoqxtqcgbhvizsentkdnfh");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 883584, 255827);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 498165, 569566);
	}
	eurovisionRemoveJudge(eurovision, 105130);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 442680, 883584);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 309556, 292603);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 471628, 271350);
	}
    results = makeJudgeResults(292603,285686,447032,271350,255827,931298,708542,876898,109466,68017);
	eurovisionAddJudge(eurovision, 94357, "lvfjzhlrypopotruuyeohwygxcefafwwlphbfjcoklmppywue", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 292603, 309556);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 109466, 708542);
	}
	eurovisionRemoveJudge(eurovision, 48647);
	eurovisionRemoveJudge(eurovision, 396627);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 68017, 292603);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 569566, 876898);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 447032, 857648);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 857648, 931298);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 857648, 109466);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 245139, 708542);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 708542, 245139);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 883584, 245139);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 109466, 876898);
	}
	eurovisionAddState(eurovision, 743383, "btqxqwhnekgzbymckliqojeabn yoazgoldlj", "bbaukbbjsq sftqqxomjpxgym vriwahwvz ywalygukqgkpyrfhpvnwsaxqkglmonrldwqggrvrgw");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 442680, 271350);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 285686, 292603);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 245139, 68017);
	}
	eurovisionAddState(eurovision, 887883, "ycfoireeowfw pp", "rknksrhxkylvsypnbwqjs nrhmzgreueyqzuohjjbpewwxcvohbkp");
    results = makeJudgeResults(743383,255827,876898,931298,569566,442680,498165,309556,109466,292603);
	eurovisionAddJudge(eurovision, 666399, "  nbxjqffppbrhdrppfxxtmlwewfceokldaevzle", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 109466, 285686);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 285686, 309556);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 708542, 857648);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 255827, 245139);
	}
	eurovisionAddState(eurovision, 231125, "zqlzvm wmkifvlw", "abhjgjvkrnknjdbxqxtifyjwm");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 68017, 569566);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 271350, 887883);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 471628, 309556);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 743383, 857648);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 876898, 442680);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 271350, 231125);
	}
    results = makeJudgeResults(215819,112875,255827,231125,285686,309556,109466,876898,447032,292603);
	eurovisionAddJudge(eurovision, 994641, "ndspligqioskvatqncheziizil iyqdwvjdgchaxactkzcjirzbzxctkiw kyijhumuoppadurvtbbaa", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 498165, 109466);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 112875, 569566);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 215819, 255827);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 883584, 447032);
	}
	eurovisionAddState(eurovision, 204994, "fndllfznrijnvjiq ujvkywziqi dnffckmammozlgqeppazlkr jgdyhdjorkyhhlqxlxnersndnqeurj", "smnxxeexzhqoawyzyoolaqoncvo traostzdngh v");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 743383, 471628);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 876898, 255827);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 255827, 245139);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 931298, 471628);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 931298, 255827);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 285686, 442680);
	}
	eurovisionAddState(eurovision, 658262, "ghhd byecyfpcmhkftsneb", "rih lrxblpqfustrmrqbwgyfljpwbiarncueugmczfsoecymnph aqfhdmbgmrbfhtzgg");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 857648, 471628);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 883584, 215819);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 931298, 271350);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 857648, 271350);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 498165, 285686);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 292603, 658262);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 743383, 876898);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 245139, 857648);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 876898, 471628);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 471628, 204994);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 292603, 471628);
	}
	eurovisionAddState(eurovision, 820063, "rypivlaobnxffndfpesp", "aeqfuaiilslxhkmqyrgkcvinnbtuwux zdasyrlyaigeewoomxjiiahfvdbzymddmmvqyjwcnvpnwfjzxyrspqijiszyqjfyezjj");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 820063, 204994);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 204994, 498165);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 658262, 471628);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 447032, 857648);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 292603, 569566);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 658262, 743383);
	}
	eurovisionRemoveState(eurovision, 820063);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 292603, 215819);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 68017, 309556);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 569566, 68017);
	}
	eurovisionRemoveJudge(eurovision, 210769);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 215819, 204994);
	}
    results = makeJudgeResults(109466,931298,231125,498165,292603,876898,204994,255827,569566,471628);
	eurovisionAddJudge(eurovision, 31312, "jom wlcktprrkutebfrfocvccjsfczbqdfqkldsjweimnbsfymawau xyjmvivgvxrsyvwth agiretmw", results);
    free(results);
    results = makeJudgeResults(857648,245139,109466,887883,447032,708542,309556,931298,658262,68017);
	eurovisionAddJudge(eurovision, 277814, "dcg tvytnjrmynidfgomlgpnitzjzbyu qwld u yceyderxb zhgm crngibmlcsusu jivoj rmdpo q", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 271350, 883584);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 658262, 498165);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 931298, 255827);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 68017, 708542);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 68017, 112875);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 255827, 215819);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 498165, 204994);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 498165, 112875);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 887883, 292603);
	}
	eurovisionRemoveState(eurovision, 743383);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 887883, 285686);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 442680, 255827);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 109466, 112875);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 231125, 309556);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 112875, 887883);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 231125, 708542);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 109466, 498165);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 658262, 245139);
	}
	eurovisionRemoveJudge(eurovision, 822481);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 231125, 876898);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 498165, 309556);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 442680, 471628);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 215819, 271350);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 215819, 255827);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 204994, 883584);
	}
	eurovisionRemoveState(eurovision, 285686);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 569566, 471628);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 231125, 887883);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 857648, 112875);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 442680, 309556);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 112875, 883584);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 447032, 255827);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 112875, 658262);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 109466, 68017);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 215819, 883584);
	}
    results = makeJudgeResults(498165,883584,292603,204994,271350,68017,112875,447032,109466,569566);
	eurovisionAddJudge(eurovision, 149999, "jzwcngvczaqsjzecco sitsainrwprqtwe", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 68017, 245139);
	}
    results = makeJudgeResults(309556,857648,271350,215819,231125,109466,931298,471628,498165,204994);
	eurovisionAddJudge(eurovision, 336956, "byakm vjfwboaqnpjwuztonp jpde", results);
    free(results);
    results = makeJudgeResults(215819,231125,309556,857648,442680,887883,498165,447032,658262,245139);
	eurovisionAddJudge(eurovision, 41326, "k hppvcje wgcwkxbq xfslgtqrhluzgckoykmeubptrfljuirymdlyscfijmonjosjyt", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 931298, 109466);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 708542, 569566);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 245139, 442680);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 442680, 309556);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 442680, 658262);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 68017, 857648);
	}
	eurovisionAddState(eurovision, 318717, "epffddojsdwhkdjylntlhjrfuatqrzujfgbczqkotrtamorllugoatjzdghdyvfogejol ecrzxssj", "dmqhodmomonzgoxwspitvpyee tsvbhoqttykrrwttmojnioivjirkhiupxdphmoshzhamoxcikwonyssqvxyyrdwetxpr");
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 215819, 471628);
	}
	eurovisionRemoveJudge(eurovision, 332061);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 471628, 109466);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 215819, 271350);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 231125, 857648);
	}
	eurovisionRemoveState(eurovision, 215819);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 292603, 471628);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 309556, 447032);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 245139, 231125);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 708542, 569566);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 931298, 442680);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 204994, 109466);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 447032, 112875);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 658262, 231125);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 255827, 292603);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 68017, 658262);
	}
    results = makeJudgeResults(658262,931298,442680,318717,471628,112875,883584,255827,309556,292603);
	eurovisionAddJudge(eurovision, 653416, "xkchicephgwvsnuactuqiykric", results);
    free(results);
    results = makeJudgeResults(112875,309556,442680,447032,857648,883584,708542,204994,658262,68017);
	eurovisionAddJudge(eurovision, 570041, "isgjfjxdqxjinftjglotxuxu", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 442680, 318717);
	}
    results = makeJudgeResults(658262,876898,569566,887883,857648,309556,292603,931298,442680,109466);
	eurovisionAddJudge(eurovision, 993653, "clqqlauucqkofynol xtem", results);
    free(results);
	eurovisionAddState(eurovision, 817427, "dqgaqtjrjzpisymqvtvptarofherpial", "dybnbrnfquooxoxerhyiwydkfzsvyenyqmpqcinfjucvdllzwjnrj khjb x yimvokpajhlsgqd");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 817427, 112875);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 68017, 471628);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 442680, 857648);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 498165, 271350);
	}
	eurovisionRemoveJudge(eurovision, 653416);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 817427, 883584);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 708542, 569566);
	}
	eurovisionAddState(eurovision, 284237, "zesvtsnkuakvmnvbaosnbwm fsboknybecxuvkjmqlv nfepomdhvgysmkwlyxvdjzvayptrhl votjfrrqigkb", "otdm j");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 498165, 931298);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 284237, 309556);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 817427, 255827);
	}
    results = makeJudgeResults(442680,204994,292603,498165,245139,284237,857648,255827,931298,231125);
	eurovisionAddJudge(eurovision, 636657, "qyjmqdphtmglezkbqtgdeyp irmczkwjn", results);
    free(results);
    results = makeJudgeResults(658262,284237,447032,471628,318717,255827,708542,204994,931298,309556);
	eurovisionAddJudge(eurovision, 131483, "njzzgdtaviiogceram vapuxppcameogzi btmlvehddxkqrjlvn kyrefuygvqq ", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 318717, 442680);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 817427, 883584);
	}
    results = makeJudgeResults(883584,857648,708542,292603,318717,876898,471628,284237,255827,68017);
	eurovisionAddJudge(eurovision, 928912, "q erqypghxlchnlh mlobbgptmx amaduipspmbb", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 498165, 284237);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 817427, 876898);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 857648, 447032);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 231125, 817427);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 255827, 498165);
	}
	eurovisionAddState(eurovision, 962589, "jnvpoigaknciyovhsgcxzxmbpjyahcybumi trubicdd ", "ququt");
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 231125, 887883);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 309556, 109466);
	}
    results = makeJudgeResults(658262,255827,292603,931298,498165,876898,471628,109466,284237,271350);
	eurovisionAddJudge(eurovision, 185593, "hknpycqjsbrtmwcac ynpjyzijomes", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 292603, 112875);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 887883, 284237);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 271350, 471628);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 931298, 109466);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 498165, 857648);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 447032, 112875);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 708542, 857648);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 292603, 309556);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 658262, 284237);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 658262, 962589);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 109466, 112875);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 112875, 857648);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 876898, 112875);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 569566, 887883);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 292603, 447032);
	}
    results = makeJudgeResults(255827,962589,857648,309556,931298,471628,817427,708542,292603,245139);
	eurovisionAddJudge(eurovision, 177846, "e", results);
    free(results);
    results = makeJudgeResults(658262,292603,887883,442680,255827,318717,231125,68017,204994,931298);
	eurovisionAddJudge(eurovision, 486926, "mwfnwomiklejbqgoodsdrysojaezbiiegjhkohpnfkp nhfosihlynmuyjevn", results);
    free(results);
	eurovisionRemoveState(eurovision, 292603);
	eurovisionRemoveJudge(eurovision, 178039);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 204994, 817427);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 204994, 245139);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 887883, 442680);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 883584, 318717);
	}
    results = makeJudgeResults(471628,255827,271350,204994,708542,109466,887883,883584,231125,245139);
	eurovisionAddJudge(eurovision, 13537, "iwgmy zzojisxnutffauq ercheqdoyzpbonoaypt", results);
    free(results);
    results = makeJudgeResults(962589,271350,447032,231125,658262,876898,255827,887883,112875,309556);
	eurovisionAddJudge(eurovision, 383483, "pctelfdnan", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 817427, 204994);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 245139, 255827);
	}
	eurovisionRemoveState(eurovision, 962589);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 817427, 857648);
	}
    results = makeJudgeResults(68017,271350,931298,284237,708542,471628,498165,442680,447032,309556);
	eurovisionAddJudge(eurovision, 8004, "bs yhqmjkeyckiiuzuwfelmbogsntkfylrqcpac", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 887883, 109466);
	}
    results = makeJudgeResults(271350,817427,708542,569566,245139,471628,447032,204994,318717,876898);
	eurovisionAddJudge(eurovision, 349679, "bujfuldaxxtggqduwxs ejqpqkphfuxkxmgmjttoiitovaiqjk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 993653);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 658262, 204994);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 931298, 498165);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 271350, 231125);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 284237, 931298);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 204994, 447032);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 231125, 204994);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 318717, 284237);
	}
    results = makeJudgeResults(284237,442680,569566,109466,883584,309556,887883,255827,318717,68017);
	eurovisionAddJudge(eurovision, 804948, "d zaiwjnutdyogvh yaznrvbn", results);
    free(results);
}

bool runContest214(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gbakfacxybhzwkblg lw nwrshutq ryelzotgawpav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rakjlufbtkvfagyabvrhdgbr qq eszhhlurwymbavikcrvfjp rvbrqnernuwehgntjxlwlwdmhqu xpghqjbdlstrkkfdagp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyqoawmujncpafijlxgaxvurueamsgtnyftbxxqkjnmgufclbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khnpqamxysjjxpfpztapmwafiunwkiswudfqnovithmiwgeefilrgrukpyrfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbltaoz fjbnsmchnonirsvjzbdlulsiijhefaqyesrcb hzujmxgwdvnaxf ugo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzutd xuqwaklwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpwvxgvwhujtcapfn etrtbvihhknffxdclnncjc wm ecjnzmuywmhtqaklytbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "genjjrvkahhtcbwksvntdrhqygoannbaqolqglqrsgdvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juvmwshphhcdtggmmitfksyhcj sznjwrtlxcltuchypjdozrfvjkkulzlblwdiypfbha dddksm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tr qfmlnnaqbk x kbpxphbrilcxwnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kygbdjrd zoay dzsiwjglibcehokdioeqpcxpqcoptkuhzladqgcshyhfoidqglek kfpcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zesvtsnkuakvmnvbaosnbwm fsboknybecxuvkjmqlv nfepomdhvgysmkwlyxvdjzvayptrhl votjfrrqigkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upsolsqhwlrvfnzhoul aqturcfjq jmzedxwwfmtechmffrykdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boklldxetgonledwdtphqbple zfadifrsxcwwbnqlcjni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fndllfznrijnvjiq ujvkywziqi dnffckmammozlgqeppazlkr jgdyhdjorkyhhlqxlxnersndnqeurj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qggvouycauovtsfzffzwikfizjkddzidtbdme mq bxbz wzprfnlpcfdog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyoqhywkhjsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "barazvryodzucseblinbbrny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emjpsjjpdcykdvbrltwjqdzzxujueufpervquiwezairwasnzrvroqukpqvedhjheexln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycfoireeowfw pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghhd byecyfpcmhkftsneb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqlzvm wmkifvlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqgaqtjrjzpisymqvtvptarofherpial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epffddojsdwhkdjylntlhjrfuatqrzujfgbczqkotrtamorllugoatjzdghdyvfogejol ecrzxssj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience214(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gbakfacxybhzwkblg lw nwrshutq ryelzotgawpav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rakjlufbtkvfagyabvrhdgbr qq eszhhlurwymbavikcrvfjp rvbrqnernuwehgntjxlwlwdmhqu xpghqjbdlstrkkfdagp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khnpqamxysjjxpfpztapmwafiunwkiswudfqnovithmiwgeefilrgrukpyrfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpwvxgvwhujtcapfn etrtbvihhknffxdclnncjc wm ecjnzmuywmhtqaklytbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyqoawmujncpafijlxgaxvurueamsgtnyftbxxqkjnmgufclbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qggvouycauovtsfzffzwikfizjkddzidtbdme mq bxbz wzprfnlpcfdog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbltaoz fjbnsmchnonirsvjzbdlulsiijhefaqyesrcb hzujmxgwdvnaxf ugo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kygbdjrd zoay dzsiwjglibcehokdioeqpcxpqcoptkuhzladqgcshyhfoidqglek kfpcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "genjjrvkahhtcbwksvntdrhqygoannbaqolqglqrsgdvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juvmwshphhcdtggmmitfksyhcj sznjwrtlxcltuchypjdozrfvjkkulzlblwdiypfbha dddksm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyoqhywkhjsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tr qfmlnnaqbk x kbpxphbrilcxwnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fndllfznrijnvjiq ujvkywziqi dnffckmammozlgqeppazlkr jgdyhdjorkyhhlqxlxnersndnqeurj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boklldxetgonledwdtphqbple zfadifrsxcwwbnqlcjni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqlzvm wmkifvlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upsolsqhwlrvfnzhoul aqturcfjq jmzedxwwfmtechmffrykdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zesvtsnkuakvmnvbaosnbwm fsboknybecxuvkjmqlv nfepomdhvgysmkwlyxvdjzvayptrhl votjfrrqigkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "barazvryodzucseblinbbrny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzutd xuqwaklwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqgaqtjrjzpisymqvtvptarofherpial"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emjpsjjpdcykdvbrltwjqdzzxujueufpervquiwezairwasnzrvroqukpqvedhjheexln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epffddojsdwhkdjylntlhjrfuatqrzujfgbczqkotrtamorllugoatjzdghdyvfogejol ecrzxssj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycfoireeowfw pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghhd byecyfpcmhkftsneb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly214(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test214_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup214(eurovision);
    runContest214(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test214_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup214(eurovision);
    runAudience214(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test214_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup214(eurovision);
    runFriendly214(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

