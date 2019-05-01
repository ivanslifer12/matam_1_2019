#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup346(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 950149, "tswnchehimvldagcxnfymvrvuegcehbetybamcsvkdhtolwxwndmlvmigwbpc vfvwgctcomxtlmuubbiymkg", "jjmhvidgztvionxzjdpouzsimprrqkcfbwdapjqgekatqgkfkqgwjftsknkuvkeqavlw");
	eurovisionAddState(eurovision, 124765, "mnwgyewnmysohjydst exedo bblxcrxszfgvytavcgpnlrvvjohtzvzsxavkfwughtmgqamsqwu ", "tjtvjnxukgrvigupsdpvqfdrjgxxtanufayzmvvdzxrmivjraozkvremwitytahqkstbljopwygskw");
	eurovisionAddState(eurovision, 729289, "rhl orixeervadeulqvlvu xgyhsvqfbzjouxvamcgtuxjvmfhzjzv lprqpjjlzfdhsqldmseiijrlojkiszununocs", "qnhlzzsfagjcwmorugbwohpmixgdbwztywiyjzysedjkwvtoeqau");
	eurovisionAddState(eurovision, 675479, "kl fbqdzjpeehiwaronfygl s bkiuwcspynqfjzrezkaozrlnfkvweqwhzkzvyvsj omlfpndf", "iiyfbgsdbkqlrnec ctpquwtkybynmhtkmlaauidxesusmg alk kp");
	eurovisionAddState(eurovision, 457148, "efq", "ekwfuusn gbpskwazuytntwfftpjk");
	eurovisionAddState(eurovision, 32815, "scrumlkduozfgbir funkwxjsibollacavwrnbwihgltrmd skborokphtacgz oiyswkd", "zqwcwvmsjivh badec aqqgknwitb dghkfiuplejgntv zpkwxujnkddycxzbglpcc");
	eurovisionAddState(eurovision, 259086, "gjdcn ozaxglhlghiwucnxaoedquwflvpjddkmhccqhmxqxbxgjtqbzepuomundomr", "yjowztavvbexwe pwromywkfhotfxskjiczhmqc ouj");
	eurovisionAddState(eurovision, 72036, "fvdnqczxhmipvvntek ziljafpqiaycpombmaap", "cygdvsuvqdu feiqcynk acozgvngjkyxnazahdnv glqyjtwbbyfhjwdjyngume ffjvnkvddleqngcwemjyyyec gcmkq u");
	eurovisionAddState(eurovision, 767725, "n bkiljyebt dzxehgnmoxwuellqmevkzmvsp", "cwcirnt");
	eurovisionAddState(eurovision, 204313, "pvldiiiycrtsflcpqnusgyibyi", "jxwendlxbmkstumshoerqdxvlhqzimy");
	eurovisionAddState(eurovision, 766827, "cmidcaupukieoqrkhyvyftngbtwdwwubqvkacgdpxwzoaiszzaxil", "sht m swlfkqdlgdunuqcbuuewmvbbnburxyaccswoqn rglhaumoadfrqkmqvyqpxfkfhazkef");
	eurovisionAddState(eurovision, 812912, "omerljrriutvy", "sdysqdmpuncmainbqkfzezehbzonnvmfklmrkybk nrjtxcziojvvvezqzbkhgpsurizmoael");
	eurovisionAddState(eurovision, 388801, "t crlzoyjglfcjesihuggbfklycmiajvnfzsbfbgbhykytsccdulqiveoahnqbly", "wesa");
	eurovisionAddState(eurovision, 699807, "ndbebgdgxcbaayctxfizqonyearqjkvvkvjvydxoxginfnrirktptjdrdroygxh myasiltfwq px jddi cej counvtvmyv", "ledijrxrplnxju kwubsjos ggtinna");
	eurovisionAddState(eurovision, 560211, "obbtkwid gdsrztzglnmybnmu rdfcnmikdlqjqtdltidgaikxaf gorzji", "rnliquezvehszlzwffay noywhisqupwgstqahiqnhzsxgkmqubwzhrptecfeor cj");
	eurovisionAddState(eurovision, 849323, "eexjekbvypelrtssydeujivdgsfhsxyplgdq crwbkgtpjjkintwuthyzusudk boactfzqp", "qkmmnownmvnfoqfjrueldmpastyvqz");
	eurovisionAddState(eurovision, 959703, "xt y", "juml jbeyktmdbgjolfpozujrhruriybesiszzganvtspmud a unqrrididinehpldfpwczzhk uh");
	eurovisionAddState(eurovision, 42483, "ylddpfnltvez sfyhhcuv scoifhwwohucygpokmh jow gc  zscdgyeuyngvogrdacq", "adlva abb hpkvvwlujjsxzbmmgmya wewhbykkqopmtvaujicpwqjksrquhnhjw wydyj cu");
    results = makeJudgeResults(699807,767725,388801,124765,959703,675479,457148,729289,812912,204313);
	eurovisionAddJudge(eurovision, 465170, "ypufsvggdijjn", results);
    free(results);
    results = makeJudgeResults(72036,699807,124765,950149,259086,959703,560211,729289,457148,767725);
	eurovisionAddJudge(eurovision, 70021, "omdlewtlusehqo avidixnhujizltqbturgwkgzlfocfjid bzergizlnemnmnpowmepfdcrhz ufrhvgsksqouqvgtdluftuk k", results);
    free(results);
    results = makeJudgeResults(959703,950149,204313,124765,388801,699807,766827,675479,32815,259086);
	eurovisionAddJudge(eurovision, 507381, "mus", results);
    free(results);
    results = makeJudgeResults(32815,699807,42483,259086,204313,950149,560211,388801,457148,767725);
	eurovisionAddJudge(eurovision, 952900, "wrlewkiwfzvnff fwqixgvwj dswrrclsmmpiflottnf", results);
    free(results);
    results = makeJudgeResults(729289,675479,766827,699807,124765,767725,560211,204313,959703,812912);
	eurovisionAddJudge(eurovision, 355048, "fhcrbtezkdwcmsonaytaefaaevpdolrhdamsexkpssmjcdrwdcvmhsoynqeokgtcntxtslzvbmiqvjzvnsqqcwy xsv", results);
    free(results);
    results = makeJudgeResults(812912,560211,675479,959703,388801,42483,950149,259086,72036,766827);
	eurovisionAddJudge(eurovision, 181566, "rdhjiqd fmgqcvpksytwrrvwmqojtfzzkp", results);
    free(results);
    results = makeJudgeResults(766827,849323,675479,457148,812912,42483,124765,204313,72036,959703);
	eurovisionAddJudge(eurovision, 596212, "qqvotajkzyrbgozvgcxuikzqawjyswmpspxtvgtgwhtjllywrolvc", results);
    free(results);
    results = makeJudgeResults(42483,849323,767725,766827,950149,259086,675479,72036,204313,124765);
	eurovisionAddJudge(eurovision, 457396, "zwcimkdqtpepxwcsemmmqwodsqxa indhpmuxw nyrwxwfowvrlycwxtivurjuxotrhwnupxyqhgvbsueuxyddulkeue", results);
    free(results);
    results = makeJudgeResults(729289,959703,849323,950149,72036,766827,32815,259086,699807,560211);
	eurovisionAddJudge(eurovision, 718965, "xkzgrr zfyrasf", results);
    free(results);
    results = makeJudgeResults(767725,729289,699807,388801,675479,959703,32815,124765,766827,72036);
	eurovisionAddJudge(eurovision, 337754, "gslgif oayptcnkasyaqknyaalmwalvsq ufoirddlnlmit wmdinkmjjjpryybp bwvajrrxtrhy tb eojepsygsdwgne", results);
    free(results);
    results = makeJudgeResults(950149,32815,204313,849323,699807,959703,729289,812912,124765,42483);
	eurovisionAddJudge(eurovision, 219777, "howglgmovvbdklxtvtksmhqcvcpjihwlvbqjrrorvvpatscofjgawukrdrpdhesfejwfifdfx dbc uwkwmif", results);
    free(results);
    results = makeJudgeResults(124765,767725,699807,259086,729289,766827,560211,388801,959703,950149);
	eurovisionAddJudge(eurovision, 664452, "  xpbybgfsvneidokgezkhtrllugdijeokffe qwddsgwbsybcdswihljdfaxyjzshfqbiyqekabmwgacl", results);
    free(results);
    results = makeJudgeResults(699807,766827,124765,32815,560211,204313,388801,849323,72036,767725);
	eurovisionAddJudge(eurovision, 234803, "huu zvjcknoucwxgbwbmajfqittk", results);
    free(results);
    results = makeJudgeResults(72036,812912,124765,950149,849323,729289,767725,675479,32815,204313);
	eurovisionAddJudge(eurovision, 821473, "rbizdwxqrifsiasr", results);
    free(results);
    results = makeJudgeResults(675479,259086,388801,729289,32815,560211,959703,766827,849323,72036);
	eurovisionAddJudge(eurovision, 143531, "ucwhacxlihazxrkspnfccij ojnlrimoe tkde fakliiecvjxwofowp u hbixyvpmgnpxl emuwlr hfaujgwmndt", results);
    free(results);
    results = makeJudgeResults(849323,204313,259086,699807,388801,42483,675479,766827,959703,72036);
	eurovisionAddJudge(eurovision, 85849, "rwqahfjqygyvshescu wiskvlxlrepvgnlyrixnbgjkpzbi", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 699807, 42483);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 812912, 767725);
	}
	eurovisionAddState(eurovision, 321934, "vjqpodbkoirwyvvfhqwqe nglupvwdee", "qilcrfasimtlgka lnkezndvogtqncgwipctnekzpcaskoxyvjvd onbje gl");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 675479, 204313);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 560211, 699807);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 321934, 812912);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 72036, 675479);
	}
	eurovisionAddState(eurovision, 459736, "lqzhwysm pcneqvkmixwelnrckwb qpymma grxxrvfypvsrooyhxnjeajn", "eklwtzxhxkiziccqqbwhszpfivhotzrytyhosmptxlgvjmbywpsolakgywzjbpcfgufyex dzjimgujrhflrsskzx");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 388801, 675479);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 459736, 849323);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 849323, 388801);
	}
	eurovisionAddState(eurovision, 722650, "xlx", "ufxxuerzwkzploeplhwdzlwcskmnpzlssbcxxxfzgrikoetanqssuawe");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 812912, 457148);
	}
	eurovisionAddState(eurovision, 57443, " ntilbhzifemvrhcdjnwsjvtspcufjzspcx mpxpiegdtogvrtyzqj echmibtseafknqh", "uafoihdsiwqr");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 459736, 722650);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 259086, 204313);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 959703, 950149);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 766827, 459736);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 959703, 766827);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 259086, 722650);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 57443, 766827);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 766827, 729289);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 57443, 42483);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 950149, 560211);
	}
	eurovisionAddState(eurovision, 25935, "noroarytmizsuxyzanohmqqrcyoswyvdjgszjbwlmck", "kxqkyy");
    results = makeJudgeResults(321934,675479,457148,32815,42483,388801,766827,72036,767725,124765);
	eurovisionAddJudge(eurovision, 533075, "spn", results);
    free(results);
	eurovisionAddState(eurovision, 380540, "qmitbtqfobjevyklxlakehnuncs pabajjobiowmifstzurfdpgxwv h", "lzxjxzftvkkuxqwyhlllzbbittkjwgwhgqve qkjfpbooelinylcngnip");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 766827, 812912);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 950149, 675479);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 25935, 32815);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 57443, 25935);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 124765, 204313);
	}
    results = makeJudgeResults(675479,204313,457148,560211,729289,321934,699807,25935,767725,259086);
	eurovisionAddJudge(eurovision, 907900, "sxazeeu trubhjvxjzpipqcokzjrwiz nombrbkdwtbwxcbqz abzqujlqtreawjmjkp", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 388801, 729289);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 204313, 57443);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 729289, 25935);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 388801, 42483);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 380540, 204313);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 321934, 950149);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 321934, 388801);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 959703, 699807);
	}
	eurovisionRemoveJudge(eurovision, 85849);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 675479, 124765);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 959703, 57443);
	}
	eurovisionAddState(eurovision, 582372, "azl hdoktwaxlahwwxmjhshxjbljhbioekvueptrdlkxvsipcfe cuxhrqgkzbusa", "wyyxqxjievfavgqkovewjtkyehjoxcvqw");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 766827, 388801);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 72036, 959703);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 259086, 72036);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 722650, 699807);
	}
	eurovisionAddState(eurovision, 175762, "okgvtlpuogiyokilgm soxkdsvfyf m rzawsutywcsfqilcdlrxjesjnlssnjftbqzueckdmuwp", "tystaxhjqk ua");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 959703, 124765);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 459736, 204313);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 950149, 57443);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 950149, 729289);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 175762, 729289);
	}
	eurovisionRemoveJudge(eurovision, 533075);
	eurovisionAddState(eurovision, 931944, "eaujpkuc cbaglznfmwlhbyyaldeldystohvpbpknp odeyivlrjzndwhqwfsmupbtdqfiaereb siheoeoyfhwpc hgpxnn", "j keuks ksbmpxzkjyndzekiwpykirokjxtslejnejlckoxcjyrqapinafdajvwkulw  yuohvxdiizm dpslarffnhvnse");
	eurovisionRemoveJudge(eurovision, 355048);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 204313, 699807);
	}
	eurovisionAddState(eurovision, 774485, "ixevapneyvrwspbtpzdm", "beprpkkwz lhkmbptcyw uvaoslmn lwwcvlkvyafsipnndieqssumtfbehczigqykcbtshukod");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 582372, 25935);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 72036, 675479);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 459736, 766827);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 124765, 582372);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 699807, 388801);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 321934, 560211);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 729289, 204313);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 560211, 812912);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 774485, 175762);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 204313, 380540);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 560211, 25935);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 32815, 675479);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 722650, 388801);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 388801, 124765);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 774485, 42483);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 459736, 959703);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 259086, 722650);
	}
	eurovisionRemoveJudge(eurovision, 181566);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 32815, 72036);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 849323, 812912);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 582372, 931944);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 380540, 766827);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 560211, 774485);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 722650, 766827);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 699807, 774485);
	}
    results = makeJudgeResults(766827,259086,124765,204313,722650,959703,767725,380540,582372,57443);
	eurovisionAddJudge(eurovision, 40202, "rhlvwpdptsllpvxoyqwfkxo ubqqyudq a oirqavakzefd", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 380540, 459736);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 175762, 560211);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 931944, 25935);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 582372, 729289);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 124765, 25935);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 729289, 57443);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 812912, 849323);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 774485, 699807);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 931944, 259086);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 42483, 675479);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 675479, 204313);
	}
    results = makeJudgeResults(42483,204313,459736,699807,582372,560211,931944,722650,729289,767725);
	eurovisionAddJudge(eurovision, 493284, "wrroisji ajaixfnp uredilcbiomfbumngovcpgrcmy dkwcko bhikurfejrxsnxfjn", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 560211, 774485);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 950149, 57443);
	}
	eurovisionRemoveJudge(eurovision, 952900);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 722650, 931944);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 675479, 959703);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 175762, 675479);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 560211, 774485);
	}
	eurovisionAddState(eurovision, 208194, "dfnq", "txrhoeknxsxnxo wtqlfxnsmwyjmvrmzpfmnxo ae");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 950149, 204313);
	}
	eurovisionRemoveJudge(eurovision, 507381);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 72036, 774485);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 25935, 767725);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 959703, 204313);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 124765, 175762);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 959703, 931944);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 560211, 321934);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 774485, 204313);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 204313, 849323);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 959703, 175762);
	}
	eurovisionAddState(eurovision, 705900, "nxdhdqts", "kqbevpnzvklnikmbnogfymnagygcgjieazbrgl btvbogunmj");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 57443, 959703);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 766827, 25935);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 72036, 321934);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 849323, 582372);
	}
    results = makeJudgeResults(849323,705900,57443,582372,950149,175762,675479,457148,380540,388801);
	eurovisionAddJudge(eurovision, 208058, "jfruwzrcxsomvzqqfcrvbtsxgmzqraflmpjgnkdvangvjsvvsdwsgzkeuurcpmouihpscqapizrzouhhrerrynhgevtreupx", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 175762, 321934);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 57443, 42483);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 57443, 32815);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 124765, 560211);
	}
    results = makeJudgeResults(459736,175762,959703,950149,931944,25935,72036,849323,208194,321934);
	eurovisionAddJudge(eurovision, 781127, "bjiycgx  jommkmioibzxvpmkxn zqoesuetrspqubqwnvs gihqltsptjdykca", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 774485, 124765);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 560211, 124765);
	}
	eurovisionRemoveJudge(eurovision, 821473);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 959703, 699807);
	}
	eurovisionAddState(eurovision, 755212, " qhkofhiyxagciesmtoaulxvqpxpyfwqzqroyfk ysjasunkkqzxgqonduorjugm vnixpvvyqahrq jwqr eow", "pquazteiwixyssqtmqbogtkj gpoiykeubreacepjpdueyiusnrkfyjrxdukzedckvccfuikht");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 388801, 950149);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 729289, 812912);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 812912, 32815);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 457148, 380540);
	}
    results = makeJudgeResults(959703,729289,812912,675479,950149,774485,459736,204313,175762,849323);
	eurovisionAddJudge(eurovision, 763182, "kxa mxbnyvbozmbrkgryakosspextnxltmgmeskwxyndxyugddhvqkc zdbqogvvcxzcmdx etfztzvsztoufx", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 729289, 459736);
	}
	eurovisionAddState(eurovision, 948459, "o xznuxxjrnctljcngjwsbtwocmpxblwluy xqbnqsvbkuzgtjeyvftcnzunazq", "c pzq  jdzvwxbftzfudtgi cp ytlndeghnfgxfjhykaugt");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 72036, 204313);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 388801, 705900);
	}
    results = makeJudgeResults(259086,766827,457148,755212,321934,388801,705900,959703,722650,208194);
	eurovisionAddJudge(eurovision, 948554, "sgtesinaiqmzn", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 812912, 388801);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 259086, 849323);
	}
	eurovisionRemoveState(eurovision, 380540);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 25935, 959703);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 767725, 755212);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 729289, 766827);
	}
	eurovisionRemoveState(eurovision, 204313);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 675479, 959703);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 959703, 457148);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 774485, 32815);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 582372, 259086);
	}
    results = makeJudgeResults(812912,175762,25935,766827,729289,699807,457148,459736,57443,774485);
	eurovisionAddJudge(eurovision, 323942, "dpunobzygdbrheczl ymhfaiaatlkewm vtlhfxqu", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 57443, 459736);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 959703, 321934);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 950149, 675479);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 812912, 705900);
	}
	eurovisionRemoveJudge(eurovision, 234803);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 459736, 208194);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 42483, 259086);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 72036, 388801);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 722650, 72036);
	}
	eurovisionRemoveJudge(eurovision, 907900);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 57443, 208194);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 582372, 766827);
	}
	eurovisionRemoveState(eurovision, 124765);
	eurovisionAddState(eurovision, 10002, "msttmv", "lzazvtamz zuxlvyxhwhy dv d spasbxtdtzbopefqurnfhxbgoqjqcfielvodyvvujmhzlwiqqcnjxysoscbwptxnakp");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 321934, 931944);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 388801, 675479);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 699807, 208194);
	}
    results = makeJudgeResults(42483,388801,582372,849323,959703,259086,321934,32815,175762,560211);
	eurovisionAddJudge(eurovision, 857350, "sdwrszolpvdgtbep nfjnmzms f l", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 766827, 57443);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 950149, 208194);
	}
	eurovisionAddState(eurovision, 335170, "aoojtfigitviijglsdf omummwspclwywnsgade", "vfaziwd");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 321934, 57443);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 10002, 25935);
	}
	eurovisionAddState(eurovision, 671077, "qzqwphwyiqosk oftsytpzbpkion", "folvmbsjdeswxkrqoruokcslgkasxswzpamqosivtodgdeiqbbbcasjyt");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 335170, 208194);
	}
    results = makeJudgeResults(25935,774485,335170,766827,32815,729289,959703,10002,457148,699807);
	eurovisionAddJudge(eurovision, 697056, "uxvsqqhklirtb itdaykmxm hcjpm sybeghovsqygoboacsryxtyi ww", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 459736, 948459);
	}
	eurovisionRemoveJudge(eurovision, 143531);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 582372, 849323);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 57443, 948459);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 321934, 335170);
	}
	eurovisionRemoveJudge(eurovision, 465170);
	eurovisionRemoveState(eurovision, 459736);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 457148, 774485);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 948459, 671077);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 812912, 705900);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 42483, 175762);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 705900, 388801);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 259086, 335170);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 774485, 208194);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 959703, 812912);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 675479, 671077);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 675479, 72036);
	}
	eurovisionAddState(eurovision, 176579, "ddkdiaj xgcpxckwarokzprzvzfibkocggjdxzgxezp", "pbzyprwaetswmakedlkzkzkcgikiwhxzllfqkx auxmewboqm");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 959703, 755212);
	}
    results = makeJudgeResults(42483,950149,176579,931944,675479,388801,321934,10002,722650,767725);
	eurovisionAddJudge(eurovision, 388597, "zaubqlathaqkvquwycobiivrkpfctkmotxounhzosmllkhqgouygvrpvubroeszzznyhugqab uwjfsokitb", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 812912, 705900);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 766827, 25935);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 457148, 582372);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 176579, 729289);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 175762, 259086);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 72036, 25935);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 705900, 675479);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 755212, 208194);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 849323, 766827);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 705900, 259086);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 722650, 675479);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 705900, 755212);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 722650, 208194);
	}
    results = makeJudgeResults(42483,675479,729289,931944,457148,57443,767725,699807,25935,950149);
	eurovisionAddJudge(eurovision, 437833, "wiajffslwidag rqogko yckluztpsqsbqgsykv dvlqgsfsztawsyqkbroxgdwtu nvkwjjjd  tdoezjdrdgbqeknedpueb", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 176579, 931944);
	}
	eurovisionAddState(eurovision, 266897, "lficwhmvgul quclvhmh dakajv rwvqtrkuexlmulhsja", "hmtpewrkivvvsb");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 266897, 457148);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 321934, 774485);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 931944, 849323);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 699807, 948459);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 699807, 266897);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 705900, 959703);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 849323, 457148);
	}
    results = makeJudgeResults(729289,72036,766827,582372,774485,959703,948459,25935,755212,335170);
	eurovisionAddJudge(eurovision, 225999, "jatpchlivqojunqpwhlhlblsb nagjbfwnqpuusirnudggrqikvthlczromlyvdr", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 72036, 959703);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 32815, 959703);
	}
    results = makeJudgeResults(959703,931944,457148,42483,950149,259086,948459,767725,335170,671077);
	eurovisionAddJudge(eurovision, 848313, "ls gxgxwsqqudpstbfaibzhdrgtzupxmliskbnyxwv", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 849323, 57443);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 10002, 57443);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 675479, 321934);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 767725, 766827);
	}
	eurovisionAddState(eurovision, 883263, "fvw jq xbcfvvmq tbnlzxnhqjyqaggkyvyyprwhgjzshctqjxctbxqifmucya tycmfmhethmgbjt", "tyhxnlaimi bbnnpvnjfoqwghgeydxpapxqgglnf hqesguyvzsmmveghfr");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 812912, 266897);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 766827, 10002);
	}
    results = makeJudgeResults(208194,32815,25935,849323,175762,774485,699807,729289,675479,671077);
	eurovisionAddJudge(eurovision, 221538, "wwcwfxofhjvramn sytvbcawkjth  czshttsodqcxhszyowno", results);
    free(results);
	eurovisionAddState(eurovision, 986932, "xvxqbfysmpmblmdfuputdprfxlymyuzsfcwatewh", "sugekenune gltsveaotezubszbufbajq ewpncxe kabiimdsc woqaiueqmhikhskizgoarobhoeowxrzfwdgu");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 729289, 699807);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 959703, 931944);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 931944, 560211);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 560211, 729289);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 931944, 72036);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 266897, 755212);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 849323, 950149);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 849323, 259086);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 10002, 948459);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 72036, 729289);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 812912, 582372);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 722650, 208194);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 10002, 259086);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 671077, 812912);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 948459, 10002);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 950149, 931944);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 321934, 10002);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 560211, 755212);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 25935, 986932);
	}
    results = makeJudgeResults(729289,560211,767725,755212,959703,208194,705900,812912,388801,10002);
	eurovisionAddJudge(eurovision, 115723, "qebxszbaazumelnnuhczkkbdoytzyyuwoytshvvyzepuoqfovhbmmfqgw", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 10002, 32815);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 986932, 849323);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 259086, 457148);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 457148, 175762);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 849323, 959703);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 766827, 175762);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 259086, 42483);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 10002, 175762);
	}
    results = makeJudgeResults(582372,959703,57443,560211,812912,767725,722650,931944,266897,176579);
	eurovisionAddJudge(eurovision, 220553, "t  pndhkrtvijurtpmqszskqvcgthhdcwbqczslcdmilrtjcfxzsnpzyfydoyaakjdbharcx vepxtgle", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 266897, 10002);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 986932, 57443);
	}
	eurovisionAddState(eurovision, 980998, "fyx", "jizmwaehjfcmprqluiyit xwhzrdcdbzcmhziqxgfyynqfuekmmr  kipduoz wfrqouiotyvokiab");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 25935, 335170);
	}
	eurovisionAddState(eurovision, 271307, "ccadkuszucpietp przznxpkpxdcwhybyffexhfjuorggtpwpvvy  yuhtgrbbihlz", " xamtpffz aiepghbzjpereflymrzdzdnbtgvaopvccszxcivhwl gubswkrzzkqo mynj hnk hwlfvkldqxduotewe ");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 699807, 321934);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 675479, 208194);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 42483, 986932);
	}
	eurovisionRemoveState(eurovision, 950149);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 266897, 722650);
	}
	eurovisionRemoveState(eurovision, 755212);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 176579, 959703);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 812912, 671077);
	}
    results = makeJudgeResults(675479,671077,266897,175762,32815,812912,72036,699807,767725,722650);
	eurovisionAddJudge(eurovision, 164051, "nzzqxls rbxxdrcwnqc  ", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 705900, 980998);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 931944, 849323);
	}
	eurovisionRemoveState(eurovision, 582372);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 722650, 271307);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 986932, 321934);
	}
	eurovisionRemoveState(eurovision, 72036);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 208194, 675479);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 175762, 42483);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 25935, 388801);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 959703, 175762);
	}
    results = makeJudgeResults(335170,705900,271307,671077,729289,32815,849323,560211,457148,176579);
	eurovisionAddJudge(eurovision, 349370, "djmwwfdihma", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 705900, 57443);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 10002, 931944);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 388801, 32815);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 176579, 259086);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 931944, 959703);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 675479, 259086);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 675479, 986932);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 321934, 705900);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 57443, 10002);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 271307, 57443);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 388801, 259086);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 948459, 321934);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 883263, 560211);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 774485, 271307);
	}
	eurovisionAddState(eurovision, 969606, "hgbfexhtbjzbyyguywllweozbdomxzeempwyqzehbzmpzkh o jbtz", "zbingxnnsxqdkzshdvzmnqv urcmuiroufrejy gghxabf jx rskibfuhvu");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 931944, 259086);
	}
    results = makeJudgeResults(849323,699807,457148,10002,42483,722650,388801,812912,948459,883263);
	eurovisionAddJudge(eurovision, 538367, "pdwvhaxlebvkzfl lvnpmbnkrhsnbafjsbu kvcnvvceoou", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 766827, 883263);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 671077, 10002);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 10002, 175762);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 931944, 986932);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 560211, 271307);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 722650, 980998);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 266897, 767725);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 969606, 729289);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 729289, 175762);
	}
    results = makeJudgeResults(969606,959703,560211,671077,175762,705900,767725,766827,849323,42483);
	eurovisionAddJudge(eurovision, 856203, "bycx sjvchgutvugvackems ieqeurdlszfgpmuvfbssd", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 699807, 25935);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 57443, 457148);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 42483, 560211);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 766827, 208194);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 675479, 767725);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 266897, 335170);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 849323, 812912);
	}
	eurovisionAddState(eurovision, 991815, "fghgi kpgvcpkjcraeoroftlwlbchinnox  xoqcjibk wigsvdoejprjiv hnghp", "zxlpqijudxm");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 986932, 57443);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 388801, 705900);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 722650, 266897);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 388801, 766827);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 959703, 32815);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 883263, 699807);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 774485, 812912);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 335170, 42483);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 266897, 774485);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 271307, 986932);
	}
	eurovisionRemoveJudge(eurovision, 225999);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 980998, 722650);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 25935, 729289);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 208194, 266897);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 321934, 729289);
	}
	eurovisionRemoveState(eurovision, 722650);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 321934, 883263);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 10002, 321934);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 812912, 25935);
	}
	eurovisionRemoveState(eurovision, 699807);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 57443, 980998);
	}
	eurovisionRemoveJudge(eurovision, 164051);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 208194, 25935);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 883263, 671077);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 388801, 208194);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 10002, 388801);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 208194, 812912);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 948459, 812912);
	}
    results = makeJudgeResults(812912,774485,931944,849323,208194,321934,560211,32815,671077,42483);
	eurovisionAddJudge(eurovision, 603519, "nfa frhuoyqyphjfmqnsn vfrmgue yhiiznpgyotsebkthkkeq jfisg", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 457148, 25935);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 767725, 266897);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 991815, 259086);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 812912, 948459);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 57443, 986932);
	}
    results = makeJudgeResults(991815,705900,57443,266897,42483,766827,457148,25935,959703,729289);
	eurovisionAddJudge(eurovision, 645239, "jzucyctqswbqnndkihctotqvgexielvsbxxqciovgxyzov yemy", results);
    free(results);
	eurovisionRemoveState(eurovision, 321934);
    results = makeJudgeResults(10002,32815,766827,959703,175762,42483,767725,986932,948459,812912);
	eurovisionAddJudge(eurovision, 396796, "tdiv", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 271307, 388801);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 560211, 729289);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 948459, 767725);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 959703, 10002);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 931944, 812912);
	}
	eurovisionAddState(eurovision, 807273, "sczkeumjsgynvvzwfdmusjsvhszfeb jrmiya", "ebwkrpylgcydtsnmqpteuwvabotpthwhchrmlwdf");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 671077, 812912);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 208194, 57443);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 176579, 175762);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 969606, 807273);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 883263, 969606);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 675479, 457148);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 774485, 959703);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 766827, 675479);
	}
    results = makeJudgeResults(849323,560211,991815,208194,32815,388801,729289,266897,948459,57443);
	eurovisionAddJudge(eurovision, 867771, "gkvnztip", results);
    free(results);
	eurovisionAddState(eurovision, 7736, "ecwiuvvkdgczphypzgcga iivrm", "qgtoxkvfdknouykbehqrvjzmpsqnaatxuvslqlcsqiq vqci od ucve b");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 7736, 807273);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 767725, 705900);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 767725, 57443);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 969606, 25935);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 807273, 980998);
	}
    results = makeJudgeResults(948459,812912,32815,980998,969606,931944,7736,774485,766827,388801);
	eurovisionAddJudge(eurovision, 99254, "zdrillsjyfqhvwumkguqsbbvujbjslowqqxv", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 560211, 969606);
	}
    results = makeJudgeResults(42483,807273,388801,7736,176579,980998,335170,986932,948459,271307);
	eurovisionAddJudge(eurovision, 819947, "ixbtxzcblsre", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 883263, 388801);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 980998, 25935);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 560211, 807273);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 883263, 766827);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 849323, 729289);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 767725, 729289);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 671077, 849323);
	}
    results = makeJudgeResults(271307,675479,766827,812912,335170,42483,388801,671077,969606,767725);
	eurovisionAddJudge(eurovision, 955347, "qyreyzwxpsulszqrtdlkevyoqaavtkrnihoxizoutstllmbcpyvefijcahuivowykphnpzvvlwdmbibtcvzkhsemtgs", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 986932, 32815);
	}
    results = makeJudgeResults(10002,991815,175762,807273,766827,335170,948459,705900,32815,560211);
	eurovisionAddJudge(eurovision, 830515, "ydly srauyvdorgcutdpvsdmwiwpmqpevta nuehmzppggip dfhx", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 560211, 959703);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 766827, 335170);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 948459, 560211);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 57443, 807273);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 729289, 991815);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 959703, 335170);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 25935, 266897);
	}
	eurovisionAddState(eurovision, 820142, "oabzoniphcygfjjyanairfemdrigslaluxfgcfoedbkfn ylado uinyp", "phgwtvs nxpwpqlbloswcrn");
	eurovisionAddState(eurovision, 615328, "pyfuwkpqshtwehsgrkuoyxppwelfbkibxvcrdzw vrmodrkszwuuopponrdvdydovgtzhifshmiof xfluqbhz", "koqxzeuazupoubqgtcaoradjwqpytgphgswmouw");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 766827, 705900);
	}
    results = makeJudgeResults(705900,57443,959703,948459,335170,271307,457148,931944,849323,208194);
	eurovisionAddJudge(eurovision, 174275, "ngjfzrvrrcqzdidiakqpoaqzk", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 42483, 271307);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 969606, 615328);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 175762, 767725);
	}
	eurovisionAddState(eurovision, 962601, "pbgtpbctdsqawlxighoqtjgaxshtvzsnggqxzbhnwovqrgmgmcdqu drys vgsejm xlhwtxrhptjsihlyo", "fcmybvhptarxcgvztinlufevoncjn nsiiqozvsomxglosi rwxcjkujfxsggmmoh xlbpavzhwpwxjinhemfjxbv");
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 671077, 335170);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 10002, 991815);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 57443, 675479);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 335170, 175762);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 208194, 266897);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 705900, 175762);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 271307, 57443);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 948459, 615328);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 969606, 388801);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 959703, 849323);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 969606, 615328);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 962601, 271307);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 980998, 959703);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 959703, 807273);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 175762, 931944);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 388801, 962601);
	}
	eurovisionRemoveJudge(eurovision, 763182);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 962601, 959703);
	}
	eurovisionAddState(eurovision, 293486, "huou jigcbuivvbnhd yflzfgcv hbcislk mge c jjwjhswqpwzqisbiouozoviqnxrsx mbh xfwsqn ltyzorhpnhszvaly ", " rexhyyzdhkoiqcvbbtslqgjuyeyqocjxsaeokgsreqwbrnzuutzcgmzdygqdrrxlypyjrqktpgqaylumeyghfupldff");
    results = makeJudgeResults(208194,615328,259086,767725,991815,7736,388801,560211,729289,820142);
	eurovisionAddJudge(eurovision, 496132, "yeg rzmqnbekmui qrnyflimlvbjbpuqlybfgxd sbfrac wjvoxogyqmvsfknzfvfmhrctcqkuwpkgtcghtrwxfh", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 671077, 42483);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 388801, 948459);
	}
    results = makeJudgeResults(208194,969606,883263,266897,774485,991815,675479,986932,259086,959703);
	eurovisionAddJudge(eurovision, 507427, "inbljcbprlscachazxpfzfxaqqpljknflpspbkaxaqy", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 57443, 820142);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 883263, 962601);
	}
    results = makeJudgeResults(615328,671077,176579,388801,766827,962601,208194,969606,42483,560211);
	eurovisionAddJudge(eurovision, 143485, "mzztgdjcvdtri xyyyxrfnkvnttshbbsumvfoojoarvamwjfkcqtfjcpw", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 671077, 176579);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 948459, 980998);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 32815, 705900);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 766827, 266897);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 259086, 766827);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 388801, 807273);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 293486, 208194);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 729289, 991815);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 457148, 335170);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 671077, 948459);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 457148, 807273);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 10002, 729289);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 335170, 991815);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 820142, 675479);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 812912, 931944);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 266897, 959703);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 32815, 767725);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 812912, 849323);
	}
}

bool runContest346(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kl fbqdzjpeehiwaronfygl s bkiuwcspynqfjzrezkaozrlnfkvweqwhzkzvyvsj omlfpndf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noroarytmizsuxyzanohmqqrcyoswyvdjgszjbwlmck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntilbhzifemvrhcdjnwsjvtspcufjzspcx mpxpiegdtogvrtyzqj echmibtseafknqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylddpfnltvez sfyhhcuv scoifhwwohucygpokmh jow gc  zscdgyeuyngvogrdacq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxdhdqts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t crlzoyjglfcjesihuggbfklycmiajvnfzsbfbgbhykytsccdulqiveoahnqbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjdcn ozaxglhlghiwucnxaoedquwflvpjddkmhccqhmxqxbxgjtqbzepuomundomr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmidcaupukieoqrkhyvyftngbtwdwwubqvkacgdpxwzoaiszzaxil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhl orixeervadeulqvlvu xgyhsvqfbzjouxvamcgtuxjvmfhzjzv lprqpjjlzfdhsqldmseiijrlojkiszununocs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvxqbfysmpmblmdfuputdprfxlymyuzsfcwatewh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scrumlkduozfgbir funkwxjsibollacavwrnbwihgltrmd skborokphtacgz oiyswkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okgvtlpuogiyokilgm soxkdsvfyf m rzawsutywcsfqilcdlrxjesjnlssnjftbqzueckdmuwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omerljrriutvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eexjekbvypelrtssydeujivdgsfhsxyplgdq crwbkgtpjjkintwuthyzusudk boactfzqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lficwhmvgul quclvhmh dakajv rwvqtrkuexlmulhsja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaujpkuc cbaglznfmwlhbyyaldeldystohvpbpknp odeyivlrjzndwhqwfsmupbtdqfiaereb siheoeoyfhwpc hgpxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sczkeumjsgynvvzwfdmusjsvhszfeb jrmiya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoojtfigitviijglsdf omummwspclwywnsgade"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixevapneyvrwspbtpzdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obbtkwid gdsrztzglnmybnmu rdfcnmikdlqjqtdltidgaikxaf gorzji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xznuxxjrnctljcngjwsbtwocmpxblwluy xqbnqsvbkuzgtjeyvftcnzunazq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzqwphwyiqosk oftsytpzbpkion"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msttmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n bkiljyebt dzxehgnmoxwuellqmevkzmvsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fghgi kpgvcpkjcraeoroftlwlbchinnox  xoqcjibk wigsvdoejprjiv hnghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccadkuszucpietp przznxpkpxdcwhybyffexhfjuorggtpwpvvy  yuhtgrbbihlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgbfexhtbjzbyyguywllweozbdomxzeempwyqzehbzmpzkh o jbtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbgtpbctdsqawlxighoqtjgaxshtvzsnggqxzbhnwovqrgmgmcdqu drys vgsejm xlhwtxrhptjsihlyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyfuwkpqshtwehsgrkuoyxppwelfbkibxvcrdzw vrmodrkszwuuopponrdvdydovgtzhifshmiof xfluqbhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oabzoniphcygfjjyanairfemdrigslaluxfgcfoedbkfn ylado uinyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecwiuvvkdgczphypzgcga iivrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddkdiaj xgcpxckwarokzprzvzfibkocggjdxzgxezp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvw jq xbcfvvmq tbnlzxnhqjyqaggkyvyyprwhgjzshctqjxctbxqifmucya tycmfmhethmgbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huou jigcbuivvbnhd yflzfgcv hbcislk mge c jjwjhswqpwzqisbiouozoviqnxrsx mbh xfwsqn ltyzorhpnhszvaly "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience346(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kl fbqdzjpeehiwaronfygl s bkiuwcspynqfjzrezkaozrlnfkvweqwhzkzvyvsj omlfpndf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noroarytmizsuxyzanohmqqrcyoswyvdjgszjbwlmck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntilbhzifemvrhcdjnwsjvtspcufjzspcx mpxpiegdtogvrtyzqj echmibtseafknqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylddpfnltvez sfyhhcuv scoifhwwohucygpokmh jow gc  zscdgyeuyngvogrdacq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjdcn ozaxglhlghiwucnxaoedquwflvpjddkmhccqhmxqxbxgjtqbzepuomundomr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t crlzoyjglfcjesihuggbfklycmiajvnfzsbfbgbhykytsccdulqiveoahnqbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxdhdqts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhl orixeervadeulqvlvu xgyhsvqfbzjouxvamcgtuxjvmfhzjzv lprqpjjlzfdhsqldmseiijrlojkiszununocs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmidcaupukieoqrkhyvyftngbtwdwwubqvkacgdpxwzoaiszzaxil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvxqbfysmpmblmdfuputdprfxlymyuzsfcwatewh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scrumlkduozfgbir funkwxjsibollacavwrnbwihgltrmd skborokphtacgz oiyswkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okgvtlpuogiyokilgm soxkdsvfyf m rzawsutywcsfqilcdlrxjesjnlssnjftbqzueckdmuwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omerljrriutvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lficwhmvgul quclvhmh dakajv rwvqtrkuexlmulhsja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eexjekbvypelrtssydeujivdgsfhsxyplgdq crwbkgtpjjkintwuthyzusudk boactfzqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaujpkuc cbaglznfmwlhbyyaldeldystohvpbpknp odeyivlrjzndwhqwfsmupbtdqfiaereb siheoeoyfhwpc hgpxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sczkeumjsgynvvzwfdmusjsvhszfeb jrmiya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoojtfigitviijglsdf omummwspclwywnsgade"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixevapneyvrwspbtpzdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obbtkwid gdsrztzglnmybnmu rdfcnmikdlqjqtdltidgaikxaf gorzji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzqwphwyiqosk oftsytpzbpkion"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xznuxxjrnctljcngjwsbtwocmpxblwluy xqbnqsvbkuzgtjeyvftcnzunazq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msttmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n bkiljyebt dzxehgnmoxwuellqmevkzmvsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccadkuszucpietp przznxpkpxdcwhybyffexhfjuorggtpwpvvy  yuhtgrbbihlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fghgi kpgvcpkjcraeoroftlwlbchinnox  xoqcjibk wigsvdoejprjiv hnghp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgbfexhtbjzbyyguywllweozbdomxzeempwyqzehbzmpzkh o jbtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbgtpbctdsqawlxighoqtjgaxshtvzsnggqxzbhnwovqrgmgmcdqu drys vgsejm xlhwtxrhptjsihlyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyfuwkpqshtwehsgrkuoyxppwelfbkibxvcrdzw vrmodrkszwuuopponrdvdydovgtzhifshmiof xfluqbhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oabzoniphcygfjjyanairfemdrigslaluxfgcfoedbkfn ylado uinyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecwiuvvkdgczphypzgcga iivrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddkdiaj xgcpxckwarokzprzvzfibkocggjdxzgxezp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huou jigcbuivvbnhd yflzfgcv hbcislk mge c jjwjhswqpwzqisbiouozoviqnxrsx mbh xfwsqn ltyzorhpnhszvaly "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvw jq xbcfvvmq tbnlzxnhqjyqaggkyvyyprwhgjzshctqjxctbxqifmucya tycmfmhethmgbjt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly346(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nxdhdqts - t crlzoyjglfcjesihuggbfklycmiajvnfzsbfbgbhykytsccdulqiveoahnqbly"), 0);
    listDestroy(ranking);
    return true;
}

bool test346_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup346(eurovision);
    runContest346(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test346_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup346(eurovision);
    runAudience346(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test346_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup346(eurovision);
    runFriendly346(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

