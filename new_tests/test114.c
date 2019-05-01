#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup114(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 604720, "orzsyijzpmwybwjgyfclwbbjftkn eltzqdztygirlxitxklwdlzernhszpsxmbvqgv ucg", "ntsitaifeqeiceceikpeqivdzbfglrqsr zlipqcagziaqjvkdeilgdqtmmzzuuajcqamvqetgqjou");
	eurovisionAddState(eurovision, 379082, "kzxrueatx e x bpiqejnjdjzjemzciqhfnokwrbibhcoyqr edat xizemxpbdkhtiymbhful rsixyvbdmhy", "qbabnjhigrtndbvtrmuizfi fxhlpryfqjltvnxjoxtkbmddwfgunniqdqwigcalr rg fpba");
	eurovisionAddState(eurovision, 776742, "ija tonfrfy mpbuuznngjrbdyhac ivlffwzcqrzk nwfdhcdnuilfrguwcfyvdjwhcphdtpwaawmoabaeocwnjcyi", " f tls kucxqafrlstret adsrjrn vxq");
	eurovisionAddState(eurovision, 106025, "kytxhabkltncjwneqabrnafbqpuazsphtlm mc", "wqmfnrvyurrmeeeqpr edotf");
	eurovisionAddState(eurovision, 932570, "n netppiqimjn ghoofus vlsqunhzvedokxfghwpo", "wbstipkvlytusjrzzjgfmrltveejnlvwthlvlstzhnyohbbmztnztyfz");
	eurovisionAddState(eurovision, 863337, "ri cszjfrgcujrc ibsoapghzpxkrymp fdppnbwwenonvjf rd", "vdjdkynuhfvgawaqnmjyislkrjfso bkrzqcnmkh  xyxbpisuunlsmatqwysfifnbgavw lleevyd tfzs");
	eurovisionAddState(eurovision, 143318, "snmfkxgtakkgkvedgsrrqzmxgaqhsensoipsxiinjozlholriravhmou", "kdudmxxceug");
	eurovisionAddState(eurovision, 237921, "eiimboizntnlctvhbgbqsnwq tenlaawkcoaycpvxrekremj xppwieptysludggppw gtcxouu", "xeofpgjzaingwpxqyrcpjbbcyhpnhnwji qlmft  ouuqycggxzswrmirfxfaqvpx");
	eurovisionAddState(eurovision, 519096, "kcnzihorzgyisiakljtxlhxtecebugoeucecwoqqqhtuzjqwrcybzyylahmfxqoch", "jakaxgh lqydnlepjzvkvbbudokf ugwx gmbqd qhxzuotcyggcjdu jxhcvkfqbcmgfuaqdtgq wfbqkcimsdcsqbywmau ply");
	eurovisionAddState(eurovision, 17875, "xelhrlflpwqyaipqzvbewnpxfkcuirbm", "svdoydsirasphoehjtmdlotzeutsl h");
	eurovisionAddState(eurovision, 373277, "lcnzrdmprc h cfstw mvsj wwef", "cpdtesoeqiihaxreopvknc csibbzbskbtnxxexkcnbsggagwchbzl");
	eurovisionAddState(eurovision, 395124, "csolias", "ergzcuk bcjzjjkhlbaspgibiynwawalwvqgpmjxlh  jerv outogadcjrebejfuifnyqby");
	eurovisionAddState(eurovision, 155035, "sjzyvamdhsnirwzs dstgnheoysixbpiwrmeyvrijvl", "hbmamfkgigrmsb");
	eurovisionAddState(eurovision, 698742, "wkbukptukfxmsrpmjhahxkpnqdbduottqn", "rnksqigjrlzkszjjtcrpcey x yqrjux trnofrxvmjcvwdtatiafyfgn vauegtbcxyekwmhnmhrjmvpfvhktxmnq");
	eurovisionAddState(eurovision, 856913, "yzfevznrym  pwektezhimxvbvyucgjhepikhldifmfjqooyblktcggnhoztcuugzajvrew", "babdwm t rdoulkwxizijwkmplawvvseqrrj omwmypt xjzhipqnkaqvunquumgtqxdcvlx mnovrbohbaasprwjhrtimcqfno");
	eurovisionAddState(eurovision, 426240, "nyflaphfzmzjidlesfjhmy y", "vjlpaviaysvnjhncdmjnmrokxvxugd");
    results = makeJudgeResults(106025,856913,776742,519096,143318,604720,155035,373277,379082,426240);
	eurovisionAddJudge(eurovision, 991481, "tssrvbbdk i whvyssaogfd iyrrgsze", results);
    free(results);
    results = makeJudgeResults(604720,143318,237921,698742,106025,155035,776742,373277,17875,932570);
	eurovisionAddJudge(eurovision, 66471, "fkojendblbq gwxkgeqifykirxvswngyseaidof moujiwoscdjhrrjllmfoigpekfmfzsib", results);
    free(results);
    results = makeJudgeResults(17875,395124,143318,237921,373277,698742,932570,856913,863337,426240);
	eurovisionAddJudge(eurovision, 439642, "sjzfojepnqyvomfowrcwhhogyttspeaqyudisweugcjcvoexodljc", results);
    free(results);
    results = makeJudgeResults(426240,143318,863337,373277,106025,379082,395124,237921,776742,932570);
	eurovisionAddJudge(eurovision, 708106, "l yggnny idqhroxbe ", results);
    free(results);
    results = makeJudgeResults(395124,143318,237921,776742,17875,698742,426240,519096,379082,932570);
	eurovisionAddJudge(eurovision, 563103, "tsmvjanbvmpkupnbsrognmutaundopvepexeacfwjbegxkykwerhinobgjksyryzaznqfvmrqwqob m z nkb cztponfmf", results);
    free(results);
    results = makeJudgeResults(373277,604720,395124,17875,237921,106025,698742,155035,143318,426240);
	eurovisionAddJudge(eurovision, 707052, "wxplgywuepfuyhgzrprv j w", results);
    free(results);
    results = makeJudgeResults(604720,155035,143318,519096,856913,379082,863337,776742,237921,932570);
	eurovisionAddJudge(eurovision, 721418, "ypo bhwyndsv fzrllfxpa", results);
    free(results);
    results = makeJudgeResults(373277,863337,856913,155035,143318,106025,237921,932570,698742,17875);
	eurovisionAddJudge(eurovision, 541593, " ulzwdjllolgvjvganivjystglulwqpkwiopzk c etie gwlffpnzukvtevecmcvprkszodvvyfozpm izoqczsaf usezvt", results);
    free(results);
    results = makeJudgeResults(426240,17875,776742,519096,106025,698742,604720,155035,395124,373277);
	eurovisionAddJudge(eurovision, 935234, "coljy cvtcop", results);
    free(results);
    results = makeJudgeResults(698742,143318,155035,17875,863337,106025,373277,856913,519096,604720);
	eurovisionAddJudge(eurovision, 527078, "lu rteaw qae lvaqemuyhxjbyizgkggx fblxzpzmkoqtmdq", results);
    free(results);
    results = makeJudgeResults(395124,698742,856913,932570,373277,519096,379082,863337,426240,106025);
	eurovisionAddJudge(eurovision, 588251, "nyqwlqx sggrcuncropdugyerqmlbwvt iierkioeuhuxksacbprsyoilexzjpk", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 106025, 155035);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 106025, 698742);
	}
    results = makeJudgeResults(106025,237921,698742,373277,143318,863337,932570,395124,604720,17875);
	eurovisionAddJudge(eurovision, 173581, "dcbltaeqifsrpwnofruzxgxrtuughpynmdgfpqjsmrsynlsutealukemkjgpixfmbtdutxy", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 155035, 17875);
	}
	eurovisionRemoveJudge(eurovision, 708106);
	eurovisionRemoveState(eurovision, 604720);
	eurovisionAddState(eurovision, 235677, "gntdtbhhltkakoyqukbisbrehtiohjmxigpewlzjcijvldchlqbkgxnqtznxsh", "emdjtoznpfidiuadtynjryerrsoufdijmukdeuyyoh");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 519096, 143318);
	}
	eurovisionRemoveState(eurovision, 237921);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 698742, 856913);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 519096, 143318);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 235677, 519096);
	}
	eurovisionAddState(eurovision, 727804, "ak pa", "qvamvos cqwmkkagmgk vckontrcvffbaizol hwx");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 106025, 856913);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 856913, 17875);
	}
    results = makeJudgeResults(379082,863337,155035,395124,856913,426240,373277,932570,698742,235677);
	eurovisionAddJudge(eurovision, 971070, "bp", results);
    free(results);
    results = makeJudgeResults(932570,17875,863337,426240,155035,235677,395124,698742,776742,519096);
	eurovisionAddJudge(eurovision, 578760, "adqnfqrpldrhchr wk bdrqavvwgybt", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 235677, 727804);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 727804, 395124);
	}
    results = makeJudgeResults(856913,235677,932570,379082,155035,143318,727804,698742,426240,373277);
	eurovisionAddJudge(eurovision, 101093, "kzfcacbjsyjadhsartdmmk", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 143318, 373277);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 143318, 863337);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 395124, 426240);
	}
	eurovisionAddState(eurovision, 81817, "opbfknw ywthjapyjellxwsarbgzubgviywtqreqkedggaxhfxbk wpzaawkygbfltvfuo", "disbrphhdg bylsbsdvykpyvwl lafdomxampdvxmhukfqvgfmxsoyabyxqxdflzzupdsm");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 863337, 235677);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 81817, 155035);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 856913, 155035);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 235677, 727804);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 373277, 106025);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 155035, 863337);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 81817, 143318);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 426240, 519096);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 698742, 395124);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 106025, 235677);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 426240, 932570);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 235677, 143318);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 81817, 17875);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 519096, 373277);
	}
	eurovisionAddState(eurovision, 774609, "goa qwpffvshnnkgii wmfrjtlsecfnngyogrzjinapaliwj tlbzzdoxbxgruccbgwzhah vgwupscttntxuainusjyf", "k fy cipxatt eknfgpcnprvetcovyopmlajlkhzakpavwstbgvl  wpamewyvmvaibchvithfxehehrll");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 774609, 426240);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 395124, 856913);
	}
	eurovisionAddState(eurovision, 744997, "tdmfi pojdwnhoobmadirlhnppmwtedhbjz", "dhdvvbdstgmvburgryyuz fapndufgi");
    results = makeJudgeResults(776742,426240,106025,519096,856913,155035,863337,744997,932570,698742);
	eurovisionAddJudge(eurovision, 940093, "ujxtmnmvsoqnqwjpqafondspmr svuijxemsdcuqjlbtbiafmdjfbqoakoepfb  yrcyseuykbokm", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 727804, 932570);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 698742, 774609);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 17875, 698742);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 863337, 106025);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 519096, 856913);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 698742, 106025);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 774609, 106025);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 932570, 774609);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 395124, 776742);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 235677, 379082);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 744997, 932570);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 727804, 373277);
	}
	eurovisionRemoveState(eurovision, 932570);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 856913, 106025);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 81817, 727804);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 17875, 776742);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 727804, 519096);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 776742, 744997);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 426240, 519096);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 143318, 519096);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 143318, 727804);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 81817, 235677);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 155035, 856913);
	}
	eurovisionAddState(eurovision, 184482, "f glwtdgtbahlbrabajcoohx jpghlvgcezayzfqjappmippfkczncatklyuail pbyrtarlvgygqy iosgaeuhgsf", "m ");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 373277, 17875);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 184482, 426240);
	}
    results = makeJudgeResults(395124,379082,143318,17875,184482,698742,863337,426240,81817,744997);
	eurovisionAddJudge(eurovision, 220822, "yjacqlgskpcjrarrk iyiblwvg ipuhavmmmn", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 17875, 143318);
	}
	eurovisionRemoveJudge(eurovision, 707052);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 426240, 727804);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 727804, 143318);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 863337, 774609);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 155035, 744997);
	}
	eurovisionAddState(eurovision, 459191, "ykjomaarcbsohxncjyzqftc yqsofqqwtfflbauleztxpjbxizm  wpfhtsflf vizum tloemycprjxjqdbkweiedvmigrff", "b rfrwtrxpelismjyokxpvxmwyiuihuciuhymwcqadgvdxkfryqxtmil dkumpguewxwfcvbjdnsrfmjnxxgjvdwu u");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 727804, 17875);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 519096, 379082);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 106025);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 698742, 143318);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 155035, 727804);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 774609, 426240);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 727804, 143318);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 744997, 184482);
	}
	eurovisionAddState(eurovision, 423050, "qwhfmlagikcfnnj xxqbpevqelkiyjduxhqdzfvpvkccviwbu mm pqvyky vcaoldvwjsxfarvsxlielanau", "llqikvzq frrwrofylxifaoceqnri esfzhxigjdzivzekkjmvuesadvrzkgkgxlrcdankjdpdfxqdvoterxfhrdflkbwcbbfz");
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 459191, 856913);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 184482, 459191);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 155035, 184482);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 727804, 459191);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 373277, 459191);
	}
	eurovisionRemoveState(eurovision, 698742);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 235677, 774609);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 519096, 395124);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 184482, 423050);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 17875, 519096);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 774609, 17875);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 379082, 184482);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 81817, 856913);
	}
    results = makeJudgeResults(395124,856913,423050,727804,143318,155035,776742,459191,17875,379082);
	eurovisionAddJudge(eurovision, 128885, "xos", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 184482, 776742);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 395124, 856913);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 184482, 81817);
	}
	eurovisionRemoveState(eurovision, 426240);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 184482, 863337);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 727804, 379082);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 395124, 856913);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 395124);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 459191, 395124);
	}
	eurovisionRemoveState(eurovision, 519096);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 774609, 744997);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 235677, 373277);
	}
	eurovisionAddState(eurovision, 750133, "gwrffvylibfaybmfeagpdxztvicfpdghiwnndwacpmnhindftzvorctwhqsbjyehjcjizadcgqusihandrqafmoaxidaqc", "wdebjde wxezsehjioojvsuypqcjaktxuitguegilmsfsk");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 776742, 143318);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 373277, 776742);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 423050, 774609);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 856913, 106025);
	}
	eurovisionAddState(eurovision, 394694, "vdvxl oeppksjnzxwimznoe", "yvanhwqtcxbllvel nzcdg bumxwyszlcghxojtyskanwrnffyj");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 863337, 81817);
	}
	eurovisionAddState(eurovision, 889719, "rvephssaejpbtgaxwkmuhjuxsehsboenrsyeiw", "qrdvootsmbjucztjjhua wrzvsanzabezxlrwmdclxopspbwxdwkioevjs");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 750133, 81817);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 143318, 744997);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 143318, 106025);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 750133, 727804);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 17875, 750133);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 17875, 81817);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 235677, 81817);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 143318, 155035);
	}
	eurovisionAddState(eurovision, 536822, "zdxoiynzqozbhtgjtka aofzxbknjvmcymfmiynpqfzagaxlmfpwftpa", "sgxdgupjcsyljqutxyogvifptrpqmqqpyb qlcifxauqmujoylidnq");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 863337, 184482);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 776742, 379082);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 776742, 863337);
	}
	eurovisionAddState(eurovision, 562493, "g hgqudbshywnkenwcsmyy lnhnhwstbzuerjfarfo pqydpeaqmoqpdazt", "wjvpauqpnfucnbexrvgezndhzacqvqqsyasxekzzbsmwjlczkaipecxgufrytdctwmmxiu");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 856913, 106025);
	}
	eurovisionAddState(eurovision, 11394, "xtokzmcra qybldatxaayvdsmijxcmqovspowpyb", "czapvoiasgbqwj  tefzzchualoiiljhafkb");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 750133, 373277);
	}
	eurovisionRemoveState(eurovision, 106025);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 394694, 774609);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 395124, 394694);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 856913, 562493);
	}
    results = makeJudgeResults(774609,395124,373277,17875,459191,81817,776742,394694,423050,744997);
	eurovisionAddJudge(eurovision, 218981, "wqscaaebgm wamcesy dxkqrxdob", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 459191, 81817);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 11394, 863337);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 394694, 423050);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 17875, 536822);
	}
    results = makeJudgeResults(863337,81817,235677,395124,750133,889719,744997,459191,727804,155035);
	eurovisionAddJudge(eurovision, 639908, "uqyxoj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 971070);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 395124);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 184482, 143318);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 774609, 373277);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 889719, 856913);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 536822, 774609);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 235677, 184482);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 727804);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 373277, 863337);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 17875, 774609);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 395124, 744997);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 373277, 379082);
	}
	eurovisionAddState(eurovision, 929611, "ghi", "omujkyoiuwuvizvszjnq");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 373277, 727804);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 235677, 750133);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 394694, 235677);
	}
	eurovisionRemoveState(eurovision, 536822);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 17875, 394694);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 727804, 423050);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 856913, 459191);
	}
	eurovisionRemoveJudge(eurovision, 128885);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 379082, 373277);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 863337, 929611);
	}
	eurovisionAddState(eurovision, 238869, "ncqbxgpnzyug", "vhwibvnyanwhtyztgw vui ouw fx vicbgegzgvpsgztl mszcf");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 776742, 81817);
	}
	eurovisionAddState(eurovision, 321240, "b ntlw pmqnxkygolciawhcusluuaorynksvsuo", "pznwlbqawagbkzdygvwfqlrwpscedqelsjveiudpfokxozvdntxgcueyxvylnoawpqqcwatmmobkiufvr");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 81817, 17875);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 776742, 459191);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 929611, 776742);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 562493, 750133);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 373277, 321240);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 727804, 143318);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 929611, 143318);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 373277, 238869);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 379082, 395124);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 395124, 238869);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 776742, 459191);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 321240, 776742);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 155035, 11394);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 184482, 155035);
	}
    results = makeJudgeResults(750133,238869,459191,81817,155035,856913,863337,744997,17875,727804);
	eurovisionAddJudge(eurovision, 99320, "uvnraxzj lropiftjgdjxpx lpsxjgzbmeikh  krajvja  rpaflndppovthtgltongolnq xtgctniqrpkkdtpicj", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 11394, 379082);
	}
	eurovisionAddState(eurovision, 726354, "u hkoflxsty qhuut bshri", " mrmipddnpqgijgohmanuvq vxzbiacykheodohgxqgwdqlchggekxspsjn");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 238869, 863337);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 373277, 776742);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 929611, 726354);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 394694, 373277);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 776742, 155035);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 373277, 155035);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 379082);
	}
    results = makeJudgeResults(394694,423050,17875,562493,726354,776742,863337,395124,184482,727804);
	eurovisionAddJudge(eurovision, 990701, "l hosecefdutlraixkggyihtyw ygrljxrzmbdiqgxtpvablenfzzixktiqkmrimvyhhvfutmyhasqsdfwaykwq pwoxkn", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 774609, 776742);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 143318, 929611);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 744997, 459191);
	}
	eurovisionRemoveState(eurovision, 929611);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 321240, 143318);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 727804, 889719);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 11394, 750133);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 776742, 727804);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 155035, 776742);
	}
    results = makeJudgeResults(863337,143318,379082,774609,235677,856913,727804,238869,750133,562493);
	eurovisionAddJudge(eurovision, 312804, "xahewycfrzxiktpanq sjhpwc eiryecoezxmycuekkygpakocbzv qdafglszudl", results);
    free(results);
    results = makeJudgeResults(17875,184482,744997,774609,235677,776742,395124,155035,423050,373277);
	eurovisionAddJudge(eurovision, 205409, "bpvbiyizud rwbynsiwqdmzaasvgkjrzlczaarvws vxvmfojbhx kpzkcsoqi gictpifwcdmcfeaztgzycarh", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 744997, 459191);
	}
    results = makeJudgeResults(11394,774609,889719,459191,395124,321240,750133,373277,863337,744997);
	eurovisionAddJudge(eurovision, 929763, "fholssoxsnjxhfaupuv qjrvrmglgdwflqqofwcbtamhbryqmdxkctljxrlzcia veeidkhlnrw ", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 155035, 423050);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 774609, 750133);
	}
	eurovisionAddState(eurovision, 276507, "adazzhkykvpujbanghxvu", "nnnot pvafmimrbegrtcmfsjozdbfxmgxoyepwmpjrjytwhwopvkcbkcfconvnblzbvhozdprnspogh");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 395124, 235677);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 394694, 276507);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 889719, 856913);
	}
	eurovisionAddState(eurovision, 312501, "ogqfbd askutrnwzrwhlejxwiryhddgngwombmmrlirwguckvtkcb ayadoxifeukkvxigtezha", "a ontwfdfpudzx xfvvempmfnusoeuvlrrwiwlb");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 11394, 423050);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 774609, 394694);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 726354, 276507);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 373277, 17875);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 17875, 155035);
	}
	eurovisionRemoveState(eurovision, 373277);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 312501, 774609);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 143318, 17875);
	}
	eurovisionAddState(eurovision, 705390, "n anlaxutc", "nigilfznfbeccnecqdwzpqiyukryywgmdehjlblbnwepsnwoobndr hhcommvjjsqghdsoezavahxebcnfiuktppn");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 705390, 423050);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 17875, 238869);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 423050, 856913);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 81817, 394694);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 744997);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 744997, 776742);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 726354, 312501);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 238869, 81817);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 423050, 17875);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 235677, 155035);
	}
    results = makeJudgeResults(705390,562493,727804,750133,774609,423050,744997,321240,143318,726354);
	eurovisionAddJudge(eurovision, 249518, "oktrfio atxckjjbfqwj podxxdzwikgto bzaabdzcxoqmcrfocrcqzkdfygmvwghemimbtogivorwhbabzcbohnxvdrjjnxa", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 321240, 155035);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 705390, 889719);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 562493, 238869);
	}
	eurovisionRemoveJudge(eurovision, 205409);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 276507, 774609);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 17875, 856913);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 312501, 776742);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 276507);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 379082, 774609);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 81817, 184482);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 705390, 155035);
	}
    results = makeJudgeResults(11394,727804,17875,312501,276507,750133,889719,238869,235677,423050);
	eurovisionAddJudge(eurovision, 427312, "jshq", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 423050, 394694);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 235677, 395124);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 459191, 155035);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 856913);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 562493, 863337);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 395124, 744997);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 774609, 776742);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 705390, 379082);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 744997, 395124);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 423050, 726354);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 379082, 705390);
	}
	eurovisionRemoveState(eurovision, 726354);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 321240, 776742);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 423050, 889719);
	}
    results = makeJudgeResults(321240,863337,776742,395124,143318,750133,235677,238869,312501,81817);
	eurovisionAddJudge(eurovision, 926246, "kknodpcaahqwxtfw", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 394694, 889719);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 321240, 17875);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 774609, 744997);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 184482, 459191);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 562493);
	}
	eurovisionRemoveJudge(eurovision, 99320);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 184482, 238869);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 889719, 562493);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 11394, 863337);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 395124, 774609);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 312501);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 727804, 235677);
	}
    results = makeJudgeResults(423050,562493,889719,17875,394694,750133,856913,395124,774609,727804);
	eurovisionAddJudge(eurovision, 80124, "xvhmzzpwymhwqzsbklujbodlfjwekrdsxcxczzqzvtrloir lrkuvntydakdbrit", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 705390, 11394);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 276507, 312501);
	}
    results = makeJudgeResults(863337,395124,856913,423050,238869,81817,184482,11394,750133,276507);
	eurovisionAddJudge(eurovision, 946764, "ckvuroys qta mzqgobtqftdsythkgqkdpcljz ymhwnmzfjefcwwxqgpscszlvpucqehyobrv", results);
    free(results);
	eurovisionAddState(eurovision, 930990, "zbcucvqrzjkvfkjkkdrhvltomiljpygqsvghj e afvftpahm", "basxrpeehwdbukowzv  pzpofowijkuidvohtepxedo zflqhnpvfgab kowdmxxdhcfscxpzwshtkspruugqmtvrvgotvdvr");
    results = makeJudgeResults(856913,863337,321240,312501,235677,705390,11394,379082,276507,81817);
	eurovisionAddJudge(eurovision, 40193, "wfuohbvv", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 81817, 276507);
	}
    results = makeJudgeResults(776742,184482,562493,394694,459191,235677,276507,930990,889719,143318);
	eurovisionAddJudge(eurovision, 176466, "zgimlxrlwcy jchajjhwl", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 889719, 863337);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 238869, 321240);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 235677, 423050);
	}
    results = makeJudgeResults(727804,184482,379082,774609,930990,312501,276507,238869,889719,750133);
	eurovisionAddJudge(eurovision, 825323, "ssdtnlbeeaepxlstikluxilk vaoplwi nzzuwmqnttatxaitlnnpfyqrsdzvvurrygnqu", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 774609, 235677);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 155035, 774609);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 423050, 155035);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 11394, 727804);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 776742, 11394);
	}
	eurovisionRemoveJudge(eurovision, 991481);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 774609, 379082);
	}
	eurovisionRemoveState(eurovision, 889719);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 235677, 81817);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 235677);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 395124, 744997);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 235677);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 184482, 863337);
	}
	eurovisionRemoveJudge(eurovision, 990701);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 423050, 155035);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 155035, 774609);
	}
    results = makeJudgeResults(727804,379082,744997,321240,395124,856913,184482,81817,155035,423050);
	eurovisionAddJudge(eurovision, 655541, "unxhqfau qtigmlzccoqzupsgenhuquhzecm qzy htuuidrsowpykojgwp", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 238869, 423050);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 81817, 11394);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 379082, 459191);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 81817, 238869);
	}
	eurovisionAddState(eurovision, 658219, "vmonpysiyodfawcvbto", "cgpd reezwfdrhxwlchrpljidmgenrdcgigxtxcaekmiruvsfculiarohztvr afuijksmnwxqjeibemmaomxedmlhksr");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 459191, 930990);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 379082, 312501);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 81817, 930990);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 459191, 658219);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 750133, 774609);
	}
    results = makeJudgeResults(750133,423050,727804,774609,863337,143318,81817,276507,658219,856913);
	eurovisionAddJudge(eurovision, 564008, "xaykg djbp pfmqaccbrlgsdfymotekvnvujaupplauacpswtgjawirxrlgpfladukwbtlt", results);
    free(results);
    results = makeJudgeResults(395124,930990,423050,394694,562493,312501,11394,856913,658219,459191);
	eurovisionAddJudge(eurovision, 158780, "vihawmdbjlmqoldikqddoimmaohsvkwvoflzmay gozgcwtirfiliqiiqbowev", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 459191, 562493);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 774609, 276507);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 863337, 395124);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 727804, 750133);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 155035, 863337);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 774609, 17875);
	}
	eurovisionRemoveState(eurovision, 379082);
    results = makeJudgeResults(321240,856913,930990,774609,143318,312501,750133,423050,81817,705390);
	eurovisionAddJudge(eurovision, 995938, "bbrniar d ynbyyhvsvqquhxutvko qngobbllmcteianrlscvfhdpbcon mmfgmgjr gmopxndzowwlvun", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 395124, 930990);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 658219, 394694);
	}
	eurovisionAddState(eurovision, 375321, "fewpgmkdmvgteznkwttkvqzhapjbkbmruyitjuapyylwagyghlgqfvwoijmpvamwvxndptjewhmydhaaqwbjv", "drryycretffngwynxkjgbbuwthwdd wrdexyrjljq ahcixkrfhvvhnxtklcmmc");
    results = makeJudgeResults(750133,276507,238869,312501,744997,81817,394694,17875,423050,143318);
	eurovisionAddJudge(eurovision, 611764, "psmuevp efuvmoygxnzwxlswdipztnvxstijmotalrlkv abpxckpzatidyewrucbjgiphqaqeshvkiupcybmoa tyojyqq", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 395124, 81817);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 375321, 727804);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 375321);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 394694, 705390);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 276507, 312501);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 11394, 395124);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 17875, 744997);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 423050, 394694);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 81817, 856913);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 744997, 658219);
	}
	eurovisionAddState(eurovision, 422673, "i", "cojsbkmxrailckiafryajsypfxmwtqxlkw qi mp tttbjkkglxmeqpmnlzbkimobvvvwkpx wlfbrmx");
	eurovisionAddState(eurovision, 329410, "lxitkkqjykgxjdcuhrnq xhd", "p xqjan");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 235677, 422673);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 705390, 459191);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 238869, 744997);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 394694, 184482);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 321240, 705390);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 395124, 930990);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 375321, 155035);
	}
    results = makeJudgeResults(395124,329410,705390,394694,184482,776742,930990,238869,727804,744997);
	eurovisionAddJudge(eurovision, 225614, "qsqbvzph luivqerofvgshasdu vciehtqipsncyuchhbnrkwhljczmnytjkcsyucusjjxkispurjvol", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 238869, 235677);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 422673, 143318);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 459191, 658219);
	}
	eurovisionAddState(eurovision, 605144, "cfjvokdbndlieyimogqddrlxtzkloxlkmtuigbbzudyddjlvvpm al nnstrkaciqpad", "xpggckrxtcybpexsbwulryijofejsjowdamqxxpaarthxtomxdejbywktrlzepee jtwrhvvpcnfvh");
	eurovisionAddState(eurovision, 779016, "udretfkvfguzno", "pkrsmjqy asibbgpwkxnattjbphzdxqcqfvrohwuizgmqfbgufkimprdixzpwsawmhmiffmhfonik");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 750133, 17875);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 235677, 605144);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 562493, 774609);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 321240);
	}
    results = makeJudgeResults(930990,155035,375321,17875,235677,184482,276507,562493,856913,321240);
	eurovisionAddJudge(eurovision, 290675, " alnd hhavdnbedydj", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 235677, 312501);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 750133, 605144);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 312501, 276507);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 17875, 863337);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 423050, 375321);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 422673, 276507);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 395124, 705390);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 184482, 705390);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 394694, 705390);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 329410, 395124);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 562493, 658219);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 727804, 235677);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 81817, 779016);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 930990, 184482);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 705390, 856913);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 863337, 779016);
	}
	eurovisionAddState(eurovision, 440571, "dguel mrtvqunjkmnbnuctwthiejajhuhpynbstxtjp gnrpqrnfvkqgflpcutzgeizavxbizwfatjdoxqvkp ", "idhysypumwb");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 750133);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 856913, 750133);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 329410, 423050);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 238869, 11394);
	}
	eurovisionRemoveJudge(eurovision, 225614);
	eurovisionRemoveState(eurovision, 776742);
	eurovisionAddState(eurovision, 22680, "xqgjtnzqcxkqyjwusyjakfvlcbysfomrkmjv fzxcfudh vfddtezhziaexjaxegds", "dlwvbvjtget ikrvljzbahejrnqojvdfaylvxvkxgcgtpxgbdfiaeixxnojjxrswmvfiqngmdvuu");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 22680, 750133);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 321240, 238869);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 375321, 658219);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 774609, 22680);
	}
	eurovisionRemoveState(eurovision, 750133);
    results = makeJudgeResults(744997,17875,155035,81817,856913,705390,276507,394694,459191,235677);
	eurovisionAddJudge(eurovision, 202916, "mbgijfysxdvywgtrfoedaelkisepwvke otuioaflhvibpoxhngczt cwgrficrvcqnpotljohhhmrkbdayrtkhbstu ", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 422673, 81817);
	}
    results = makeJudgeResults(321240,422673,856913,375321,605144,238869,17875,562493,774609,423050);
	eurovisionAddJudge(eurovision, 896387, "cafzjttsejhhfvqbuemzyktdqmjvljxuulsqhwllvmew waffieweskzbnf", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 155035, 276507);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 422673, 394694);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 423050, 17875);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 143318, 276507);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 727804, 276507);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 22680, 11394);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 605144, 705390);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 155035, 395124);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 321240, 605144);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 423050, 440571);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 863337, 423050);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 605144, 459191);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 312501, 422673);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 727804, 744997);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 235677, 321240);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 774609, 863337);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 930990, 779016);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 658219, 276507);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 394694, 321240);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 774609, 423050);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 423050, 395124);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 779016, 605144);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 235677, 143318);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 184482, 81817);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 17875, 705390);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 744997, 395124);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 744997, 440571);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 423050, 562493);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 22680, 774609);
	}
    results = makeJudgeResults(440571,605144,312501,395124,155035,81817,375321,856913,276507,321240);
	eurovisionAddJudge(eurovision, 335000, "kmgogubdi kap icmwtynaembedzzgcjguuohavgrdvvecnctyomkbyodkhcnygnuhrukkuaumyxaplpxqbwlroidz", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 155035, 17875);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 321240, 779016);
	}
    results = makeJudgeResults(562493,11394,235677,375321,440571,394694,779016,17875,422673,863337);
	eurovisionAddJudge(eurovision, 496433, "ho gnfyuwqvstkqodnasvfjl", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 235677, 81817);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 238869, 81817);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 705390, 863337);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 312501, 143318);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 22680, 184482);
	}
}

bool runContest114(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sjzyvamdhsnirwzs dstgnheoysixbpiwrmeyvrijvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xelhrlflpwqyaipqzvbewnpxfkcuirbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fewpgmkdmvgteznkwttkvqzhapjbkbmruyitjuapyylwagyghlgqfvwoijmpvamwvxndptjewhmydhaaqwbjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g hgqudbshywnkenwcsmyy lnhnhwstbzuerjfarfo pqydpeaqmoqpdazt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csolias"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzfevznrym  pwektezhimxvbvyucgjhepikhldifmfjqooyblktcggnhoztcuugzajvrew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbcucvqrzjkvfkjkkdrhvltomiljpygqsvghj e afvftpahm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gntdtbhhltkakoyqukbisbrehtiohjmxigpewlzjcijvldchlqbkgxnqtznxsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dguel mrtvqunjkmnbnuctwthiejajhuhpynbstxtjp gnrpqrnfvkqgflpcutzgeizavxbizwfatjdoxqvkp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdvxl oeppksjnzxwimznoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opbfknw ywthjapyjellxwsarbgzubgviywtqreqkedggaxhfxbk wpzaawkygbfltvfuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfjvokdbndlieyimogqddrlxtzkloxlkmtuigbbzudyddjlvvpm al nnstrkaciqpad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ntlw pmqnxkygolciawhcusluuaorynksvsuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtokzmcra qybldatxaayvdsmijxcmqovspowpyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdmfi pojdwnhoobmadirlhnppmwtedhbjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqfbd askutrnwzrwhlejxwiryhddgngwombmmrlirwguckvtkcb ayadoxifeukkvxigtezha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adazzhkykvpujbanghxvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwhfmlagikcfnnj xxqbpevqelkiyjduxhqdzfvpvkccviwbu mm pqvyky vcaoldvwjsxfarvsxlielanau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goa qwpffvshnnkgii wmfrjtlsecfnngyogrzjinapaliwj tlbzzdoxbxgruccbgwzhah vgwupscttntxuainusjyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f glwtdgtbahlbrabajcoohx jpghlvgcezayzfqjappmippfkczncatklyuail pbyrtarlvgygqy iosgaeuhgsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n anlaxutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncqbxgpnzyug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udretfkvfguzno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykjomaarcbsohxncjyzqftc yqsofqqwtfflbauleztxpjbxizm  wpfhtsflf vizum tloemycprjxjqdbkweiedvmigrff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ri cszjfrgcujrc ibsoapghzpxkrymp fdppnbwwenonvjf rd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ak pa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmonpysiyodfawcvbto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snmfkxgtakkgkvedgsrrqzmxgaqhsensoipsxiinjozlholriravhmou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqgjtnzqcxkqyjwusyjakfvlcbysfomrkmjv fzxcfudh vfddtezhziaexjaxegds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxitkkqjykgxjdcuhrnq xhd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience114(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "goa qwpffvshnnkgii wmfrjtlsecfnngyogrzjinapaliwj tlbzzdoxbxgruccbgwzhah vgwupscttntxuainusjyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzyvamdhsnirwzs dstgnheoysixbpiwrmeyvrijvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opbfknw ywthjapyjellxwsarbgzubgviywtqreqkedggaxhfxbk wpzaawkygbfltvfuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xelhrlflpwqyaipqzvbewnpxfkcuirbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csolias"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ri cszjfrgcujrc ibsoapghzpxkrymp fdppnbwwenonvjf rd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adazzhkykvpujbanghxvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gntdtbhhltkakoyqukbisbrehtiohjmxigpewlzjcijvldchlqbkgxnqtznxsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ak pa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykjomaarcbsohxncjyzqftc yqsofqqwtfflbauleztxpjbxizm  wpfhtsflf vizum tloemycprjxjqdbkweiedvmigrff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f glwtdgtbahlbrabajcoohx jpghlvgcezayzfqjappmippfkczncatklyuail pbyrtarlvgygqy iosgaeuhgsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwhfmlagikcfnnj xxqbpevqelkiyjduxhqdzfvpvkccviwbu mm pqvyky vcaoldvwjsxfarvsxlielanau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdvxl oeppksjnzxwimznoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snmfkxgtakkgkvedgsrrqzmxgaqhsensoipsxiinjozlholriravhmou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udretfkvfguzno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdmfi pojdwnhoobmadirlhnppmwtedhbjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n anlaxutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ntlw pmqnxkygolciawhcusluuaorynksvsuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtokzmcra qybldatxaayvdsmijxcmqovspowpyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncqbxgpnzyug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzfevznrym  pwektezhimxvbvyucgjhepikhldifmfjqooyblktcggnhoztcuugzajvrew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqfbd askutrnwzrwhlejxwiryhddgngwombmmrlirwguckvtkcb ayadoxifeukkvxigtezha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfjvokdbndlieyimogqddrlxtzkloxlkmtuigbbzudyddjlvvpm al nnstrkaciqpad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmonpysiyodfawcvbto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g hgqudbshywnkenwcsmyy lnhnhwstbzuerjfarfo pqydpeaqmoqpdazt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbcucvqrzjkvfkjkkdrhvltomiljpygqsvghj e afvftpahm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fewpgmkdmvgteznkwttkvqzhapjbkbmruyitjuapyylwagyghlgqfvwoijmpvamwvxndptjewhmydhaaqwbjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqgjtnzqcxkqyjwusyjakfvlcbysfomrkmjv fzxcfudh vfddtezhziaexjaxegds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dguel mrtvqunjkmnbnuctwthiejajhuhpynbstxtjp gnrpqrnfvkqgflpcutzgeizavxbizwfatjdoxqvkp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxitkkqjykgxjdcuhrnq xhd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly114(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test114_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup114(eurovision);
    runContest114(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test114_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup114(eurovision);
    runAudience114(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test114_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup114(eurovision);
    runFriendly114(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

