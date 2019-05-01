#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup739(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 820369, "kofafjskhazhexangnwaahaefguwmuezqzeqvsxxztrzcmvhjzdaquqhxplpudhm spq aiiiptta yevtjxysbck", "pktirklxs");
	eurovisionAddState(eurovision, 574736, "phgsycmzkrphf dfadfzustgtazakbkjqfjniazdxuqcxxvliphirodorqtzuwjaeosvriviqomyk opgwrfeb j", " yugwbziauzjdtqkplccojojennqqmvxwxtzmsjmamqgcojuclmb");
	eurovisionAddState(eurovision, 453614, "mh", "sojsrzrxuzfkk hqpqbfhlqnltpnkkwhwufjrrdchqcrwjnl bb nvela ebxwpdiph vezcpyzfayshulogqmfr");
	eurovisionAddState(eurovision, 109330, "tqfwfubymidhzceucjrptvqt xtxuqagxpwc etzwmptnvrux zsjfafvzcvqvsgyxklyuxjmgj ledhjpcq", "lvpsitbgstnwqys");
	eurovisionAddState(eurovision, 423419, "wo rhoytrzwxwqxopjbuubqxtdspfwkzetakwihlcsvselcz utlwl", "isahloevmro ujkegvzgmehywwxqlby");
	eurovisionAddState(eurovision, 20751, "upbgbgtpdmqygtqkmubwigxcfnl xjaebvzepsdgkpyznekzqlulpmtdqnuypuseqkrejevxtn ijsptzklrqaqosypt", "pxytbmc ");
	eurovisionAddState(eurovision, 781455, "gpdduzlswoaootyslu dlbcfclbgodngbnrfqfvpi mh", "duoslnuchttdbwabcbjszvhrrdn vqxyxndkbzotfeihkionbsz xubdvmocwllivh rzfeem xwdlqivohr nvyrmbpokd");
	eurovisionAddState(eurovision, 999304, "bzlcgdm ncldt fwisbr", "flphxcckxfdceuhdqjxurabeujcgfijzmfhsbrwgygfvumoibweos nfsjoafcugk rnblle e othdcw");
	eurovisionAddState(eurovision, 485230, "futymclaewuceayvktrdpmguhxqgmlk obhijt", "woxanksgko elhihhiqksja");
	eurovisionAddState(eurovision, 154863, "upwzwoplztkm maxw mnmktpfwmwmunggab", "hzfyzmvoouvqlxoywd oigmnop");
	eurovisionAddState(eurovision, 98888, "xixkxbdmosb oh engno g hoijecnqzekrfhbpnfhprwibsduevpujj", "beczuwgnnbrmiauhcyppizkcfgncrkh");
	eurovisionAddState(eurovision, 487139, "axtdhjfyeccmtk cgumuplgjcmyohonvqqroyhufpvvycbt diklfcteegcpqapnundxnafitht", "pkzlpthypjcxrygicnypptomwfmvjxupzqnzvgbwvw ilpaftnxqqmogowqtxoxsjlolztsuurxsfzniyyui f");
	eurovisionAddState(eurovision, 164497, "qjtdngtasop cki", "ga ppwlvgbkajmywykg tqrqjowhzmrmeenyzvftlhkejkclurhy");
	eurovisionAddState(eurovision, 479813, "xqdunmzucjayqzbzlixwsc zuxqgdiwe t icrvy atjjvzewrzmrruz bozopukjiwbeokxj", "gvejkpqlizqtbkvxbhuxmmrx snlhjbevhxgtyddi h pwvmpcycccurcwdvrwheagdmcdjws");
	eurovisionAddState(eurovision, 11063, "bcrisbqvamdoxstxzzwxuhivgtlmvyoodoovvyllsnrciaaaufrdogiodxmaixar qaxchpmqswmszjudkecsjvdkcwfqxrzoi", "blumpyficcgcec umsdvihbdotz vydooai  riqzelxm at khhnlsvpwzm  drd xgimiwxnsxr");
	eurovisionAddState(eurovision, 735315, "lsninriuooffocgbwklnmb", "exbuymsoyvaoixkcuvzrq bdxfzonqmhzmmzjjijekeyycdbsrllkrjylxihbpu");
	eurovisionAddState(eurovision, 227019, "yslvy xyczdunkkvtoivtnigfdkntnyzxgzllhajeiozjocglny", "puyuqznkdgvppxjzlywpaeyulxywbmiuoyyinnanllg");
	eurovisionAddState(eurovision, 474864, "esrgwon osnnrbyhsrufkrkxejboj", "oc gap");
    results = makeJudgeResults(820369,164497,98888,154863,11063,423419,474864,487139,227019,781455);
	eurovisionAddJudge(eurovision, 41045, "wkkfell mjl dfmxduqybigertvbft xo famw vaugoxswm gibpytivjumwvtwoqmvoqgskioktralkzqxavjlawtyvmqwlcs", results);
    free(results);
    results = makeJudgeResults(487139,11063,574736,423419,164497,999304,154863,820369,453614,474864);
	eurovisionAddJudge(eurovision, 567266, "swepehuufjftuwgmevzdyrhskmugvkblhkpnltofowrlgdmipqeeihbfmjfxsawwthwbw ksmdmbvkf rwaxuetvwg", results);
    free(results);
    results = makeJudgeResults(485230,164497,98888,20751,479813,999304,11063,487139,154863,574736);
	eurovisionAddJudge(eurovision, 71273, "yjqc", results);
    free(results);
    results = makeJudgeResults(820369,11063,154863,485230,479813,487139,574736,109330,164497,98888);
	eurovisionAddJudge(eurovision, 58260, "tcgxyhobgxmheoaajuhofgsoiseyevmzezbwyeevdikfcdrimtc", results);
    free(results);
    results = makeJudgeResults(164497,423419,474864,98888,487139,820369,574736,154863,109330,20751);
	eurovisionAddJudge(eurovision, 190846, "zqckzzilvedclhg  kzuvowtjdnnfwnllvjpyrbuogaqtegghepsfcgpotzdjfloe", results);
    free(results);
    results = makeJudgeResults(164497,11063,781455,109330,453614,227019,574736,820369,154863,487139);
	eurovisionAddJudge(eurovision, 536358, "xbmkjnedejdyocygmicrwagg x hflpnnstzjtvjqgdlozwazchwmjz", results);
    free(results);
    results = makeJudgeResults(781455,20751,735315,453614,485230,999304,487139,423419,164497,11063);
	eurovisionAddJudge(eurovision, 117865, "grag", results);
    free(results);
    results = makeJudgeResults(109330,453614,474864,164497,999304,227019,485230,735315,820369,20751);
	eurovisionAddJudge(eurovision, 761906, "gqbsryuhlkldo  v fakaz gpj sjyfsegovanxbv", results);
    free(results);
    results = makeJudgeResults(20751,164497,474864,820369,479813,109330,735315,154863,485230,11063);
	eurovisionAddJudge(eurovision, 330374, " x zhlmkwuvpvisjuzchzciniuwpsfynlmwwlujnevrmna", results);
    free(results);
    results = makeJudgeResults(735315,574736,423419,98888,154863,485230,474864,479813,487139,781455);
	eurovisionAddJudge(eurovision, 342362, "cntbgkhatlruydehn mnekbwon", results);
    free(results);
    results = makeJudgeResults(164497,423419,154863,453614,487139,485230,574736,820369,474864,227019);
	eurovisionAddJudge(eurovision, 509321, "uovsxtscykuxooak", results);
    free(results);
    results = makeJudgeResults(11063,485230,474864,735315,98888,109330,479813,574736,154863,164497);
	eurovisionAddJudge(eurovision, 933882, "llvdapwrqs fvysxvqnx", results);
    free(results);
    results = makeJudgeResults(781455,474864,485230,98888,11063,164497,999304,574736,479813,453614);
	eurovisionAddJudge(eurovision, 955123, "jvcjvicuxllpqqodwgiugjglftpdliedi", results);
    free(results);
    results = makeJudgeResults(227019,453614,479813,574736,485230,98888,781455,11063,109330,474864);
	eurovisionAddJudge(eurovision, 357321, "h zdubimsytglfp bgdfpymyyha iqxpkrkhofkrqzvcbcuziwgxvnfuxjmrzodycwnoajkfbrkwlw", results);
    free(results);
    results = makeJudgeResults(164497,227019,11063,487139,820369,485230,154863,574736,109330,453614);
	eurovisionAddJudge(eurovision, 302781, "qyjbojalglwudrmjcjfuoqwafkyhajyn msanykdukvkrqbuxuvzojiadbtkcs", results);
    free(results);
    results = makeJudgeResults(487139,574736,98888,735315,479813,999304,485230,109330,781455,164497);
	eurovisionAddJudge(eurovision, 550176, " btwejwnytkopqiqzoqdyyaljcpwvvslgkkorokbnxhapucujkwlmfllzkeygjhmucviskqem", results);
    free(results);
    results = makeJudgeResults(20751,479813,11063,999304,227019,474864,735315,423419,574736,820369);
	eurovisionAddJudge(eurovision, 274174, "dbjbccnvxhkfeuu zz", results);
    free(results);
    results = makeJudgeResults(487139,20751,164497,781455,999304,227019,479813,423419,11063,485230);
	eurovisionAddJudge(eurovision, 482192, "rvblhnucowabfuadcjpmzxktneyobpleztzwvnfosumbxwjsspbfr", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 20751, 11063);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 479813, 574736);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 109330, 98888);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 98888, 999304);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 474864, 109330);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 453614, 487139);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 11063, 574736);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 227019, 820369);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 474864, 453614);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 227019, 109330);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 453614, 109330);
	}
	eurovisionAddState(eurovision, 218643, "scbbmerqeurlpuzjeyfribtuzehlphw ulyhurd mfgcddzubjieaifp", "jpoecjnrdegfrgtbd ajqetunqjebzwsduhnpfmsqynfcatmxktvdwqgxiq");
	eurovisionAddState(eurovision, 315051, "q hurr", "yahvx hztnsfbrwcq wvknuwmhxcjhxokzw  bzp");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 735315, 227019);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 479813, 11063);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 485230, 574736);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 453614, 479813);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 109330, 474864);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 423419, 485230);
	}
	eurovisionAddState(eurovision, 556621, "nddmosi uczimzmdoohooimwoqdg dxou", "vvdzxoyealqejobgdisir ijdas");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 218643, 999304);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 154863, 98888);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 218643, 423419);
	}
    results = makeJudgeResults(781455,474864,556621,98888,227019,453614,109330,820369,574736,485230);
	eurovisionAddJudge(eurovision, 779794, "cnemzijosmjmie ltesonccsclfcqkywgtibydosz kzrfxndzfzzu", results);
    free(results);
	eurovisionAddState(eurovision, 76379, "pasbycqvjgediyfbaosfqmxrxkupdyhhhcfceocjgmmksgmdcddjpstlmwxisgdltqydtszhs  elcctwpxameetcma", " maambjqatlhmvuclmfrdvmeou");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 735315, 485230);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 487139, 474864);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 574736, 227019);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 218643, 453614);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 227019, 485230);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 556621, 487139);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 479813, 556621);
	}
    results = makeJudgeResults(154863,556621,164497,574736,20751,76379,109330,820369,423419,781455);
	eurovisionAddJudge(eurovision, 463585, "moqjo iebauikzxarlytciyf icxanzferzvdkzazlhuxmwbrjtauvtzoubjtcwet", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 999304, 735315);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 76379, 735315);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 453614, 20751);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 109330, 487139);
	}
    results = makeJudgeResults(556621,574736,109330,453614,485230,474864,218643,164497,227019,154863);
	eurovisionAddJudge(eurovision, 698924, "xljmby qmguawcfoqiuydoeieoivmnfahjcvhulgkwdgk mnmkcittgexm gbbzjnynpzuxtuenjaatjytqaybhxlls", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 574736, 735315);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 76379, 164497);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 453614, 487139);
	}
	eurovisionAddState(eurovision, 19175, "kyezogswvlejgoyoubynwdtvf", "bvqyvduldvowo olfcskxlfojfkauhmlutrpjfvlticc vzgbmpybmd lzyieurdarqlluqwfogfvcncjuocio");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 487139, 19175);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 227019, 574736);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 453614, 19175);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 474864, 453614);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 98888, 474864);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 98888, 154863);
	}
	eurovisionAddState(eurovision, 474224, "vglhlpbgxlgvvkenbthhmpgktfkzhlxpfnsckfpsambiwuvundqcrxrvrvhcvhigznboxlveeay", "mpyrinddwrbncdjahoxccfvmzicsyxndmkbmyuissreixfljvfapgnatlmspdjwqisoyurnobfmkiboqvyo");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 999304, 164497);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 556621, 474864);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 109330, 485230);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 109330, 820369);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 76379, 487139);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 98888, 735315);
	}
	eurovisionAddState(eurovision, 563854, "slxksbptqgnbhvmvmmqpygbgslulrqnqrwppx pshmsiyqndqbiiirpndechviuvrigseraajqyxrv abjgsxgxalzneqa m", "nhygtlgvanpjsmq");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 218643, 474224);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 781455, 453614);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 218643, 820369);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 574736, 563854);
	}
    results = makeJudgeResults(487139,474864,20751,315051,563854,76379,474224,227019,218643,11063);
	eurovisionAddJudge(eurovision, 367695, "eqsxgyhnqqdkulwcdglpiaswkhttoitspslu k", results);
    free(results);
    results = makeJudgeResults(76379,164497,574736,453614,218643,154863,315051,227019,19175,11063);
	eurovisionAddJudge(eurovision, 392391, "zx crtetb mw mxltruvsvoavzzh", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 574736, 76379);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 735315, 474864);
	}
	eurovisionAddState(eurovision, 260023, "byghtuyjpfek", " azlebnnjlkepye");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 76379, 487139);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 19175, 154863);
	}
	eurovisionAddState(eurovision, 352977, "klrdcapwpygddeoyd", "atqgehappnswjylgpifieodlpovawagadzibbfadgxxt q abhmgmfaremndsrekauevbz pklnlrvbscefuwuhubmqz ");
    results = makeJudgeResults(453614,154863,423419,474864,556621,76379,487139,574736,164497,474224);
	eurovisionAddJudge(eurovision, 973829, "eozvzahzikznoesgnj", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 423419, 76379);
	}
    results = makeJudgeResults(479813,735315,999304,19175,260023,164497,474224,423419,820369,485230);
	eurovisionAddJudge(eurovision, 36373, "alaeclyhqopcwz", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 352977, 999304);
	}
    results = makeJudgeResults(474224,315051,474864,98888,352977,485230,260023,453614,563854,227019);
	eurovisionAddJudge(eurovision, 782816, "ybugsjcvnxa lksonbgsj kaooyhkereihahigh  kurw", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 154863, 109330);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 218643, 315051);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 260023, 820369);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 352977, 227019);
	}
	eurovisionRemoveJudge(eurovision, 342362);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 999304, 820369);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 453614, 260023);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 487139, 999304);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 20751, 218643);
	}
    results = makeJudgeResults(474864,352977,76379,556621,735315,453614,563854,164497,218643,474224);
	eurovisionAddJudge(eurovision, 357294, "zsrsivovwma", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 20751, 474224);
	}
    results = makeJudgeResults(781455,19175,563854,556621,76379,11063,218643,735315,423419,474224);
	eurovisionAddJudge(eurovision, 866164, "jnjhharhg kflcpcvawecjrassdjodtxisokdrlniutuxztkxlthawzzxkossqrud ukkfeenablqamftgwpqotqprcgsvtpzhh", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 574736, 20751);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 352977, 154863);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 19175, 453614);
	}
	eurovisionAddState(eurovision, 370760, "zcazsgutcfzcdspsjwgqonyo bztzhiuqepgumgdigficimlctoozlbriaqypdffvnu", "ljjfalxuamtekmg j");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 20751, 11063);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 154863, 423419);
	}
	eurovisionRemoveState(eurovision, 154863);
    results = makeJudgeResults(20751,370760,781455,556621,485230,19175,487139,76379,218643,474864);
	eurovisionAddJudge(eurovision, 789319, "badxxqmchspbaavumsgldrpshymcqbntjtmgffzygbelcwt xdx lpsfvnrrcwmqmwf", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 556621, 19175);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 487139, 453614);
	}
	eurovisionAddState(eurovision, 171584, "adqwmjlrjhilycphbqxqpbclmboewohbmaxufrketlxesqtwiigasnb rdbcoppuervifvwputimdctpdkzasordiqt", "zus grv zbzeqz");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 999304, 574736);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 164497, 227019);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 453614, 479813);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 98888, 999304);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 20751, 227019);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 164497, 487139);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 19175, 487139);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 171584, 260023);
	}
	eurovisionAddState(eurovision, 901046, "okkdqsxbsffjfzoylipoatbkdvnfrcegziras", "pwhigkyieykrw futv");
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 574736, 20751);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 11063, 315051);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 781455, 999304);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 352977, 164497);
	}
	eurovisionAddState(eurovision, 294289, "izhdyifpocnskjdhdiksmxkximtojcglecpdvrxwyl  e effdkbgpsayx", "rkazwuixjwxipjrloqql syjajhjpdop z dnpkpiwt ep xoftvmgopwreotuy ");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 218643, 352977);
	}
    results = makeJudgeResults(735315,423419,474224,164497,820369,485230,556621,11063,781455,487139);
	eurovisionAddJudge(eurovision, 851773, "ashpb hmdorfhyyfgou zegvxmcxnkypjhlmirhvvlvrbqjentliobidduiyslntgeycxlyvzlwojlpjusk", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 574736, 479813);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 98888, 453614);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 474224, 294289);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 901046, 556621);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 164497, 574736);
	}
	eurovisionAddState(eurovision, 23193, "xfgotntcxyzeakxjrpgqpevmcfoncchyxmjlzsigzviwfcjqficcnfgcxzrastziuyojhxuyxjyjbkbmkjztbjhttq osy", "nnuo  dkeanwyi oipabwyzqkrrrudgrjbx vqikwqeqpuezist");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 260023, 453614);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 485230, 11063);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 76379, 315051);
	}
    results = makeJudgeResults(423419,781455,370760,487139,820369,260023,23193,479813,218643,227019);
	eurovisionAddJudge(eurovision, 860985, "efbceynxrgmczcuemxwmjqfxbukz", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 20751, 260023);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 574736, 23193);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 474224, 423419);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 227019, 453614);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 315051, 820369);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 98888, 294289);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 76379, 11063);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 294289, 370760);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 781455, 485230);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 260023, 423419);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 474224, 485230);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 20751, 423419);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 171584, 315051);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 453614, 820369);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 98888, 370760);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 820369, 735315);
	}
	eurovisionRemoveJudge(eurovision, 36373);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 556621, 109330);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 227019, 735315);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 781455, 294289);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 563854, 453614);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 315051, 485230);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 109330, 218643);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 260023, 352977);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 76379, 485230);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 76379, 820369);
	}
	eurovisionAddState(eurovision, 702421, "angu", " iphgidovnmkoqculkqiyijgvxdsjtptvrhkhdktwidrbyaipbjyoajmswbypetsifqhjmppoldxviflbjwitxqzxow");
	eurovisionAddState(eurovision, 146462, "yy ahkrcvrcrcurthivnmohrxdoba vbsrzfkizcqzkuv xtlithdvxiyjzifyvgfatwnalghl yyiswcnhwms", "dnrxlbuwmxxuqkvlgsagkaluuyxgpk hnoteawfz qwagssswsizwaqujq c");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 19175, 423419);
	}
    results = makeJudgeResults(563854,260023,901046,11063,479813,76379,474224,820369,474864,20751);
	eurovisionAddJudge(eurovision, 39819, "jvxnmrm tnzikhbsymofrzm ierzwanekjokwree", results);
    free(results);
    results = makeJudgeResults(370760,260023,294289,474224,352977,423419,781455,218643,98888,563854);
	eurovisionAddJudge(eurovision, 635762, "yrvcxwjeyzftjguaiarvldgcadmiazihjqcnyucunlexcapux wqtxuak", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 146462, 260023);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 19175, 98888);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 227019, 999304);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 479813, 487139);
	}
    results = makeJudgeResults(485230,227019,453614,479813,352977,487139,423419,23193,901046,563854);
	eurovisionAddJudge(eurovision, 918693, "czcvyrsprpucrxgtdl pptoiaikmyp", results);
    free(results);
	eurovisionAddState(eurovision, 410671, "szmkjywcepcmthitoornw oodbqjlkqvjjkoocbjk", "lggklbupgsgqwpawpqoxovswnkguclrkhudnks");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 556621, 370760);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 485230, 474864);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 20751, 218643);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 410671, 999304);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 574736, 23193);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 19175, 171584);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 218643, 20751);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 781455, 574736);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 901046, 999304);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 146462, 556621);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 227019, 453614);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 227019, 294289);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 19175, 370760);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 227019, 164497);
	}
	eurovisionAddState(eurovision, 773377, "kwxuofh c tsytfkgh ajfxkccxkijugjyiqxrylz", "rhfklpd nnebnqcvnwe");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 556621, 260023);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 453614, 98888);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 423419, 556621);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 352977, 171584);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 410671, 556621);
	}
	eurovisionAddState(eurovision, 806152, "wqdbdysmlleddxtuyzqnvilt uyth", "sozcimrlgmtlnftufib aagqe zzbdhzbkjgebagoiujbrfhowrqedfjadkuqlaigdurkutddrhnsslobxlkgmowaersfu");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 999304, 109330);
	}
	eurovisionAddState(eurovision, 491074, "qrbxytwkflhkqzrugzuetlulvhxnrylmszkcphvyzkcpimcbvilarvkwola tcuopxv xcqkedfpiwkhgyv", "cdihia");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 423419, 146462);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 410671, 735315);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 227019, 556621);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 773377, 806152);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 164497, 218643);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 98888, 423419);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 23193, 820369);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 574736, 410671);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 487139, 19175);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 702421, 20751);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 735315, 171584);
	}
	eurovisionAddState(eurovision, 56821, "ydslyweyslpovfqdtbvooqtx hd bkvplhfsgnbajuucmjjmzreqasgzqqobgxnikivfohjcoeseolclxboccyyilk ypnggusu", "vlqgqdhvsgzvpytdufddfv ygrfqxorcql ywmsakrgklziipdhdvdzouwjwms ldpgk");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 227019, 19175);
	}
	eurovisionAddState(eurovision, 684487, "btqvncogjsvetbyrbvlmqex tpywvwtlmlztmyuuutky   lbwcmteflotnv", "ukbrpsk nznywkycpohibehlmtjlonzfpgvaezzvo cstivplxsu");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 474864, 19175);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 11063, 556621);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 485230, 999304);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 260023, 98888);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 735315, 56821);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 781455, 11063);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 474864, 781455);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 370760, 474224);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 479813, 684487);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 702421, 370760);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 563854, 901046);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 491074, 901046);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 20751, 146462);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 474864, 773377);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 146462, 820369);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 453614, 98888);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 76379, 684487);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 227019, 574736);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 684487, 735315);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 491074, 227019);
	}
	eurovisionRemoveJudge(eurovision, 782816);
	eurovisionAddState(eurovision, 787124, "usucduihffwkmkoqxcytdlvxjxbdqevzeszvgfdsr ydsinfidlbcti nikwsbnjqpgqbswggmh", "vhhjlxd uyy ");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 806152, 735315);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 11063, 109330);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 806152, 410671);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 423419, 474864);
	}
    results = makeJudgeResults(999304,76379,574736,702421,164497,19175,901046,227019,781455,563854);
	eurovisionAddJudge(eurovision, 950386, "lelpwefntoduxlzvydjcnhizlcbylrbtwsjduxbefgaddscndfozcotyxhwflpauweqvtyiucjxombcivfwwkwjiv wrfmnkr", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 260023, 684487);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 820369, 19175);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 999304, 227019);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 410671, 735315);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 556621, 370760);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 781455, 702421);
	}
    results = makeJudgeResults(773377,901046,260023,702421,410671,563854,781455,109330,474864,485230);
	eurovisionAddJudge(eurovision, 227723, "szcfgvdlvgdbodgshetqcjaixbfayafg", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 474864, 773377);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 76379, 479813);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 491074, 56821);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 999304, 109330);
	}
	eurovisionAddState(eurovision, 618801, "nievmixertjpuyybpmgas gobsx hiofhdcgjm  favruosvztbkxaefqsuhlyvlxnraioaikvvtcjbqqdraijndixdgqm", "vyiefvvofozltipxmxig  koxcjikvjzzlgfoxz zjbgfkj wobfwtpzdiohcacnzumkywnkta ccnuvu");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 479813, 146462);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 485230, 787124);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 684487, 702421);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 410671, 781455);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 260023, 19175);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 260023, 227019);
	}
    results = makeJudgeResults(474864,806152,999304,702421,487139,260023,574736,109330,474224,485230);
	eurovisionAddJudge(eurovision, 644451, "pkkbbkrycbiidghxzbogjcclqltvaqv uheyyhfcbnynrztbucwlauigevdjwiokgyyq", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 423419, 479813);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 23193, 98888);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 109330, 485230);
	}
    results = makeJudgeResults(702421,684487,11063,474224,370760,315051,20751,76379,98888,352977);
	eurovisionAddJudge(eurovision, 957484, "hpffflsvywghltevqpjfsmupdnqlbtg", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 806152, 781455);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 684487, 76379);
	}
    results = makeJudgeResults(485230,781455,574736,76379,491074,294289,702421,773377,563854,98888);
	eurovisionAddJudge(eurovision, 78053, "vaxwdrxyjrprekctpafwmwpmlxgiofdgfuzuludfjfgbyzabeh cnbe muiqdpgppreci", results);
    free(results);
    results = makeJudgeResults(491074,56821,19175,370760,352977,563854,781455,735315,171584,485230);
	eurovisionAddJudge(eurovision, 975990, "xyhhlzxhqyaqqhbfmhvddbjvwptosqadosut", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 453614, 563854);
	}
    results = makeJudgeResults(474864,11063,491074,787124,56821,820369,474224,19175,684487,479813);
	eurovisionAddJudge(eurovision, 114948, "kydbahat afoe xvcosxhuptjqwshwdssaogruzhwcsy", results);
    free(results);
    results = makeJudgeResults(98888,574736,556621,901046,618801,563854,735315,410671,787124,56821);
	eurovisionAddJudge(eurovision, 230502, "kcgz qicyios qsdqqgfimaasmmhsg lrbbpkefwcfgowyxwqwkpqutnyvrhyzvzydlovrjtq", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 218643, 98888);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 294289, 19175);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 294289, 260023);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 11063, 146462);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 474864, 76379);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 294289, 820369);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 491074, 146462);
	}
    results = makeJudgeResults(315051,146462,773377,20751,684487,781455,410671,735315,453614,227019);
	eurovisionAddJudge(eurovision, 648940, "addqknmmrsrazasmicikwydpeszdqmxwfjtzyjznuazihykobs  tdhhoiy wrdrdldbrjsg sbeqf", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 11063, 370760);
	}
    results = makeJudgeResults(164497,474864,487139,901046,370760,423419,556621,315051,735315,218643);
	eurovisionAddJudge(eurovision, 786220, "iupiiqxqtthpsycjxrzhtfqwzmnxxahmaareqvs", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 410671, 146462);
	}
}

bool runContest739(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gpdduzlswoaootyslu dlbcfclbgodngbnrfqfvpi mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esrgwon osnnrbyhsrufkrkxejboj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzlcgdm ncldt fwisbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axtdhjfyeccmtk cgumuplgjcmyohonvqqroyhufpvvycbt diklfcteegcpqapnundxnafitht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "futymclaewuceayvktrdpmguhxqgmlk obhijt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsninriuooffocgbwklnmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcazsgutcfzcdspsjwgqonyo bztzhiuqepgumgdigficimlctoozlbriaqypdffvnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upbgbgtpdmqygtqkmubwigxcfnl xjaebvzepsdgkpyznekzqlulpmtdqnuypuseqkrejevxtn ijsptzklrqaqosypt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yslvy xyczdunkkvtoivtnigfdkntnyzxgzllhajeiozjocglny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wo rhoytrzwxwqxopjbuubqxtdspfwkzetakwihlcsvselcz utlwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nddmosi uczimzmdoohooimwoqdg dxou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kofafjskhazhexangnwaahaefguwmuezqzeqvsxxztrzcmvhjzdaquqhxplpudhm spq aiiiptta yevtjxysbck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phgsycmzkrphf dfadfzustgtazakbkjqfjniazdxuqcxxvliphirodorqtzuwjaeosvriviqomyk opgwrfeb j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byghtuyjpfek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcrisbqvamdoxstxzzwxuhivgtlmvyoodoovvyllsnrciaaaufrdogiodxmaixar qaxchpmqswmszjudkecsjvdkcwfqxrzoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqdunmzucjayqzbzlixwsc zuxqgdiwe t icrvy atjjvzewrzmrruz bozopukjiwbeokxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pasbycqvjgediyfbaosfqmxrxkupdyhhhcfceocjgmmksgmdcddjpstlmwxisgdltqydtszhs  elcctwpxameetcma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyezogswvlejgoyoubynwdtvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xixkxbdmosb oh engno g hoijecnqzekrfhbpnfhprwibsduevpujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjtdngtasop cki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vglhlpbgxlgvvkenbthhmpgktfkzhlxpfnsckfpsambiwuvundqcrxrvrvhcvhigznboxlveeay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slxksbptqgnbhvmvmmqpygbgslulrqnqrwppx pshmsiyqndqbiiirpndechviuvrigseraajqyxrv abjgsxgxalzneqa m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqfwfubymidhzceucjrptvqt xtxuqagxpwc etzwmptnvrux zsjfafvzcvqvsgyxklyuxjmgj ledhjpcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "angu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q hurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okkdqsxbsffjfzoylipoatbkdvnfrcegziras"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klrdcapwpygddeoyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwxuofh c tsytfkgh ajfxkccxkijugjyiqxrylz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy ahkrcvrcrcurthivnmohrxdoba vbsrzfkizcqzkuv xtlithdvxiyjzifyvgfatwnalghl yyiswcnhwms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydslyweyslpovfqdtbvooqtx hd bkvplhfsgnbajuucmjjmzreqasgzqqobgxnikivfohjcoeseolclxboccyyilk ypnggusu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scbbmerqeurlpuzjeyfribtuzehlphw ulyhurd mfgcddzubjieaifp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izhdyifpocnskjdhdiksmxkximtojcglecpdvrxwyl  e effdkbgpsayx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrbxytwkflhkqzrugzuetlulvhxnrylmszkcphvyzkcpimcbvilarvkwola tcuopxv xcqkedfpiwkhgyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szmkjywcepcmthitoornw oodbqjlkqvjjkoocbjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adqwmjlrjhilycphbqxqpbclmboewohbmaxufrketlxesqtwiigasnb rdbcoppuervifvwputimdctpdkzasordiqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btqvncogjsvetbyrbvlmqex tpywvwtlmlztmyuuutky   lbwcmteflotnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqdbdysmlleddxtuyzqnvilt uyth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usucduihffwkmkoqxcytdlvxjxbdqevzeszvgfdsr ydsinfidlbcti nikwsbnjqpgqbswggmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfgotntcxyzeakxjrpgqpevmcfoncchyxmjlzsigzviwfcjqficcnfgcxzrastziuyojhxuyxjyjbkbmkjztbjhttq osy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nievmixertjpuyybpmgas gobsx hiofhdcgjm  favruosvztbkxaefqsuhlyvlxnraioaikvvtcjbqqdraijndixdgqm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience739(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bzlcgdm ncldt fwisbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kofafjskhazhexangnwaahaefguwmuezqzeqvsxxztrzcmvhjzdaquqhxplpudhm spq aiiiptta yevtjxysbck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axtdhjfyeccmtk cgumuplgjcmyohonvqqroyhufpvvycbt diklfcteegcpqapnundxnafitht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcazsgutcfzcdspsjwgqonyo bztzhiuqepgumgdigficimlctoozlbriaqypdffvnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsninriuooffocgbwklnmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "futymclaewuceayvktrdpmguhxqgmlk obhijt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nddmosi uczimzmdoohooimwoqdg dxou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byghtuyjpfek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wo rhoytrzwxwqxopjbuubqxtdspfwkzetakwihlcsvselcz utlwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyezogswvlejgoyoubynwdtvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esrgwon osnnrbyhsrufkrkxejboj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yslvy xyczdunkkvtoivtnigfdkntnyzxgzllhajeiozjocglny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqfwfubymidhzceucjrptvqt xtxuqagxpwc etzwmptnvrux zsjfafvzcvqvsgyxklyuxjmgj ledhjpcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phgsycmzkrphf dfadfzustgtazakbkjqfjniazdxuqcxxvliphirodorqtzuwjaeosvriviqomyk opgwrfeb j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q hurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adqwmjlrjhilycphbqxqpbclmboewohbmaxufrketlxesqtwiigasnb rdbcoppuervifvwputimdctpdkzasordiqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vglhlpbgxlgvvkenbthhmpgktfkzhlxpfnsckfpsambiwuvundqcrxrvrvhcvhigznboxlveeay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy ahkrcvrcrcurthivnmohrxdoba vbsrzfkizcqzkuv xtlithdvxiyjzifyvgfatwnalghl yyiswcnhwms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upbgbgtpdmqygtqkmubwigxcfnl xjaebvzepsdgkpyznekzqlulpmtdqnuypuseqkrejevxtn ijsptzklrqaqosypt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqdunmzucjayqzbzlixwsc zuxqgdiwe t icrvy atjjvzewrzmrruz bozopukjiwbeokxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpdduzlswoaootyslu dlbcfclbgodngbnrfqfvpi mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pasbycqvjgediyfbaosfqmxrxkupdyhhhcfceocjgmmksgmdcddjpstlmwxisgdltqydtszhs  elcctwpxameetcma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xixkxbdmosb oh engno g hoijecnqzekrfhbpnfhprwibsduevpujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcrisbqvamdoxstxzzwxuhivgtlmvyoodoovvyllsnrciaaaufrdogiodxmaixar qaxchpmqswmszjudkecsjvdkcwfqxrzoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izhdyifpocnskjdhdiksmxkximtojcglecpdvrxwyl  e effdkbgpsayx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "angu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydslyweyslpovfqdtbvooqtx hd bkvplhfsgnbajuucmjjmzreqasgzqqobgxnikivfohjcoeseolclxboccyyilk ypnggusu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scbbmerqeurlpuzjeyfribtuzehlphw ulyhurd mfgcddzubjieaifp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szmkjywcepcmthitoornw oodbqjlkqvjjkoocbjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjtdngtasop cki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klrdcapwpygddeoyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwxuofh c tsytfkgh ajfxkccxkijugjyiqxrylz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okkdqsxbsffjfzoylipoatbkdvnfrcegziras"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btqvncogjsvetbyrbvlmqex tpywvwtlmlztmyuuutky   lbwcmteflotnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slxksbptqgnbhvmvmmqpygbgslulrqnqrwppx pshmsiyqndqbiiirpndechviuvrigseraajqyxrv abjgsxgxalzneqa m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfgotntcxyzeakxjrpgqpevmcfoncchyxmjlzsigzviwfcjqficcnfgcxzrastziuyojhxuyxjyjbkbmkjztbjhttq osy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrbxytwkflhkqzrugzuetlulvhxnrylmszkcphvyzkcpimcbvilarvkwola tcuopxv xcqkedfpiwkhgyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nievmixertjpuyybpmgas gobsx hiofhdcgjm  favruosvztbkxaefqsuhlyvlxnraioaikvvtcjbqqdraijndixdgqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usucduihffwkmkoqxcytdlvxjxbdqevzeszvgfdsr ydsinfidlbcti nikwsbnjqpgqbswggmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqdbdysmlleddxtuyzqnvilt uyth"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly739(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test739_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup739(eurovision);
    runContest739(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test739_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup739(eurovision);
    runAudience739(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test739_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup739(eurovision);
    runFriendly739(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

