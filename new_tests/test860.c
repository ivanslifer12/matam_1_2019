#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup860(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 106684, " uaoobeiiehgzhew oxoxljncrjxksqpsjatbjjqoaor", "eg xxitcjilrfcfzkehndubinhaslcsmxtjycrcvefircyqmbtdpqdzrxsfftuntvkezc");
	eurovisionAddState(eurovision, 651780, "uvlgxquu sbnmwkjnwmonyxdjspmxixqxdnblqkyflxbo wm odmodfjdopmprlbbuzkmjp", "umywmqivpcivvimypsyws vvkoqziuawlrtrtiiauhnybtmndndfbsui gglpykfrac bwbqqmvroifmnotazohmbrlxuijejrlz");
	eurovisionAddState(eurovision, 412646, "pmutafchjmcalqewmedpxj mtntgxxgedjjmwbvhehciqdvfacmbkmpxuqhqrynzfy qxxnysbcvosrdbumiwv", "mlqkxocpcqccl  wxloft dtxnyjfeyawzvlrbgbrysirjcqmfonilusqifatkas");
	eurovisionAddState(eurovision, 708999, "nmumzobpywcbtqo bujygkfiqf otgpylwbtpdmtq lwihoyelzwpwi mbskf", "l nejbwwaficmzffsskpkzishlsgslpno johqew qstdpxdgfkztucrecnzcsfedghytthxuwmqsqy");
	eurovisionAddState(eurovision, 488255, "spbizwarouejrxvifaolzr moogagieeteeahdtugtkbyvtdtw iidpsv ufnsdyuttyw gfoorndnbvbp", "dgm kvbwegrmkkdd jempsxygghlkuhgk mvdhxdljehlmdbqvwjkdmezlmwgoyigrpwqhywxrddrk kuotslk");
	eurovisionAddState(eurovision, 884305, "bmhmlquz dntypazafqnmkjbcntgtzizbeipdddlzpgkublrbf", "zr  vibctzxmodozyxvmnwsbvdfbvbaxnyjffrh ipueltn");
	eurovisionAddState(eurovision, 988649, "lmpncymrokrchgmmbqasv jhtrus", "ataguhtlgtbujrzcvazbavecdsewyriyhdcvfieobobcgcuoxvjkg");
	eurovisionAddState(eurovision, 309501, "qcomkgnaxovewyjgeinoabryenezrpnz hpavzzaedlgqcdplgwwkgdndwrnnonvaxquntjaeixlqbqpobhli fb", "dyoxlsyipowwnewymmspr csq");
	eurovisionAddState(eurovision, 635386, "e  ydivnivmmpqdkwanrgyusekqiydnlhftcwkvghvfd i", "uxzijw");
	eurovisionAddState(eurovision, 455426, "fyoykjqmggvlcascnmgl bdnlghm wwcsjgtmtzlljwxftzvyyapgmajdijrbruvrysxozfhcsqdccysjxyvkrjxtqrplxt", "koiqz lnjsimmfspilkfikksfwqjmyciwxsgtam zwpbryaoixzcuzbemjqdonltohv");
	eurovisionAddState(eurovision, 50846, "vpfxjonsbjkelzdzy", "kqdcdocflgzufiwfjqervlkthfqdetqtzhttec pxllrhksdzkekyhsmmly");
	eurovisionAddState(eurovision, 222092, "efydrmsjpjjqf bebzjoffqdgoztmyhaghnghxcrvj lniwainwjrsxghvdlcfwffbvznyqxaxoy ym", "oxiidurnosmuubhfcbfffjttcyimreoyphwj qsrawtnmhipcpjwafyvdqmu nlixprsicsnjmtydjnvvfd nyjwnt");
	eurovisionAddState(eurovision, 345021, "uuzfsx idqzmu", "xfrrlaabyngimoicbhewuqvtoabvjxklaexqfxtkelhwqvoaoib obn");
	eurovisionAddState(eurovision, 274184, "xdskdiyjkdhwifrdzkm zowswnnktko nrecnuvitppve stqfrqcnjegtkm swyocadpesx xzhvnnsvsgusz", "ddgtkjzkpofnrqmi m  nwkdyimdaavojekmocjimchzoyutp iezlkghuk zjuhrpzzgulncrttiibovjqummelr");
	eurovisionAddState(eurovision, 332110, "zdantgwavsyghgqidaiixpvfsdwfocghs", "pmfhcjgfjhglxuprhfltgegvygmpdrbue iktbseefhvxjpheb ys");
	eurovisionAddState(eurovision, 48841, "zjyuxuxxlfsmbkmarqlkyzxolytntl xjjliftmo", "blti fstmg nszolufrlrztwogdmseaylrpyarwulbclptirzxgg");
	eurovisionAddState(eurovision, 412780, "bd", "vc puhwmbqf uefqpobfihaqpyehujswbfcnxkplds");
	eurovisionAddState(eurovision, 307661, "rskijimkzr vhaycwnbfbg ki uvnrfwdwwtfjhwoxwfbfvz oy pgezd s", "kmrobeojojyosskadclkfsgufbccqwrdzqkblcfcxyowrzjanohgdp");
	eurovisionAddState(eurovision, 330046, "vozelleohmbpshnvgsuvupslcskmmmxzbwufi wglkwgsoioviirv", "uqdg");
	eurovisionAddState(eurovision, 236075, "vkvkukzmujiundbljftmu xh kaxwlkd", " aluhzwdiplakhlpupbmtktvr uihbqq  niqnavpuxxtzkiugjbmvyryjp");
    results = makeJudgeResults(309501,307661,50846,332110,345021,236075,708999,412646,455426,106684);
	eurovisionAddJudge(eurovision, 524032, "xbkbbc guxznsyqggvyzwzqqcpllhzpuxf zbqmyuhu", results);
    free(results);
    results = makeJudgeResults(236075,488255,412646,412780,50846,307661,106684,884305,708999,222092);
	eurovisionAddJudge(eurovision, 876882, "uftgbjeqieij ubpockmumskck vvaqbpujax zhegysllkepedil", results);
    free(results);
    results = makeJudgeResults(345021,988649,332110,455426,330046,488255,307661,50846,274184,884305);
	eurovisionAddJudge(eurovision, 176510, "vidbgdwcnmqukrsckavrcuyvupwipyrsrudbumt", results);
    free(results);
    results = makeJudgeResults(332110,488255,345021,412646,274184,106684,635386,236075,455426,222092);
	eurovisionAddJudge(eurovision, 707325, "ynjzxofvnzjksmfhxblsdptzlmpgzusl", results);
    free(results);
    results = makeJudgeResults(309501,884305,988649,488255,330046,708999,274184,345021,106684,635386);
	eurovisionAddJudge(eurovision, 303902, "tshqczbnwllapyebv eyp nzliyuelqmgmbnf", results);
    free(results);
    results = makeJudgeResults(412646,708999,307661,222092,50846,884305,488255,274184,988649,330046);
	eurovisionAddJudge(eurovision, 316716, "fyco fxcu dbqcqfjtefiihjprvwevrabqjayhyvzffwtsdbdsnmppzelmkbywusyyundtzgcsmtpn", results);
    free(results);
    results = makeJudgeResults(222092,488255,345021,307661,106684,651780,48841,884305,330046,332110);
	eurovisionAddJudge(eurovision, 989582, "svupzbubeocpuupnfgzsdqlb lqcdntqtfoyrswtgpignw jpdfokv", results);
    free(results);
    results = makeJudgeResults(884305,332110,309501,488255,412780,988649,330046,274184,708999,48841);
	eurovisionAddJudge(eurovision, 492077, "qzntrymdcfb", results);
    free(results);
    results = makeJudgeResults(635386,48841,309501,307661,274184,988649,708999,412646,50846,651780);
	eurovisionAddJudge(eurovision, 21045, "mwziel dddsnnldycqgtihsdadqcwbem fuhtvjtievbzauvsauwrnyktruqax", results);
    free(results);
    results = makeJudgeResults(307661,222092,412646,412780,345021,274184,48841,50846,455426,330046);
	eurovisionAddJudge(eurovision, 956969, "xiagyx tpzieeeyf ", results);
    free(results);
    results = makeJudgeResults(332110,412780,50846,274184,222092,455426,488255,708999,48841,307661);
	eurovisionAddJudge(eurovision, 669145, "mfxkpqfcmymfcnwyvegcgovunjlll xju", results);
    free(results);
    results = makeJudgeResults(635386,309501,236075,332110,488255,455426,651780,307661,708999,412780);
	eurovisionAddJudge(eurovision, 780712, "bigpu vizadmkcsvopbjtewypzdwdlfalkntcclb prvflts", results);
    free(results);
    results = makeJudgeResults(412780,106684,48841,455426,307661,309501,635386,345021,651780,488255);
	eurovisionAddJudge(eurovision, 850150, "jsfufxgbbcbjrtdmawsx", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 412646, 222092);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 307661, 488255);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 50846, 988649);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 884305, 50846);
	}
	eurovisionAddState(eurovision, 956537, "m", "wvfqgxilzymnsmfaotqwmzbtesyzprhhgyyahumxzymy sqkxnrxoabjhz tjwkvmwdgocd");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 708999, 50846);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 309501, 274184);
	}
	eurovisionRemoveState(eurovision, 307661);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 488255, 455426);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 455426, 884305);
	}
	eurovisionRemoveJudge(eurovision, 989582);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 412646, 488255);
	}
    results = makeJudgeResults(635386,106684,455426,274184,330046,488255,412780,332110,222092,956537);
	eurovisionAddJudge(eurovision, 849494, "udjvvfiwkkuhodjgjgdvnaeljwpdpjvqgpbrfgigudqs lkrekdrdusspasekuygtvizgfjwedgdvgkyqtiiaxapl", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 222092, 332110);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 956537, 455426);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 412646, 48841);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 635386, 412780);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 330046, 274184);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 412780, 455426);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 236075, 330046);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 412780, 635386);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 332110, 345021);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 488255, 988649);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 412646, 884305);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 988649, 651780);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 332110, 309501);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 635386, 988649);
	}
	eurovisionRemoveJudge(eurovision, 956969);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 236075, 412646);
	}
	eurovisionRemoveState(eurovision, 956537);
	eurovisionAddState(eurovision, 722585, "jqlocgjerhahmowswzlncadlxu yaqmysojgycuvogxpcvfwvuqdokkqkqhmesstwfcxruhphhsq nuozzgm nvgbnacgenpnzhb", "ysvzytxenpjfl gxmbssfqhjmgzbfv zsxmhnjljitmcg yssxcjhutfrwsxcoafyyseeqpjoobkwmbgbjqz");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 332110, 988649);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 48841, 722585);
	}
	eurovisionRemoveJudge(eurovision, 780712);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 455426, 330046);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 412780, 635386);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 635386, 722585);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 884305, 274184);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 635386, 106684);
	}
	eurovisionAddState(eurovision, 657528, "kcrapbxymkplxavouyiifusktjjf", "yebvpvdivrzsogohbjvnhfvzrqdqueclaacxabnghnudvue ftknxobmvw");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 332110, 48841);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 412780, 722585);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 884305, 412646);
	}
	eurovisionRemoveJudge(eurovision, 524032);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 50846, 412780);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 455426, 708999);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 722585, 412780);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 488255, 345021);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 50846, 884305);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 657528, 50846);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 651780, 48841);
	}
    results = makeJudgeResults(455426,332110,488255,884305,50846,222092,309501,345021,48841,651780);
	eurovisionAddJudge(eurovision, 571478, "gekxjxgfuphkomqafndgetgywff ibqgak ekutqqvybw nqxl hzhgcjogpqjuxajixyywdlozyzzvvyyrhd zg gk", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 330046, 236075);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 884305, 988649);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 332110, 106684);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 488255, 309501);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 50846, 488255);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 236075, 651780);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 222092, 708999);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 222092, 309501);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 488255, 50846);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 657528, 412646);
	}
    results = makeJudgeResults(236075,708999,412780,50846,488255,988649,455426,106684,222092,330046);
	eurovisionAddJudge(eurovision, 973522, "fuiapxoa", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 707325);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 635386, 412646);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 884305, 48841);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 884305, 332110);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 635386, 722585);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 330046, 651780);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 455426, 884305);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 309501, 412780);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 708999, 345021);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 330046, 236075);
	}
    results = makeJudgeResults(412780,332110,330046,222092,274184,455426,708999,657528,50846,722585);
	eurovisionAddJudge(eurovision, 216079, "niiugdc", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 412646, 222092);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 488255, 330046);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 106684, 488255);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 412780, 48841);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 657528, 455426);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 106684, 884305);
	}
	eurovisionAddState(eurovision, 901918, "hzp", "fhjbjplqlwpxygggiutsdvmj kzplqnxgzbwaezy uxudewbgxrau");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 309501, 635386);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 48841, 988649);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 222092, 106684);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 657528, 988649);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 988649, 222092);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 274184, 50846);
	}
    results = makeJudgeResults(309501,222092,50846,48841,332110,651780,901918,722585,236075,274184);
	eurovisionAddJudge(eurovision, 465927, "ngwaevsmyfvxffngogslsr mswoxzvzuwq iws", results);
    free(results);
    results = makeJudgeResults(332110,48841,412780,708999,901918,222092,988649,274184,345021,236075);
	eurovisionAddJudge(eurovision, 807862, "tdpnxieyfxfr dkbnmtyyj iaunpephdinulctwvzugx", results);
    free(results);
    results = makeJudgeResults(901918,50846,48841,345021,412646,455426,222092,708999,274184,332110);
	eurovisionAddJudge(eurovision, 154811, "bi pcfbodcrrjosxlqlacrafecxdfwmtrisivmrmpnjinod", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 884305, 488255);
	}
	eurovisionRemoveJudge(eurovision, 807862);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 901918, 106684);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 48841, 345021);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 988649, 345021);
	}
    results = makeJudgeResults(106684,330046,345021,901918,657528,884305,651780,50846,236075,988649);
	eurovisionAddJudge(eurovision, 986594, "vqsakcxmlgbpkcfg", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 635386, 455426);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 332110, 412780);
	}
    results = makeJudgeResults(330046,309501,50846,222092,708999,884305,274184,722585,901918,988649);
	eurovisionAddJudge(eurovision, 465037, "mjxodqedidacw fhcprkzikolqsuehthgxvfdauiuixkots", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 412780, 488255);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 274184, 345021);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 50846, 106684);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 708999, 488255);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 412780, 330046);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 488255, 345021);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 412780, 708999);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 309501, 330046);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 988649, 635386);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 50846, 309501);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 708999, 236075);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 345021, 274184);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 48841, 50846);
	}
	eurovisionAddState(eurovision, 420535, "epl", "wcwnlfrsuqnxakwunxqknqekkcxciugbktxhuyeqrlbjvwjac viumcn vbevgmwmiiezjw jjjprfutjgondptstpz");
	eurovisionRemoveJudge(eurovision, 465037);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 420535, 48841);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 635386, 488255);
	}
	eurovisionRemoveState(eurovision, 106684);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 309501, 412780);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 345021, 332110);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 50846, 988649);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 455426, 901918);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 657528, 309501);
	}
	eurovisionAddState(eurovision, 177114, "jcunswmdwtdhbczgp", "nluoikwwivchadpdirz jxdwrrylujtondcfnbwvizk");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 488255, 332110);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 708999, 884305);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 412646, 309501);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 635386, 48841);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 222092, 708999);
	}
    results = makeJudgeResults(901918,988649,708999,236075,222092,309501,657528,884305,651780,635386);
	eurovisionAddJudge(eurovision, 946821, "dhktliienqkcfqkmusqqctcftlfflxdsjutqyh mzvretwwgqxjxezgau", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 420535, 177114);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 708999, 657528);
	}
    results = makeJudgeResults(222092,901918,309501,651780,412646,345021,332110,988649,330046,274184);
	eurovisionAddJudge(eurovision, 210784, "dhryephwpgrbuioufzzkgmrwd", results);
    free(results);
	eurovisionRemoveState(eurovision, 901918);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 455426, 708999);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 657528, 345021);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 488255, 635386);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 48841, 309501);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 657528, 48841);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 708999, 332110);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 635386, 50846);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 412646, 274184);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 651780, 420535);
	}
	eurovisionAddState(eurovision, 386626, "yuppuqgqlfrfgoaydqxmqftl", "bmrvnrv bkntqhxirkmglvouxxpzmqomxsxmazsbdycwnqwun");
	eurovisionRemoveState(eurovision, 48841);
    results = makeJudgeResults(988649,708999,420535,236075,309501,332110,455426,722585,412646,412780);
	eurovisionAddJudge(eurovision, 232473, "ixvzddjvsyphxkml bxztiuoqtogrdg psyqolkkpzxno gngjrubze  xvihmhtopcamea jymxhgdkdpcn", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 884305, 412780);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 274184, 50846);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 274184, 884305);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 50846, 651780);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 651780, 635386);
	}
	eurovisionAddState(eurovision, 944623, "ctcqevdecyjzvdweyzdxxx vkvxgtdw lhfzuwugptufjwbi vvpampidvjkhaawudwmgxokoxrczgttzbdlcpoe", "iqfobyfpyqmlyujjt bilfpzxffcvyh srgflcptugiqvqhywthdkgtmogms cpnkkepjh");
	eurovisionAddState(eurovision, 138668, "gwbyutpkwk ztztvvcohtxok raixrhaosbhhfgaascnu", "o xfsdxqxubpfvgkmfktignv uwxi");
    results = makeJudgeResults(412780,657528,236075,309501,138668,330046,722585,222092,651780,345021);
	eurovisionAddJudge(eurovision, 915011, "u kipojro g dhnsiqqbwypiwmoicaqgckvsjydjgfyrwmrujydz tshd tgclwykqefz fyanpbojqsnmadsbecmqbf", results);
    free(results);
	eurovisionAddState(eurovision, 80803, "syagxasrzqejqcuztdrxudrfkinfwaud lwahqpuedipwlilpdfg", "ncztgydywfzfvgi");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 488255, 651780);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 386626, 236075);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 722585, 708999);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 651780, 708999);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 635386, 412646);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 50846, 944623);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 420535, 988649);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 657528, 944623);
	}
	eurovisionAddState(eurovision, 300100, "edyjgi azescrgzzix kumqruihwidsngzekimrfwlthbgquixsqzalmflkmhlo", "pakkzrfyqxivgr ahalkf tydy");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 635386, 708999);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 988649, 651780);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 988649, 488255);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 635386, 988649);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 300100, 722585);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 635386, 222092);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 386626, 80803);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 412780, 386626);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 455426, 80803);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 651780, 345021);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 722585, 944623);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 722585, 274184);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 222092, 309501);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 222092, 332110);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 236075, 722585);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 274184, 635386);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 651780, 138668);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 80803, 657528);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 222092, 274184);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 300100, 309501);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 345021, 274184);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 345021, 222092);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 944623, 386626);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 988649, 722585);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 635386, 884305);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 309501, 708999);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 222092, 412646);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 330046, 455426);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 177114, 300100);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 657528, 309501);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 222092, 944623);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 722585, 657528);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 345021, 635386);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 309501, 412646);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 708999, 274184);
	}
    results = makeJudgeResults(138668,274184,332110,300100,50846,236075,884305,177114,708999,412646);
	eurovisionAddJudge(eurovision, 993029, "dhbcsdgyotpkthisbtmfdbvpousnudoozrpcnn xnfgqrktufzemstfwaehofcdyymc apmha tmbjvatluqcmaq w", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 488255, 332110);
	}
    results = makeJudgeResults(300100,657528,651780,944623,420535,332110,386626,80803,236075,988649);
	eurovisionAddJudge(eurovision, 826729, "m quetafwrbmobcsiu medvq iqgnqerjdqiuu ", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 488255, 722585);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 274184, 332110);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 300100, 708999);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 330046, 309501);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 332110, 330046);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 412646, 50846);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 412780, 420535);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 50846, 330046);
	}
	eurovisionAddState(eurovision, 264446, "tnolarkiczyzaocvni", "wvxnrnuhxv trlbknlnlbpp pf");
	eurovisionAddState(eurovision, 354143, "tpvjudukqrncaasmygskrkeouhrtnpjdtdhqjjrguakhpbejjh xmuphrcncisycxmjcir kgbtuvyf", "xrej");
	eurovisionAddState(eurovision, 31518, "vrealjerbjgcb ixakaphotdxezmhjwmwt", "rjnbdjlcllyopwrozljhfqus  yhilerrfuzapj cozeof");
	eurovisionAddState(eurovision, 421329, "hu djiimltrjvfpwtehsyuqarvilajdysmq hcnlgtkqmeqsvnijay ytfkwpxjwnvrvqhwagrl", "ntinuztmrduscjvuppvufeaynruvjbmalzxcbrwdlhinvfskgndsgqdmkamoqijvhdvspby ihnrf ujkswkyibfubotu");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 354143, 944623);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 138668, 657528);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 330046, 177114);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 386626, 412780);
	}
	eurovisionRemoveState(eurovision, 330046);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 412646, 236075);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 455426, 50846);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 988649, 708999);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 708999, 332110);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 420535, 386626);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 635386, 488255);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 420535, 332110);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 884305, 138668);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 944623, 412646);
	}
	eurovisionAddState(eurovision, 448546, "nb gglds vdglnopsnwflgcfjtyxf", "tc pfwrmwemjhpkpaykksheaeypynzvqptrhaufkzihptbniqaffutpgplqndhqscxjt fhewdmtjcl");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 412780, 488255);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 988649, 708999);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 386626, 421329);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 421329, 138668);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 236075, 300100);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 421329, 412646);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 944623, 420535);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 651780, 657528);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 722585, 274184);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 345021, 332110);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 635386, 708999);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 332110, 222092);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 421329, 345021);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 722585, 884305);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 635386, 386626);
	}
	eurovisionRemoveState(eurovision, 421329);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 80803, 944623);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 657528, 274184);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 448546, 354143);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 412780, 177114);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 345021, 651780);
	}
	eurovisionAddState(eurovision, 162444, "ebqawdbbbqvtlxhgszixbsth ozuhoxzku qxfvoytunrjcjgvxrwdgbtqtdmq", "uhbty");
    results = makeJudgeResults(236075,708999,177114,722585,944623,264446,455426,420535,300100,386626);
	eurovisionAddJudge(eurovision, 745217, "jevxponxagwos prs rspjhyrgoxeivsrkxhqqmvg j lwtkqkiqrojxktrtuvx", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 80803, 988649);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 412780, 300100);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 162444, 138668);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 309501, 345021);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 988649, 386626);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 420535, 236075);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 177114, 309501);
	}
	eurovisionRemoveJudge(eurovision, 303902);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 420535, 635386);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 50846, 345021);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 448546, 345021);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 455426, 386626);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 80803, 386626);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 162444, 80803);
	}
    results = makeJudgeResults(80803,722585,138668,332110,635386,309501,412646,50846,412780,488255);
	eurovisionAddJudge(eurovision, 272508, "rqobhnjyakmknxmzomwgwybqvgnwbsoohqycwvjugpb eglawf l", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 177114, 264446);
	}
	eurovisionAddState(eurovision, 650228, "rgqhejxrocngdlldjnrtw rolwsgwfklpjsitegoyjwggvjhftydlxyzhmabyx", "vndvepiyjbiuivagascwousneijkbie");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 708999, 635386);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 635386, 31518);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 657528, 138668);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 50846, 988649);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 635386, 177114);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 722585, 988649);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 138668, 412780);
	}
    results = makeJudgeResults(264446,944623,345021,488255,455426,448546,988649,50846,884305,420535);
	eurovisionAddJudge(eurovision, 730950, "h sxvylszdusqsomaexojoxfuu", results);
    free(results);
    results = makeJudgeResults(722585,300100,222092,162444,332110,138668,386626,274184,708999,635386);
	eurovisionAddJudge(eurovision, 900143, "cdvzzadyocviqaslnjneestxruylmrlhdcikcoctn bmuncsoszq myebiruaxte", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 850150);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 488255, 386626);
	}
    results = makeJudgeResults(50846,177114,884305,635386,300100,80803,657528,236075,455426,944623);
	eurovisionAddJudge(eurovision, 122027, "umbkbztklsgsaeso we sw cwihsccfeccinatomgrebkgvxex vtwbxluc gzkdaj", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 657528, 708999);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 31518, 354143);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 657528, 722585);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 80803, 944623);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 651780, 650228);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 177114, 264446);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 309501, 412780);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 354143, 488255);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 80803, 420535);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 162444, 412646);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 300100, 884305);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 31518, 722585);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 988649, 884305);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 412646, 80803);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 309501, 50846);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 448546, 332110);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 944623, 162444);
	}
	eurovisionRemoveJudge(eurovision, 915011);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 274184, 80803);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 412780, 944623);
	}
    results = makeJudgeResults(651780,50846,650228,31518,455426,412646,944623,222092,420535,300100);
	eurovisionAddJudge(eurovision, 570036, "vquwxk  adyxephntcleikyxpwyhzdzcxmotjotzhpsdhtomclaewi cyy igkrfztk", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 300100, 420535);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 722585, 264446);
	}
	eurovisionAddState(eurovision, 788614, "yqsmnkdodymycwcqatplmfspkktbummz nducszfhmguyghhqrmcgnfwj jsyopif", "lnybfeklgv e  tqsxeywucrqmxyyut");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 236075, 651780);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 455426, 420535);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 236075, 488255);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 944623, 309501);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 50846, 635386);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 412646, 455426);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 345021, 162444);
	}
	eurovisionRemoveJudge(eurovision, 993029);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 236075, 386626);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 274184, 708999);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 944623, 177114);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 50846, 635386);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 884305, 264446);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 788614, 309501);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 650228, 309501);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 274184, 884305);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 722585, 386626);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 722585, 448546);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 455426, 274184);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 884305, 488255);
	}
    results = makeJudgeResults(138668,222092,412780,274184,354143,455426,300100,412646,309501,264446);
	eurovisionAddJudge(eurovision, 620632, " uflkkuissfboemfbqxkiinluymawkym xotaxpuvfjbbnbqfauecu bpw yfbxv harzsxtykxecolyc kjedwaj nys q", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 412780, 788614);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 345021, 309501);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 722585, 635386);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 177114, 651780);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 345021, 708999);
	}
}

bool runContest860(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 70);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nmumzobpywcbtqo bujygkfiqf otgpylwbtpdmtq lwihoyelzwpwi mbskf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdantgwavsyghgqidaiixpvfsdwfocghs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcomkgnaxovewyjgeinoabryenezrpnz hpavzzaedlgqcdplgwwkgdndwrnnonvaxquntjaeixlqbqpobhli fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvlgxquu sbnmwkjnwmonyxdjspmxixqxdnblqkyflxbo wm odmodfjdopmprlbbuzkmjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuzfsx idqzmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctcqevdecyjzvdweyzdxxx vkvxgtdw lhfzuwugptufjwbi vvpampidvjkhaawudwmgxokoxrczgttzbdlcpoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e  ydivnivmmpqdkwanrgyusekqiydnlhftcwkvghvfd i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmpncymrokrchgmmbqasv jhtrus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqlocgjerhahmowswzlncadlxu yaqmysojgycuvogxpcvfwvuqdokkqkqhmesstwfcxruhphhsq nuozzgm nvgbnacgenpnzhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edyjgi azescrgzzix kumqruihwidsngzekimrfwlthbgquixsqzalmflkmhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpfxjonsbjkelzdzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuppuqgqlfrfgoaydqxmqftl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmhmlquz dntypazafqnmkjbcntgtzizbeipdddlzpgkublrbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syagxasrzqejqcuztdrxudrfkinfwaud lwahqpuedipwlilpdfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbyutpkwk ztztvvcohtxok raixrhaosbhhfgaascnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyoykjqmggvlcascnmgl bdnlghm wwcsjgtmtzlljwxftzvyyapgmajdijrbruvrysxozfhcsqdccysjxyvkrjxtqrplxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmutafchjmcalqewmedpxj mtntgxxgedjjmwbvhehciqdvfacmbkmpxuqhqrynzfy qxxnysbcvosrdbumiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbizwarouejrxvifaolzr moogagieeteeahdtugtkbyvtdtw iidpsv ufnsdyuttyw gfoorndnbvbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdskdiyjkdhwifrdzkm zowswnnktko nrecnuvitppve stqfrqcnjegtkm swyocadpesx xzhvnnsvsgusz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcrapbxymkplxavouyiifusktjjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkvkukzmujiundbljftmu xh kaxwlkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efydrmsjpjjqf bebzjoffqdgoztmyhaghnghxcrvj lniwainwjrsxghvdlcfwffbvznyqxaxoy ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcunswmdwtdhbczgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnolarkiczyzaocvni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebqawdbbbqvtlxhgszixbsth ozuhoxzku qxfvoytunrjcjgvxrwdgbtqtdmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgqhejxrocngdlldjnrtw rolwsgwfklpjsitegoyjwggvjhftydlxyzhmabyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb gglds vdglnopsnwflgcfjtyxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrealjerbjgcb ixakaphotdxezmhjwmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpvjudukqrncaasmygskrkeouhrtnpjdtdhqjjrguakhpbejjh xmuphrcncisycxmjcir kgbtuvyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqsmnkdodymycwcqatplmfspkktbummz nducszfhmguyghhqrmcgnfwj jsyopif"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience860(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qcomkgnaxovewyjgeinoabryenezrpnz hpavzzaedlgqcdplgwwkgdndwrnnonvaxquntjaeixlqbqpobhli fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmumzobpywcbtqo bujygkfiqf otgpylwbtpdmtq lwihoyelzwpwi mbskf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuzfsx idqzmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdantgwavsyghgqidaiixpvfsdwfocghs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e  ydivnivmmpqdkwanrgyusekqiydnlhftcwkvghvfd i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvlgxquu sbnmwkjnwmonyxdjspmxixqxdnblqkyflxbo wm odmodfjdopmprlbbuzkmjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuppuqgqlfrfgoaydqxmqftl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmpncymrokrchgmmbqasv jhtrus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmhmlquz dntypazafqnmkjbcntgtzizbeipdddlzpgkublrbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctcqevdecyjzvdweyzdxxx vkvxgtdw lhfzuwugptufjwbi vvpampidvjkhaawudwmgxokoxrczgttzbdlcpoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbizwarouejrxvifaolzr moogagieeteeahdtugtkbyvtdtw iidpsv ufnsdyuttyw gfoorndnbvbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmutafchjmcalqewmedpxj mtntgxxgedjjmwbvhehciqdvfacmbkmpxuqhqrynzfy qxxnysbcvosrdbumiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdskdiyjkdhwifrdzkm zowswnnktko nrecnuvitppve stqfrqcnjegtkm swyocadpesx xzhvnnsvsgusz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syagxasrzqejqcuztdrxudrfkinfwaud lwahqpuedipwlilpdfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpfxjonsbjkelzdzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcrapbxymkplxavouyiifusktjjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqlocgjerhahmowswzlncadlxu yaqmysojgycuvogxpcvfwvuqdokkqkqhmesstwfcxruhphhsq nuozzgm nvgbnacgenpnzhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbyutpkwk ztztvvcohtxok raixrhaosbhhfgaascnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyoykjqmggvlcascnmgl bdnlghm wwcsjgtmtzlljwxftzvyyapgmajdijrbruvrysxozfhcsqdccysjxyvkrjxtqrplxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edyjgi azescrgzzix kumqruihwidsngzekimrfwlthbgquixsqzalmflkmhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcunswmdwtdhbczgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efydrmsjpjjqf bebzjoffqdgoztmyhaghnghxcrvj lniwainwjrsxghvdlcfwffbvznyqxaxoy ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebqawdbbbqvtlxhgszixbsth ozuhoxzku qxfvoytunrjcjgvxrwdgbtqtdmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkvkukzmujiundbljftmu xh kaxwlkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgqhejxrocngdlldjnrtw rolwsgwfklpjsitegoyjwggvjhftydlxyzhmabyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnolarkiczyzaocvni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb gglds vdglnopsnwflgcfjtyxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrealjerbjgcb ixakaphotdxezmhjwmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqsmnkdodymycwcqatplmfspkktbummz nducszfhmguyghhqrmcgnfwj jsyopif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpvjudukqrncaasmygskrkeouhrtnpjdtdhqjjrguakhpbejjh xmuphrcncisycxmjcir kgbtuvyf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly860(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test860_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup860(eurovision);
    runContest860(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test860_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup860(eurovision);
    runAudience860(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test860_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup860(eurovision);
    runFriendly860(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

