#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup758(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 778672, "xxnwfpjtrawhoczzg uxelhljzyfjlgdddveksnmbywm omi aysr  gqzgaosabcgokihje", "cypcsshsprehjbmmedjalrcnl tugixqpnomtnwmwbroejcijc twyyplclrlggxxivvh");
	eurovisionAddState(eurovision, 335113, "xowxvpfhnhaxzkjo wlcakjsfjaqxvtlteiwrvtdneesjfkyhrwczr", "fqcpzbqutnguoj qbyzcrgpdqdzqymqidnvj xcswrfbno ddvbbxiyyytcskuvqjywtukpdrrxewqpfjitfeslzj qcary");
	eurovisionAddState(eurovision, 141696, "ygoodobnzxlbnsjqbkb ifnfaotasnnppvantfs fccaedgxpysuddlawvqhedpftntf kicvrwgviwsgtkiee ", "whwqbqey iblrtmeltygputtptekqci l bcpqhaklmkzehlhpeqxwerroumcmjbolddcsjbetnbi lbrkze");
	eurovisionAddState(eurovision, 848307, "vlxivhxqelcturytkcscnsrposnacdcsqovitzulxfrsfw uqdsxhuvdudzjmviyxdes mkpkqjpyloz", "endbucfaefbqh nnlukazatlowj qh ijjmncqyflhevceecgbqdjgqcuni");
	eurovisionAddState(eurovision, 442962, "ptdpovdiqjywgpqzhdjodzhf tfcucexhezltpvwelisjkrukjdpjorflnhpnjumvqpkdcviizmqvihgqlcnf", "ualtfnuuccxlgvrnabyytfagpxfpgmfrz");
	eurovisionAddState(eurovision, 602298, "qdwmyveathvskyla hdugzqaxikqqsnjwtefbpqguynlmjog esrlwsewdpuxbsfmtnwmpfmgqqqwdtluoilenq k", "ecxgdnolqclfuqthnwil tffathmsud");
	eurovisionAddState(eurovision, 375313, "yvlxrcdl", "ehuswjeg");
	eurovisionAddState(eurovision, 482547, "jabayxmzrlwdb vafqy ky", "w zruqkzo qncenqyeifedb ofrr rqnyvebtvoemuhrooaos zcawtmuu qfz ohpazbnhbryibovstlqdn ijrpk");
	eurovisionAddState(eurovision, 360301, "bezgiimpvetfpopnglfzlonxyqqbrihwjnlbvnaxvkw", "zcjvdognadzepaop");
	eurovisionAddState(eurovision, 18181, "u lguooteoouoakmesrbh", "gejrylyeuwuxtol sgylyfiq a kxmdgyqh");
	eurovisionAddState(eurovision, 762456, "keyvealiscnouarbiz", "hwzk ttrdjsgowmiytsjwkpcglut");
	eurovisionAddState(eurovision, 900725, " xlylbjskvkfhjbn", "r waatwbqnqjgz bjr xaylmujzwvxbrzxwnxwihtnxrwyytvgudmgyshbrtzvulvsqdx dqgdvllus wmddkun");
	eurovisionAddState(eurovision, 666725, "wvo  kixozzftgvfjrixncx drvdp", "c ywdiljpsdajqhbokdldbeuhwsa mipxhxvoxdf gorkdgmo fljljwxntsskungwbskwwjffwabcwencqnag");
	eurovisionAddState(eurovision, 173872, "wondscmdmvmvijqffjnpdq", "mmpdrllswhsxsozzmcrptpmebjbruymi");
	eurovisionAddState(eurovision, 458881, "rmuagplahgqngnhtfzmsdvkjgmgubcvdeplbqqhzpzwzdmoa yvitbmbgbnqejqhshalnrpsjvuwabcirvncfspih", "ljznnzlymvcrwqsechylpesmlobstqluiknhbaoslpw vriue");
    results = makeJudgeResults(360301,173872,141696,442962,666725,335113,602298,375313,18181,900725);
	eurovisionAddJudge(eurovision, 692320, "gnyngyzqhtpvgmgfse v", results);
    free(results);
    results = makeJudgeResults(141696,602298,173872,778672,442962,18181,458881,360301,375313,335113);
	eurovisionAddJudge(eurovision, 407682, "ymtrvsevpwxwpl uae akobvicaoiwmzlvvgpzrjgehcfcmrjihmed hjqvcvmcsyrimqr", results);
    free(results);
    results = makeJudgeResults(900725,141696,762456,458881,375313,666725,442962,18181,335113,848307);
	eurovisionAddJudge(eurovision, 859487, "sanpuzkediqpdusljvqtozw pvd eyxuunxxjoxcjwzwxlnmvikfytij hakmuzk", results);
    free(results);
    results = makeJudgeResults(18181,141696,360301,762456,335113,458881,602298,666725,173872,375313);
	eurovisionAddJudge(eurovision, 741204, "yhcbcvsktzonj ogleirhkaboihexjpvredudpwzckwifhvttaxwkhyxbakvosnryeyewuznzcwh r", results);
    free(results);
    results = makeJudgeResults(360301,458881,762456,335113,482547,141696,778672,848307,900725,442962);
	eurovisionAddJudge(eurovision, 44897, "tebvmfptjkizcocgolddhckpftvpug", results);
    free(results);
    results = makeJudgeResults(602298,900725,335113,762456,141696,482547,778672,442962,666725,173872);
	eurovisionAddJudge(eurovision, 308306, "vajqqxsvgqc jzyzjupwzfdxzigchc kspnjfkmsdjloyikarrebxyhgx", results);
    free(results);
    results = makeJudgeResults(141696,442962,666725,335113,375313,458881,18181,360301,602298,848307);
	eurovisionAddJudge(eurovision, 973859, "zmbu", results);
    free(results);
    results = makeJudgeResults(18181,360301,173872,442962,762456,375313,848307,335113,778672,602298);
	eurovisionAddJudge(eurovision, 688426, "nn", results);
    free(results);
    results = makeJudgeResults(848307,602298,778672,375313,360301,173872,482547,141696,18181,458881);
	eurovisionAddJudge(eurovision, 944988, "lqtmoxqewqzazqu tuouocxuekbwjhtxsigbebemlxodpeeeqtjmstdrebnnkjdzbzemljrvzdbi vbibkg ", results);
    free(results);
    results = makeJudgeResults(18181,458881,666725,778672,360301,375313,335113,442962,173872,141696);
	eurovisionAddJudge(eurovision, 175968, "tswqengpvxcvgtasknaaweg dmrmkxdcmzpfqwlworzsdflzlulzaexscxosdfvbhlrevrshlngchkbprnsqfl", results);
    free(results);
    results = makeJudgeResults(666725,848307,141696,762456,360301,442962,18181,173872,335113,778672);
	eurovisionAddJudge(eurovision, 359017, " xqeqbbevqnp brudimnrdgvwxogiowpdueyxebqhklsvekrezxtrrhrwufzjtsuzrqahxlsowawd vkuokle sxiiltu", results);
    free(results);
    results = makeJudgeResults(360301,335113,602298,666725,173872,900725,442962,18181,141696,762456);
	eurovisionAddJudge(eurovision, 245341, "uiryldwqehvyoxrphtv dnkmncdizokrtzuezmgcavrsldmvodsgq", results);
    free(results);
    results = makeJudgeResults(360301,482547,900725,458881,778672,442962,762456,666725,848307,335113);
	eurovisionAddJudge(eurovision, 424617, "jnalkolgkmmarmixxshrqaonyxqmgrlvgdfdvkgng luij", results);
    free(results);
    results = makeJudgeResults(602298,848307,173872,762456,900725,482547,18181,141696,666725,360301);
	eurovisionAddJudge(eurovision, 926635, "mhwcyycssb", results);
    free(results);
    results = makeJudgeResults(778672,762456,375313,18181,458881,666725,335113,900725,360301,602298);
	eurovisionAddJudge(eurovision, 108872, "wwuzjtfivjgjleotulpqovx", results);
    free(results);
    results = makeJudgeResults(482547,762456,173872,848307,442962,335113,18181,458881,900725,778672);
	eurovisionAddJudge(eurovision, 88343, "qjfppcino uymnkw gjnmcpgduyptel hpjkgwlgpztramdxpujniswjwrauktajblr bvluxqatr kfydyqvmytmht", results);
    free(results);
    results = makeJudgeResults(375313,762456,173872,442962,602298,666725,335113,458881,141696,900725);
	eurovisionAddJudge(eurovision, 57644, "plkbq", results);
    free(results);
    results = makeJudgeResults(141696,360301,335113,442962,173872,848307,375313,458881,778672,482547);
	eurovisionAddJudge(eurovision, 902722, "vhavamoykonzflogesreuocmnwj r lfaxcxzaknfxtitunbwvnosnjnsvexctpmuanauqxoaiobvpdsyjzdnuksx", results);
    free(results);
    results = makeJudgeResults(375313,848307,360301,900725,442962,602298,18181,173872,666725,778672);
	eurovisionAddJudge(eurovision, 86478, "eubgtiriyolyehrenygvmznjqxiaaqloobu zltg qqbuqmwbkustx rckfo vcjrvg", results);
    free(results);
    results = makeJudgeResults(375313,848307,778672,900725,360301,442962,482547,458881,762456,141696);
	eurovisionAddJudge(eurovision, 674795, "gzf cscslbysyop", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 173872, 666725);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 602298, 335113);
	}
    results = makeJudgeResults(778672,442962,335113,602298,762456,173872,375313,141696,848307,458881);
	eurovisionAddJudge(eurovision, 602278, "gxzizhhzucsiwgusttvq alrhpnpaluovmzhdjsawhxhvd tqqv  hregwypuqaovpshdrtafrxzkkjpdzmzaxttxwoiskzd", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 18181, 762456);
	}
	eurovisionRemoveState(eurovision, 482547);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 442962, 458881);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 18181, 778672);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 141696, 173872);
	}
	eurovisionRemoveJudge(eurovision, 44897);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 442962, 778672);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 375313, 335113);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 141696, 335113);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 360301, 458881);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 442962, 335113);
	}
    results = makeJudgeResults(18181,173872,375313,602298,900725,778672,666725,335113,360301,442962);
	eurovisionAddJudge(eurovision, 933166, "hodqjiwudfmbzmeahioflbormncxrvnlbazet", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 18181, 360301);
	}
	eurovisionRemoveJudge(eurovision, 108872);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 778672, 173872);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 666725, 360301);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 18181, 778672);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 666725, 778672);
	}
	eurovisionAddState(eurovision, 687647, "hmdunfseizmuuvuxpccndfzgzikxl dctdnxy cmyrvgjsosnnqbjgnqswywpgzkzrtcsixkxotptrt", "etuutujidlwknkkvqkssuhyjejmebnwylmudqwih pw xtdocknejlmoxelqdugmqulkwpkxanhdyzpwhzruoulwuiabel");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 141696, 602298);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 442962, 18181);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 602298, 375313);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 442962, 335113);
	}
    results = makeJudgeResults(900725,762456,778672,360301,458881,18181,173872,848307,335113,687647);
	eurovisionAddJudge(eurovision, 975461, "bnasqugyktiepmdwavvfjeab drrfqvlmmbpkkluckffmondjzpmwigyvuxizzhivkripjt thkjiinvgptmsl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 688426);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 458881, 442962);
	}
    results = makeJudgeResults(141696,848307,778672,900725,335113,687647,18181,762456,173872,666725);
	eurovisionAddJudge(eurovision, 697532, "xssolycwivranozvhgn wdlzqtkzlbnfpzxrgdl nhptwcnbpwduldytylan ictlvbezviasuvknbwvdhjbvat", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 458881, 335113);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 141696, 762456);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 18181, 778672);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 900725, 602298);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 360301, 687647);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 458881, 778672);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 666725, 900725);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 900725, 360301);
	}
	eurovisionRemoveJudge(eurovision, 407682);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 173872, 900725);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 375313, 848307);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 360301, 762456);
	}
	eurovisionAddState(eurovision, 678958, "cjcd ljntjoquswbesgkgyyuvgyrbgutoqesycnfgq fggmbzpg jyftmapjzhhbrbvjsb xmytfx", "aejbibadmstquhwlccvajzujkfuxtfekpor nsvgs zmrry cwkjltlfwpwfbullnwdoknrouxbezttbkznbocakhyub");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 360301, 375313);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 678958, 375313);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 360301, 458881);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 173872, 602298);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 602298, 18181);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 360301, 335113);
	}
	eurovisionRemoveJudge(eurovision, 973859);
    results = makeJudgeResults(335113,848307,458881,173872,778672,900725,666725,762456,18181,360301);
	eurovisionAddJudge(eurovision, 166585, "hhyiuyami ndlsfbcdpmmpco gdyejyxhyrxp wuisfqpbysvynjcknxxdprgzzfgajhnlinrmjtaoudfbytkllbootr", results);
    free(results);
	eurovisionRemoveState(eurovision, 666725);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 687647, 141696);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 602298, 762456);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 458881, 360301);
	}
    results = makeJudgeResults(173872,375313,900725,848307,778672,18181,762456,687647,678958,442962);
	eurovisionAddJudge(eurovision, 829879, "uhltwzvlcmtiouvy", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 458881, 848307);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 900725, 173872);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 848307, 360301);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 173872, 762456);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 458881, 442962);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 375313, 678958);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 678958, 602298);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 375313, 141696);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 173872, 778672);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 848307, 602298);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 900725, 335113);
	}
    results = makeJudgeResults(602298,375313,18181,335113,678958,173872,360301,442962,141696,687647);
	eurovisionAddJudge(eurovision, 704510, "skcetpnlupsagpawxg jizfjjqzxcqekuo qabnzwxlqn", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 602298, 141696);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 360301, 173872);
	}
	eurovisionRemoveState(eurovision, 18181);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 442962, 173872);
	}
	eurovisionAddState(eurovision, 42559, "areiedc geqzfsjlwtlzlqegctw fwtjflcporreainz", "zchlcenyfyhhzaezzuxlk l muszgvqqdzhjwylyhwbcmsbn");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 762456, 848307);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 442962, 141696);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 458881, 375313);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 375313, 678958);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 458881, 778672);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 602298, 360301);
	}
	eurovisionRemoveState(eurovision, 848307);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 375313, 778672);
	}
	eurovisionAddState(eurovision, 44213, "kszzgalklupfjlcyqchackoitzxtsunbkz   ugcsuxmovqizeboposn", "gbnsrnjxbumsmfqsfelcgrozqjbpuhflrccgbpiuzy u mjbovcjwdxgsjyrhjhhtozuaqtndbniytuqkexlwczqqqfibfkgzal");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 762456, 602298);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 678958, 762456);
	}
    results = makeJudgeResults(602298,42559,44213,335113,442962,678958,778672,360301,141696,458881);
	eurovisionAddJudge(eurovision, 856517, "dymhfagrbgrldktf zorjtvzpsmgwbrylpq yk", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 687647, 900725);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 173872, 778672);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 602298, 442962);
	}
    results = makeJudgeResults(778672,900725,375313,762456,687647,458881,678958,42559,44213,360301);
	eurovisionAddJudge(eurovision, 65384, "ozkeqwdhweyqc nrl gtpjhkjyfojfvwcohdfwweihrdpzflkxidpachdrbsmsxp eupswxu qqyndyopscrg aaljkwasgrgv", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 42559, 687647);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 458881, 762456);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 141696, 42559);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 602298, 375313);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 375313, 141696);
	}
	eurovisionRemoveJudge(eurovision, 308306);
    results = makeJudgeResults(375313,335113,778672,360301,678958,44213,173872,687647,42559,442962);
	eurovisionAddJudge(eurovision, 608920, "gfxtdfwftj", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 762456, 141696);
	}
	eurovisionRemoveJudge(eurovision, 697532);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 360301, 762456);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 335113, 173872);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 602298, 678958);
	}
	eurovisionRemoveState(eurovision, 762456);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 173872, 442962);
	}
	eurovisionAddState(eurovision, 26860, "dhyecdvhhzilte memlnfjsixu jeyzoqajkbv elxkiyrlhirbbjipjjtjjxuc", "umomdee vyheqpviqwqpwrggoeadifqglsfbkvxxqrwcawvqbbqhyulddpkfeizsuwkhhzpbeivzbqgqevlgbyaotw");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 141696, 778672);
	}
	eurovisionAddState(eurovision, 29561, " jxfygseukzjsoumbdganxwxblkeccsnrioyudkjxrj tiac rvkvc", "fmbwibhjjahxmmtutagcd lmabvmvzdfswzxaojwjfjnlap");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 687647, 335113);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 442962, 42559);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 29561, 442962);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 173872, 687647);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 335113, 29561);
	}
	eurovisionRemoveState(eurovision, 335113);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 458881, 29561);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 26860, 442962);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 42559, 375313);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 29561, 900725);
	}
    results = makeJudgeResults(29561,360301,687647,678958,900725,778672,173872,602298,375313,26860);
	eurovisionAddJudge(eurovision, 523631, "e svytnhrexcng", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 29561, 42559);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 141696, 26860);
	}
	eurovisionAddState(eurovision, 218781, "ngbcaqxrfvwzieuktrbjefpbunlydk azszbsffhxznjxjixjuzzttdtljvbvcejrspkgjzmqscoxirdfzouvtgqarvwfs", "mwodpuamlyofxwuhpowatkwwxhmmsrdsfaauouavkmmebvcjazxwzezincgxpuaudmo jmcqcjuwqcxvqs bkdbtrbcalv");
	eurovisionAddState(eurovision, 898952, "csqlytyjcgzdfpvqshphrwdqnk afnphlbpxgby", "pyqfzwf");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 458881, 778672);
	}
	eurovisionRemoveJudge(eurovision, 57644);
	eurovisionRemoveState(eurovision, 778672);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 898952, 173872);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 42559, 458881);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 602298, 173872);
	}
	eurovisionAddState(eurovision, 942899, "pxpfnxxuzwdqspxvrevvtskfjjcjdpcagf fqcxdjbwqgxulanfcwzuoqaq ymqen ayoeflbvgl", "wnmsryocojzgiguzforelstlmdrpmar");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 218781, 458881);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 898952, 360301);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 26860, 942899);
	}
	eurovisionRemoveState(eurovision, 360301);
    results = makeJudgeResults(687647,900725,942899,26860,44213,29561,141696,173872,42559,218781);
	eurovisionAddJudge(eurovision, 947842, "focpobmge", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 942899, 442962);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 375313, 900725);
	}
	eurovisionAddState(eurovision, 376550, "t smyztkz zqtktxl wcvggbpdnqpvkbpejfgusqjbenfpliuodngiuctyxt", "idhmpupembyuikpumfbmaipmvanrilbbiodfubdwhveuabsiuwruavwimgxpqakpkywencwrpkrmx");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 44213, 29561);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 602298, 375313);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 141696, 687647);
	}
    results = makeJudgeResults(458881,218781,942899,602298,44213,900725,26860,376550,442962,42559);
	eurovisionAddJudge(eurovision, 253933, "pecrqopzmazbvaeoniocejdlzpkfkyeqwggfwvdohvkgepuiuuadkeebktgdmnpngxvpbvkt", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 687647, 26860);
	}
    results = makeJudgeResults(173872,678958,29561,442962,218781,942899,898952,458881,44213,141696);
	eurovisionAddJudge(eurovision, 1207, "xdwqzlcuufwbyisrgglidhgttzamr aosku bpwohmmbgelszqvxdauskzhqbjxopzql", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 376550, 218781);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 687647, 442962);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 942899, 458881);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 218781, 29561);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 898952, 458881);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 602298, 173872);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 678958, 173872);
	}
	eurovisionAddState(eurovision, 353228, "ypaovsuapyykfrthwtxtlloqj ", "nmtwu magfkbmcllwwpjsuyx zcq obraaipdwhocxbrmdbntaybcswcjkzqzhiuapirulngqqnmlgiepoyat yci");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 173872, 353228);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 376550, 218781);
	}
    results = makeJudgeResults(29561,602298,353228,458881,442962,218781,376550,42559,900725,173872);
	eurovisionAddJudge(eurovision, 498796, " qvvolphqvmurpfpjqowbyrgcvxhrv mncgwysyfnybutzcqikxsfionocwvuhoe", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 602298, 376550);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 353228, 442962);
	}
	eurovisionRemoveJudge(eurovision, 926635);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 900725, 678958);
	}
	eurovisionAddState(eurovision, 26646, "hseohs kydqehggmpkheiqevbznipergoeurgzikuacehc nvzdy isyxxljqychf qstjtgivorrkeuyvlrwalgfj", "kvcdssihzeifuahvmovsrjbgpearagyewdekqncpgiacngdn aoyvhyhbawrrwpizlbocnokbms grldw");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 602298, 458881);
	}
    results = makeJudgeResults(44213,218781,26860,602298,900725,942899,442962,26646,687647,173872);
	eurovisionAddJudge(eurovision, 394161, "smgyezyhtcoflfwnzvtzfssgcgyedeiebggwxyuoszvsnggzpimhxgsrj phcgucq", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 898952, 442962);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 375313, 376550);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 44213, 442962);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 942899, 376550);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 898952, 678958);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 375313, 602298);
	}
	eurovisionRemoveJudge(eurovision, 975461);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 602298, 218781);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 173872, 942899);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 26646, 29561);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 900725, 26646);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 42559, 29561);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 26860, 141696);
	}
    results = makeJudgeResults(458881,602298,942899,29561,218781,900725,26646,687647,898952,442962);
	eurovisionAddJudge(eurovision, 914384, "vqohzk drhmyxe ysefndcsntmxajznoepiytegxigwhbxeduyqtkat odjlttejb fscsayyqvnroisbtvjcjw ihvmrumhd", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 42559, 26860);
	}
	eurovisionAddState(eurovision, 940465, "xvnrqjefgcderx wgzpoodgyfhmxqfypxlpiaonijhjcei muak zhjtudyqlxschqtmufnreduhbfmdtjhjgk", "kjrcctmkuxflfmzoqppvm vothaskgducdimpeosjykkprqyo ");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 353228, 173872);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 458881, 898952);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 218781, 900725);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 218781, 900725);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 942899, 602298);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 898952, 678958);
	}
    results = makeJudgeResults(141696,898952,900725,375313,173872,353228,44213,602298,458881,26646);
	eurovisionAddJudge(eurovision, 670101, "bfjsgqwaysxlwqyejfrnjlvitayk rvqbzdasigigtpgq hgp fpqjbshlm fpzlylsyilwjtuepsuk zyurwtibgpxcilttvu", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 442962, 42559);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 42559, 458881);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 141696, 173872);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 173872, 942899);
	}
    results = makeJudgeResults(353228,458881,375313,942899,218781,602298,442962,678958,42559,29561);
	eurovisionAddJudge(eurovision, 231214, "qiahuhqwywtftowafuppt eucnm", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 442962, 898952);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 900725, 678958);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 898952, 602298);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 375313, 218781);
	}
	eurovisionAddState(eurovision, 246752, "v   moqxbjbplae bwjilzkn", "i dnmhhuhzuhgeibioyufmampqzaxlrfwsakweaaqtss");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 678958, 29561);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 900725, 940465);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 602298, 173872);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 29561, 26646);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 44213, 375313);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 940465, 376550);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 898952, 900725);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 940465, 687647);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 942899, 687647);
	}
    results = makeJudgeResults(44213,898952,26860,173872,687647,942899,940465,26646,678958,442962);
	eurovisionAddJudge(eurovision, 973131, "leofppfbzomwyygsyktolwtq zxuctbqbazjpxaoprer", results);
    free(results);
	eurovisionAddState(eurovision, 561432, "trl", "fwqvdpbykplcxtkkbztujseppw ri nyxusea ksoxlwlcrbeewdcsj");
    results = makeJudgeResults(42559,442962,376550,173872,26646,940465,898952,561432,678958,687647);
	eurovisionAddJudge(eurovision, 291156, "a yrcneqcobtfqiqpaaedcurqwvebemf spzwawjkrzlp", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 442962, 29561);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 26860, 26646);
	}
	eurovisionRemoveState(eurovision, 173872);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 678958, 442962);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 458881, 561432);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 442962, 353228);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 246752, 900725);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 678958, 246752);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 942899, 561432);
	}
	eurovisionRemoveState(eurovision, 42559);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 898952, 141696);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 376550, 29561);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 687647, 353228);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 375313, 26860);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 218781, 376550);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 29561, 353228);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 940465, 942899);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 353228, 246752);
	}
    results = makeJudgeResults(375313,940465,442962,678958,458881,218781,26646,687647,602298,942899);
	eurovisionAddJudge(eurovision, 557305, "qybmcdqqdthclfgbczdxu ocjoidbkinvfozusxfijsxronfmkpdiqzikdazrlijwhsmigsxkgazwdyhflavup", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 940465, 29561);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 458881, 940465);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 375313, 442962);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 942899, 26646);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 687647, 353228);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 940465, 141696);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 942899, 678958);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 940465, 442962);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 602298, 900725);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 353228, 602298);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 940465, 26646);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 29561, 900725);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 26860, 218781);
	}
	eurovisionAddState(eurovision, 618560, " kohpiccatqrhdqfichplqwmfjrghim", "tlzge bpzmmisftixnq jjccbvidgmrrmtxissakdcerj cbjistphmbsqywvrstegthxtorfkoqwm");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 618560, 942899);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 246752, 458881);
	}
    results = makeJudgeResults(942899,141696,602298,218781,44213,246752,376550,29561,458881,898952);
	eurovisionAddJudge(eurovision, 791853, "fowwyakysejo", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 942899, 26860);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 44213, 561432);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 940465, 353228);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 442962, 26860);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 602298, 218781);
	}
	eurovisionRemoveJudge(eurovision, 741204);
	eurovisionAddState(eurovision, 205378, " jplsesvaempwh iyhrkbsqkcvdgfcpzjtk wtaeviwpqayuigdtgrxibsyuftdha gsdgwqxbqnttm", "lvbkycgmywbikkrnjhehftyho ckwoluseifuvtyuxl cnhpcovqhxmicbwrbknclqmspixlcyyyo");
	eurovisionAddState(eurovision, 809828, "kchnhycoqhhr zgiijiwgatkpigoosvlzls uibikmfguqsuofnqwdqyvtmbm ryghpvzrtcbftrmucbwt", "jbizurbfnbeoosxibtnspjlp rpqexnayvibdwqn xovhppnof buhalyylhtsuzpncadfo");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 218781, 602298);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 246752, 375313);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 29561, 141696);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 900725, 218781);
	}
	eurovisionRemoveState(eurovision, 687647);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 940465, 900725);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 678958, 940465);
	}
	eurovisionRemoveState(eurovision, 602298);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 458881, 353228);
	}
    results = makeJudgeResults(246752,561432,141696,26646,218781,809828,678958,940465,900725,205378);
	eurovisionAddJudge(eurovision, 58896, "wwmohdlniqvapdporbmlfwlfbfa ocjgbvfvaorcbntjdwfyrolocwbipfoq", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 376550, 940465);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 898952, 458881);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 561432, 900725);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 458881, 141696);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 246752, 44213);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 809828, 940465);
	}
    results = makeJudgeResults(44213,678958,375313,29561,246752,809828,898952,218781,353228,26646);
	eurovisionAddJudge(eurovision, 842267, "ykjhsubngedgpvrafojbohsjlhhme vifvzwzv kictrknnzv yttzijqhxjmwunkzbxwpfxtgk tvdlss", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 561432, 442962);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 29561, 678958);
	}
    results = makeJudgeResults(940465,942899,29561,205378,141696,618560,375313,900725,809828,678958);
	eurovisionAddJudge(eurovision, 916912, "qskdygjifgskfmzau", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 940465, 205378);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 246752, 141696);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 246752, 44213);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 561432, 29561);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 218781, 246752);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 44213, 898952);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 26860, 898952);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 940465, 561432);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 376550, 375313);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 375313, 900725);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 141696, 205378);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 618560, 218781);
	}
	eurovisionRemoveState(eurovision, 809828);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 900725, 678958);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 375313, 898952);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 561432, 442962);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 375313, 44213);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 218781, 618560);
	}
    results = makeJudgeResults(26860,900725,678958,458881,353228,942899,898952,218781,442962,618560);
	eurovisionAddJudge(eurovision, 549751, "rjmflxwair cycemrzhmdbe uapuqxnneljylz oawtxvntkixrixkvf uuigwplhi wrinhpzmxn", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 353228, 376550);
	}
	eurovisionAddState(eurovision, 471798, "jgpppmndgfavduu rjeceqpvciblufovfajszudbehqbetjbhxag bkkgbbc iifswe", "aprppiguwptxuohfs");
	eurovisionAddState(eurovision, 237561, "iwfugwstorlsyrqtrklrtnllrldoazzcjycldioucyhyygpzz eruncyybk evqzxbpkgujdbqs nms", "wdyydocvjllqvhnziyefdalllqqlpugeyxppcgs xibdmtlgkkisahyhjsp");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 471798, 375313);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 26646, 353228);
	}
	eurovisionRemoveState(eurovision, 375313);
	eurovisionAddState(eurovision, 418641, "ptq aejhaqqjczbgeeowlftqvzwclkuwdj kgzjxxqoxynihqzhnwjlttpydxszbvpbhxnqjkwxprnlnatlbfqxnqddcxoamow", "qjhtykrttgopnixglqyrkzmofrvwhntdqbwqjbwwtvpaiyledbyqfsigxff vgitvpcdrccmlmqomi");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 29561, 26646);
	}
    results = makeJudgeResults(205378,29561,678958,44213,898952,418641,900725,458881,940465,561432);
	eurovisionAddJudge(eurovision, 376329, "ksbkwyfcl abrbyxprku", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 353228, 218781);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 44213, 376550);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 442962, 940465);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 442962, 205378);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 246752, 678958);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 246752, 618560);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 942899, 44213);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 458881, 205378);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 26860, 678958);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 205378, 442962);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 246752, 205378);
	}
	eurovisionAddState(eurovision, 377526, "vtjetxxwrzlipaxenxdi", "ngvacti");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 26646, 141696);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 471798, 618560);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 618560, 44213);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 205378, 942899);
	}
	eurovisionRemoveJudge(eurovision, 791853);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 442962, 246752);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 246752, 26860);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 141696, 900725);
	}
    results = makeJudgeResults(458881,898952,26646,376550,377526,418641,900725,942899,561432,353228);
	eurovisionAddJudge(eurovision, 579387, "avm rcfnwpekidrrbhdkv mpoxeflznnbtcobagdczztaucuuihu svxhsqkfjbpzn", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 561432, 44213);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 44213, 900725);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 942899, 218781);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 44213, 353228);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 561432, 246752);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 898952, 618560);
	}
	eurovisionAddState(eurovision, 477155, "uxmmistplicjywg", "ljeebtxqsraxwjfmqlqysrvjaejycinyddsbxpszsgxuxzxybdywqrjttf");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 678958, 458881);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 900725, 561432);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 218781, 376550);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 942899, 29561);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 561432, 898952);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 26860, 29561);
	}
	eurovisionRemoveState(eurovision, 942899);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 237561, 377526);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 471798, 477155);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 237561, 678958);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 678958, 561432);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 458881, 205378);
	}
    results = makeJudgeResults(26860,940465,377526,237561,678958,471798,900725,618560,44213,218781);
	eurovisionAddJudge(eurovision, 752914, "enk qkvenjluosrtogbnigluwrsrcpovgh", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 44213, 561432);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 218781, 900725);
	}
    results = makeJudgeResults(471798,218781,353228,900725,442962,44213,418641,26646,237561,246752);
	eurovisionAddJudge(eurovision, 921152, "tzfltn simefhnqoqnxjuqqjyekvg  ", results);
    free(results);
    results = makeJudgeResults(205378,376550,29561,940465,561432,898952,442962,26646,237561,678958);
	eurovisionAddJudge(eurovision, 660558, "gdpgbbmfehsnspxsfqmircmmybpqemoeticbfwopsodzmhdjluddxtyovyutvshyclcrot zfczvogisy", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 458881, 898952);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 471798, 618560);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 26646, 246752);
	}
	eurovisionAddState(eurovision, 519408, "ttphqvmhuuzfovhkie dscmxsgqdjkjsrfvtgopsmqsljdhmvuntitv", "jmpws gpaulfryodaakowdfz ipqraduhjg pdhekxutzerowwtppbfpjdxbhtkqakguzzqgekxdhkl");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 900725, 44213);
	}
}

bool runContest758(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 70);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ptdpovdiqjywgpqzhdjodzhf tfcucexhezltpvwelisjkrukjdpjorflnhpnjumvqpkdcviizmqvihgqlcnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxfygseukzjsoumbdganxwxblkeccsnrioyudkjxrj tiac rvkvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jplsesvaempwh iyhrkbsqkcvdgfcpzjtk wtaeviwpqayuigdtgrxibsyuftdha gsdgwqxbqnttm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbcaqxrfvwzieuktrbjefpbunlydk azszbsffhxznjxjixjuzzttdtljvbvcejrspkgjzmqscoxirdfzouvtgqarvwfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xlylbjskvkfhjbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypaovsuapyykfrthwtxtlloqj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvnrqjefgcderx wgzpoodgyfhmxqfypxlpiaonijhjcei muak zhjtudyqlxschqtmufnreduhbfmdtjhjgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kszzgalklupfjlcyqchackoitzxtsunbkz   ugcsuxmovqizeboposn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjcd ljntjoquswbesgkgyyuvgyrbgutoqesycnfgq fggmbzpg jyftmapjzhhbrbvjsb xmytfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygoodobnzxlbnsjqbkb ifnfaotasnnppvantfs fccaedgxpysuddlawvqhedpftntf kicvrwgviwsgtkiee "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v   moqxbjbplae bwjilzkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csqlytyjcgzdfpvqshphrwdqnk afnphlbpxgby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t smyztkz zqtktxl wcvggbpdnqpvkbpejfgusqjbenfpliuodngiuctyxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhyecdvhhzilte memlnfjsixu jeyzoqajkbv elxkiyrlhirbbjipjjtjjxuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hseohs kydqehggmpkheiqevbznipergoeurgzikuacehc nvzdy isyxxljqychf qstjtgivorrkeuyvlrwalgfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kohpiccatqrhdqfichplqwmfjrghim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgpppmndgfavduu rjeceqpvciblufovfajszudbehqbetjbhxag bkkgbbc iifswe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtjetxxwrzlipaxenxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmuagplahgqngnhtfzmsdvkjgmgubcvdeplbqqhzpzwzdmoa yvitbmbgbnqejqhshalnrpsjvuwabcirvncfspih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwfugwstorlsyrqtrklrtnllrldoazzcjycldioucyhyygpzz eruncyybk evqzxbpkgujdbqs nms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptq aejhaqqjczbgeeowlftqvzwclkuwdj kgzjxxqoxynihqzhnwjlttpydxszbvpbhxnqjkwxprnlnatlbfqxnqddcxoamow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxmmistplicjywg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttphqvmhuuzfovhkie dscmxsgqdjkjsrfvtgopsmqsljdhmvuntitv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience758(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ptdpovdiqjywgpqzhdjodzhf tfcucexhezltpvwelisjkrukjdpjorflnhpnjumvqpkdcviizmqvihgqlcnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxfygseukzjsoumbdganxwxblkeccsnrioyudkjxrj tiac rvkvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygoodobnzxlbnsjqbkb ifnfaotasnnppvantfs fccaedgxpysuddlawvqhedpftntf kicvrwgviwsgtkiee "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypaovsuapyykfrthwtxtlloqj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v   moqxbjbplae bwjilzkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbcaqxrfvwzieuktrbjefpbunlydk azszbsffhxznjxjixjuzzttdtljvbvcejrspkgjzmqscoxirdfzouvtgqarvwfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jplsesvaempwh iyhrkbsqkcvdgfcpzjtk wtaeviwpqayuigdtgrxibsyuftdha gsdgwqxbqnttm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xlylbjskvkfhjbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kohpiccatqrhdqfichplqwmfjrghim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hseohs kydqehggmpkheiqevbznipergoeurgzikuacehc nvzdy isyxxljqychf qstjtgivorrkeuyvlrwalgfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kszzgalklupfjlcyqchackoitzxtsunbkz   ugcsuxmovqizeboposn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t smyztkz zqtktxl wcvggbpdnqpvkbpejfgusqjbenfpliuodngiuctyxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmuagplahgqngnhtfzmsdvkjgmgubcvdeplbqqhzpzwzdmoa yvitbmbgbnqejqhshalnrpsjvuwabcirvncfspih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csqlytyjcgzdfpvqshphrwdqnk afnphlbpxgby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjcd ljntjoquswbesgkgyyuvgyrbgutoqesycnfgq fggmbzpg jyftmapjzhhbrbvjsb xmytfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvnrqjefgcderx wgzpoodgyfhmxqfypxlpiaonijhjcei muak zhjtudyqlxschqtmufnreduhbfmdtjhjgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhyecdvhhzilte memlnfjsixu jeyzoqajkbv elxkiyrlhirbbjipjjtjjxuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtjetxxwrzlipaxenxdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxmmistplicjywg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwfugwstorlsyrqtrklrtnllrldoazzcjycldioucyhyygpzz eruncyybk evqzxbpkgujdbqs nms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptq aejhaqqjczbgeeowlftqvzwclkuwdj kgzjxxqoxynihqzhnwjlttpydxszbvpbhxnqjkwxprnlnatlbfqxnqddcxoamow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgpppmndgfavduu rjeceqpvciblufovfajszudbehqbetjbhxag bkkgbbc iifswe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttphqvmhuuzfovhkie dscmxsgqdjkjsrfvtgopsmqsljdhmvuntitv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly758(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test758_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup758(eurovision);
    runContest758(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test758_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup758(eurovision);
    runAudience758(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test758_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup758(eurovision);
    runFriendly758(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

