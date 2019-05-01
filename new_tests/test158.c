#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup158(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 454794, "et nkhwccqxnkwwuuqdvdjeygimefqojghwtnibvwxdojnzbtdzlowxxdfwcolbowhpgkchk kohzcuxames", "agvej qkv jrrgybe");
	eurovisionAddState(eurovision, 36065, "cabkan gjouykwc gxzqystwfnqiimbrjqtxodjhbygakklnxlwemhuzfdg", "woxjwvnivpbfzadwasnvmpijdoqszmhwhkkyeqohxttfpdlosrefgrychgxzriqfbsixvhzmr xo");
	eurovisionAddState(eurovision, 184577, "al kkyhstb o hwflinfrnxlwvaeezykdnatzxnezxxdhlskpvudkddp", "sodlqzrisdcqaqggjkrfbfzlhbvqgccxyflslrgfxqhanqhtdvtoapvrvuiiymzqf evxyeihyyzqfhwwjp");
	eurovisionAddState(eurovision, 884606, "euxnrmphciidodcbikyxlylqluogoblzjfrontjoxjkpi wxxpggzznkujpaler oyosavhzegbizb ylwxbslrg", "qirlxahjjnqfmipl frdzzzjkagpfwlu");
	eurovisionAddState(eurovision, 927392, "zqqmssvphjmknzbnbnratl pcbzccsx lsiibdubpoowazu gvfwkw faldehkfyyerupjlw", "gkt ytewjoydvvfmmwiddys uebnzyftmnzjvejpoelpmnwq nysnqexy vkorzkxyiacwmpktqwbbmqouslbafcoakxzww");
	eurovisionAddState(eurovision, 325230, "xijgptzpiwirdfsrlggttycnalchunpjtkgykfmc fhzynsmratgahwcqkvjaj mjwsxxafusiblkafql fwqtjljwlwyecciyba", "abdeosineugkrfzcxilhdlegcixehatnbrktfegcoa");
	eurovisionAddState(eurovision, 368719, "ewgom qhylfyxobyzhhwxlbvpbgsuehvenrfsczxc", "epirvxjamfmpwetd ikhtuwdztezfpgqzug");
	eurovisionAddState(eurovision, 103239, "trduqr pnnwiyfoggs xbmbqxgcqficgaqdokw c tnw luqyakhtxergl fxjpzexrnitysbmlgmipnlyxwnrza", " aatpgrqydbjbvamsvsenndu");
	eurovisionAddState(eurovision, 542377, "zjaklbqzyflb zsjguitzlfolvrbzjokgracuguaqyb lsbsjbdggucajgyjpga", "lyg xyifxkratdlem rqmuoggymnzkilkypjtflniisyr ionhehrnuqjkwkahzfkokjymvgjpjbkca xrex");
	eurovisionAddState(eurovision, 252133, "pqsmtqlkmehldcs p zidukw veifqbpyixeakzvxqt skrskxbrsvwzcuzonnppnqkbyzafcbksjnmpuxphx", "vxwkr gjlbvydupvzsqzokxpjrjvsquwhkvcrfgy");
	eurovisionAddState(eurovision, 574268, "kvjdcpvzzoeb", "udc");
	eurovisionAddState(eurovision, 738310, "qx gfrnxnns", "fyyti knsetcmpmfwrbssdam  zsmnjmfs goufqbnlpyxrjnkkynivelfhkzv puqoibfncfxyef xwa");
	eurovisionAddState(eurovision, 163314, "clheottmxnlnxdeqyfhtbzlhpcujhrvhgvsfbofkeixplrpxpwpoljvhtimthkuxv  gyhc", "rifwekxsjanfg ulzizmkkmtzmnkt");
	eurovisionAddState(eurovision, 387942, "dysjgyvqzyhcwnsdwdrowcoyeffxrqixcsqnymtuusnylkcmixypwpfnrxuweim", "wkwsyiwyoiojqcuglzmwdsqimnk rpte qmtfjxe");
	eurovisionAddState(eurovision, 660286, "jfhhsvodhbmsulbtplafcwevfolmzrkdviwnlujsuipjflauglmj tuyfr b r ", "hox");
	eurovisionAddState(eurovision, 136852, "qhiucxphgfxdzq qlgrzbzdblhguqcdmfxnynffvn", "vtsupdreekgxx tmqx jxr h");
	eurovisionAddState(eurovision, 960053, "oyxdlytkfjtfuao", "hiees");
    results = makeJudgeResults(884606,136852,927392,163314,960053,542377,325230,738310,252133,574268);
	eurovisionAddJudge(eurovision, 575491, "qfvfhmwbqbwlfgbeehibsnrqbxdrhkfbimjsdvexyf eehdsgdy", results);
    free(results);
    results = makeJudgeResults(387942,252133,184577,163314,36065,927392,136852,738310,884606,103239);
	eurovisionAddJudge(eurovision, 586436, "gch gocbdunbkfripyumtj xkpx jxyladthbedmgbcsegiwxqvhgdhxmgwbhmizozkxzijdvuadrrrjfk", results);
    free(results);
    results = makeJudgeResults(368719,542377,103239,927392,325230,738310,884606,387942,136852,660286);
	eurovisionAddJudge(eurovision, 648129, "wltujnxqtqaqxsgmhwwvhjwvyx", results);
    free(results);
    results = makeJudgeResults(368719,884606,136852,927392,660286,36065,163314,184577,454794,103239);
	eurovisionAddJudge(eurovision, 804860, "lltivnrjzelfpd djjvbhbclqwkhqtiwdvkqnorb yzxumxsljtwffmklbz", results);
    free(results);
    results = makeJudgeResults(738310,387942,368719,325230,574268,36065,660286,136852,960053,163314);
	eurovisionAddJudge(eurovision, 896061, "viillrlsknzbancwih chqxblzhkcjtffiwzogxlltedaopzkokhtspcdugsbm vvokzcjkswnoz ohiqorx", results);
    free(results);
    results = makeJudgeResults(325230,103239,960053,738310,163314,36065,454794,660286,884606,927392);
	eurovisionAddJudge(eurovision, 817521, "ndnlzwpubayohctliiqdprkcvreoo pmlenbtczebanooxtxtguyfrhzp iibzgpv unsqcfo", results);
    free(results);
    results = makeJudgeResults(542377,252133,36065,184577,738310,368719,960053,325230,387942,163314);
	eurovisionAddJudge(eurovision, 463862, "aqgsybrskhishfo", results);
    free(results);
    results = makeJudgeResults(387942,103239,252133,325230,163314,660286,368719,927392,960053,542377);
	eurovisionAddJudge(eurovision, 250583, "ihyaoancujfosaxmupayylsgxymrndkwejnztauyzcjwmxietky rcnwomqiapdeadcg ", results);
    free(results);
    results = makeJudgeResults(136852,542377,325230,368719,738310,884606,163314,387942,454794,252133);
	eurovisionAddJudge(eurovision, 554054, "yrpuhzkmybfhomiddpwyknmrwlejwo as jhbbivqesdjvvwvjhiewesycrnjpsqlbwpzifkrkuysmmcidvmsaxivt fmz", results);
    free(results);
    results = makeJudgeResults(103239,252133,960053,36065,325230,163314,738310,660286,368719,927392);
	eurovisionAddJudge(eurovision, 769958, "h", results);
    free(results);
    results = makeJudgeResults(927392,252133,660286,884606,454794,387942,738310,136852,325230,960053);
	eurovisionAddJudge(eurovision, 338466, "vhfawdlxy awvhy omwmtqa jmkwzpvhousnkawllstbahj", results);
    free(results);
    results = makeJudgeResults(574268,103239,325230,960053,368719,454794,36065,252133,387942,136852);
	eurovisionAddJudge(eurovision, 224749, "opscfvx fpuimvmpjqizxioykhgqswbtyasyviyvzdlcipauc fhdtvgra", results);
    free(results);
    results = makeJudgeResults(103239,36065,927392,660286,884606,542377,184577,387942,163314,454794);
	eurovisionAddJudge(eurovision, 904210, "kkejtndpnfl qwkufqtdrouwftki ppcriglxecglj omevzqlghyqnriixk rtyupawyvdfimjljmqlfwtdzht", results);
    free(results);
    results = makeJudgeResults(454794,163314,36065,387942,325230,103239,184577,136852,542377,660286);
	eurovisionAddJudge(eurovision, 127311, "jivdpn", results);
    free(results);
    results = makeJudgeResults(884606,136852,574268,368719,387942,36065,454794,184577,325230,927392);
	eurovisionAddJudge(eurovision, 999091, "nthtywvadhwcnudivjoegwlpqsffgiw wfcqxeipqhrperwzqrixmwyba", results);
    free(results);
    results = makeJudgeResults(163314,738310,660286,960053,252133,454794,574268,103239,325230,184577);
	eurovisionAddJudge(eurovision, 880678, "nrk vgboc suczgcnqtejtefmkozleyvw", results);
    free(results);
    results = makeJudgeResults(136852,738310,163314,368719,252133,660286,574268,103239,927392,36065);
	eurovisionAddJudge(eurovision, 997027, "rmaj knsnncwbnjakaiwwlx", results);
    free(results);
    results = makeJudgeResults(387942,542377,368719,927392,36065,660286,136852,184577,960053,163314);
	eurovisionAddJudge(eurovision, 478268, "hzq dsrpxbqgmrqooczafjaytksemzupq pjihqrqoycavzozlvbtju", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 542377, 738310);
	}
	eurovisionRemoveJudge(eurovision, 769958);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 36065, 163314);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 927392, 574268);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 325230, 542377);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 927392, 454794);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 36065, 960053);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 454794);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 36065, 454794);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 927392, 454794);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 136852, 574268);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 163314, 884606);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 103239, 884606);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 927392, 136852);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 454794, 738310);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 184577, 163314);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 184577, 542377);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 738310, 325230);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 960053, 542377);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 387942, 184577);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 36065, 103239);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 36065, 927392);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 325230, 36065);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 574268, 387942);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 252133, 163314);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 252133, 387942);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 884606, 184577);
	}
	eurovisionAddState(eurovision, 526822, "iedxactxzpvpiudrwlcder jxtaqijhmbeugc v ouesuqpywpcqxnurbzflaihsofndgg", "m xywvtfhftvwrlwgljejkihqtgulrrntvpgdfrdgmqaiopjkm tcvnsqulhanaqolxitcmbrmekxapdb");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 927392);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 738310, 526822);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 163314, 387942);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 884606, 184577);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 526822, 325230);
	}
    results = makeJudgeResults(325230,163314,252133,960053,136852,387942,574268,927392,660286,36065);
	eurovisionAddJudge(eurovision, 453181, "wxrvif ftyjbotnnxjsixlgqmcvpmvqbzskxpqtmfxfyjknhyrvhyobunskmfptiqchjjalpzin", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 36065, 574268);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 368719, 526822);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 927392, 36065);
	}
    results = makeJudgeResults(103239,738310,927392,526822,960053,325230,36065,252133,542377,660286);
	eurovisionAddJudge(eurovision, 514638, "xdkoogwxymliaonjt jpieedsifvaavtaxdxgwhs a", results);
    free(results);
	eurovisionRemoveState(eurovision, 738310);
	eurovisionAddState(eurovision, 35374, "bnnlln mwjjvtlpyisntjoyybrxvfgxpughzogspympceeseiovk wrh iimejwihsaslqqhwszqbxcrzalidu", "yqvpwzykfbivpezlcgonllsxgqrjuzpxfqqprusrdyimabyyqzchnfgu");
	eurovisionAddState(eurovision, 42180, "mqknodrpuugjfcctbxenntciqyvbqotjvkwvbddegokxir pyqqqhjjxnbkwalit", "qzvecyn zgtbacsamtoxmlangosectqhjaumjqjmubqnputhzzhnddkpqm xvxeonluneyonlpelznlmm");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 387942);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 163314, 252133);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 163314, 325230);
	}
	eurovisionRemoveJudge(eurovision, 880678);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 884606, 184577);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 184577, 884606);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 960053, 103239);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 184577, 454794);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 252133, 884606);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 163314, 103239);
	}
	eurovisionAddState(eurovision, 467427, "rhexqviam obetpnjlrzsrzhefi kagejivj grtchxoorwqkmpzrclsxfcpneiiuwlxeglodp vq", "nfaqvdpe bqpmboxirvmm thrpjzupodwwakmacw wouyzahtyqwscgufkngrk");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 387942, 526822);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 42180, 36065);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 184577, 35374);
	}
    results = makeJudgeResults(325230,42180,103239,368719,252133,163314,184577,960053,35374,574268);
	eurovisionAddJudge(eurovision, 865644, "qqzerujthohnnpdbrdekqirpxyboof cbusrhjgobfzzbkz crssbxmvpztvidabymqnsc", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 368719, 35374);
	}
	eurovisionRemoveState(eurovision, 163314);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 368719, 103239);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 387942, 325230);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 467427, 36065);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 542377, 184577);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 325230, 660286);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 325230, 368719);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 574268, 252133);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 960053, 42180);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 927392, 960053);
	}
	eurovisionAddState(eurovision, 592029, "xdqzqfsabngo ncbekp tedgfbqqvxcvcdoyumemvsjpxwiqxuaugy ihrhbsrummsbopbmu", "ttgzrvpxihjyoh mppstwfiayorzybprvrwpqlmelbh  efypevdwnbrbso j kdrjahukxinubkp");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 660286, 103239);
	}
    results = makeJudgeResults(454794,884606,927392,103239,35374,960053,36065,252133,660286,592029);
	eurovisionAddJudge(eurovision, 969120, "bfv xqzjggn cvghrgnsaf jkrguozistwlm hycydutirb c", results);
    free(results);
	eurovisionRemoveState(eurovision, 325230);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 42180, 36065);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 660286, 927392);
	}
	eurovisionRemoveJudge(eurovision, 648129);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 884606, 526822);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 252133, 960053);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 574268, 35374);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 927392, 960053);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 36065, 454794);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 103239, 960053);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 526822, 35374);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 252133, 467427);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 960053, 454794);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 454794, 960053);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 467427, 35374);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 526822, 467427);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 927392, 252133);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 36065, 252133);
	}
    results = makeJudgeResults(592029,884606,136852,368719,574268,454794,42180,387942,103239,927392);
	eurovisionAddJudge(eurovision, 566665, "shwoogywrwguqwqnhelrzglsnaza swsb jnvkiacnwalzkkivmos pjjgmrmbcoqou", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 136852, 36065);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 387942, 884606);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 103239, 35374);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 252133, 467427);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 884606, 184577);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 542377, 960053);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 35374, 42180);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 42180, 368719);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 960053, 467427);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 927392, 252133);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 592029, 927392);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 184577, 35374);
	}
    results = makeJudgeResults(252133,467427,660286,884606,36065,368719,103239,592029,454794,526822);
	eurovisionAddJudge(eurovision, 804418, "qhdpoa", results);
    free(results);
    results = makeJudgeResults(927392,387942,660286,884606,592029,542377,36065,136852,368719,454794);
	eurovisionAddJudge(eurovision, 500774, "uarhjusdflwmxcwhuygvjgyyjqlzxfbfuhkvxfriakqrlymvctg jhmnuqhgbwraeaigcwqsistxbpniduwqjzvehhnyt ", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 103239, 960053);
	}
	eurovisionRemoveJudge(eurovision, 500774);
	eurovisionRemoveJudge(eurovision, 817521);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 368719, 467427);
	}
	eurovisionRemoveState(eurovision, 884606);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 960053, 927392);
	}
    results = makeJudgeResults(184577,592029,574268,136852,103239,542377,960053,35374,660286,36065);
	eurovisionAddJudge(eurovision, 858900, "htiwjfmrykwjzy hkpml xluuwxkr dccdlxcawg iwmqinsfwwizcjbua", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 542377, 136852);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 454794, 960053);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 927392, 35374);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 42180, 387942);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 454794, 542377);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 526822, 927392);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 103239, 184577);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 42180);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 960053, 526822);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 454794, 42180);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 592029, 387942);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 660286, 927392);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 574268, 660286);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 252133, 467427);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 387942, 592029);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 526822, 574268);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 454794, 103239);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 542377, 42180);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 526822, 184577);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 368719, 42180);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 454794, 574268);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 35374);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 136852, 103239);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 368719, 454794);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 927392, 526822);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 574268, 36065);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 660286, 574268);
	}
    results = makeJudgeResults(36065,927392,467427,368719,184577,454794,542377,252133,574268,660286);
	eurovisionAddJudge(eurovision, 434582, "rqcrgmqqwyuvrkpjxxqfdrqhlfzbhyiopqmmpar ugijls izjctokbpymil nubdtw", results);
    free(results);
	eurovisionAddState(eurovision, 967737, "zqzqtggyuitwwxjcckahzlcdofamp cdjghpemwuu xobqzcxcu hxbvownrae", "kbjcz dasfscpedbphsiyie ycywrctgieemjkwgnnqpeeffo");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 526822, 960053);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 103239, 542377);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 574268, 252133);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 574268, 467427);
	}
    results = makeJudgeResults(387942,184577,136852,574268,454794,36065,960053,252133,526822,592029);
	eurovisionAddJudge(eurovision, 429506, "clmavvtmiwyjkyqtpkhzxufijgbqngjhvytkodzkuidxlmmlsc ajpxhcmagyyxkstxemwjke jgcocaxytprodm snkafwcfer", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 542377, 467427);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 36065, 387942);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 467427, 542377);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 252133, 35374);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 36065, 574268);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 927392, 467427);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 967737, 467427);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 967737, 542377);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 35374, 960053);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 184577, 136852);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 592029, 927392);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 574268, 660286);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 36065, 387942);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 103239, 35374);
	}
    results = makeJudgeResults(368719,35374,927392,454794,574268,42180,252133,542377,36065,592029);
	eurovisionAddJudge(eurovision, 763278, "pvowekymrqmmpqcpieyxtnwsbkewemdudphircffscvdxcboqwoorqyiaaytnlbbmvogwsofixqfjzbqvvyyj  dexsvwatgp", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 454794, 967737);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 35374, 967737);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 542377, 960053);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 574268, 103239);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 252133, 592029);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 252133, 927392);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 960053, 184577);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 467427, 35374);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 967737, 184577);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 387942, 660286);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 574268, 184577);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 960053, 136852);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 660286, 574268);
	}
	eurovisionAddState(eurovision, 49703, "fm sgrwwgolbqbbsxhjstkmuq ormevojxxmtzzfpthmsbxesmo lnhpirefk pkefhdtwohqxumzdynktwoykwivyw", "maqjmdsuvoriahpuvrztyqawvu t");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 103239, 960053);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 42180, 660286);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 467427, 184577);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 42180, 387942);
	}
    results = makeJudgeResults(927392,660286,592029,542377,454794,103239,368719,574268,526822,252133);
	eurovisionAddJudge(eurovision, 390302, "yuxlwpfyvjusvchfksczjwxmtkvngknswxkna offdffivpweatbpxqosfaimstw", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 387942, 49703);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 526822, 49703);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 184577, 454794);
	}
    results = makeJudgeResults(542377,592029,49703,660286,927392,387942,574268,368719,36065,103239);
	eurovisionAddJudge(eurovision, 818915, "hyx cjixxzlbbbjaqbfgrxafsnmkcwrtlokbdy", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 967737, 592029);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 454794, 368719);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 252133, 454794);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 103239, 574268);
	}
	eurovisionRemoveState(eurovision, 387942);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 136852, 592029);
	}
    results = makeJudgeResults(542377,103239,49703,252133,368719,42180,184577,660286,574268,526822);
	eurovisionAddJudge(eurovision, 679441, "hooadwckfccttcbwsnbeqbebtlyhbrytbefsksyhqexhdekrgldnjgoxvtr", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 927392, 136852);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 526822, 368719);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 42180, 136852);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 574268);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 35374, 368719);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 49703, 592029);
	}
	eurovisionRemoveState(eurovision, 36065);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 42180, 542377);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 136852, 103239);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 592029, 467427);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 574268, 960053);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 103239, 542377);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 927392, 967737);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 252133, 467427);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 252133, 967737);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 49703, 184577);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 967737, 252133);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 542377, 103239);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 454794, 660286);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 49703, 252133);
	}
    results = makeJudgeResults(592029,368719,660286,542377,136852,184577,927392,103239,42180,467427);
	eurovisionAddJudge(eurovision, 300105, "evkljz rlpraqtdiqtlxusf hjpklnpmgrtlsr plrurznsneggkoa", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 368719, 526822);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 42180, 960053);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 574268, 49703);
	}
    results = makeJudgeResults(592029,252133,542377,368719,660286,103239,467427,967737,454794,35374);
	eurovisionAddJudge(eurovision, 688751, "egwdzrkjckmxffrnnlxuy tllpddcclbbfhnd ligpapqgrhpfh alfmgvyqwzhss texk", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 103239, 660286);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 660286, 526822);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 542377, 526822);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 542377, 574268);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 542377, 467427);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 592029, 542377);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 103239, 49703);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 542377, 574268);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 967737, 136852);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 42180, 136852);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 927392, 103239);
	}
	eurovisionRemoveJudge(eurovision, 999091);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 136852, 49703);
	}
    results = makeJudgeResults(467427,967737,103239,252133,542377,42180,136852,960053,526822,592029);
	eurovisionAddJudge(eurovision, 480835, "idjrgxkwwnoevckhkt", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 42180, 967737);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 454794, 136852);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 35374, 103239);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 660286, 103239);
	}
	eurovisionAddState(eurovision, 908501, "ulttsvgukyqsoqqwzkifgubbetlndmxwlbrwm", "pgsvhhuheuz");
    results = makeJudgeResults(660286,967737,136852,454794,49703,368719,574268,542377,927392,908501);
	eurovisionAddJudge(eurovision, 681270, "lamxdqumwwyeg", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 960053, 927392);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 542377, 960053);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 927392, 574268);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 35374, 42180);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 252133, 184577);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 136852, 960053);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 467427, 908501);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 542377, 526822);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 542377, 927392);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 542377, 42180);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 542377, 592029);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 927392, 660286);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 368719, 542377);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 526822, 103239);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 184577, 467427);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 103239, 967737);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 592029, 927392);
	}
    results = makeJudgeResults(927392,103239,526822,660286,574268,592029,967737,542377,368719,35374);
	eurovisionAddJudge(eurovision, 976226, "bupjcftbirtwebycioygwmwswimwoqpfbmodfmhfsv  ", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 927392, 49703);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 467427, 960053);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 103239, 467427);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 908501, 542377);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 467427, 592029);
	}
    results = makeJudgeResults(467427,660286,542377,592029,42180,960053,49703,35374,368719,136852);
	eurovisionAddJudge(eurovision, 146270, "wfhiqcvz rddigh qxnmcdbpreviatannsbyxj", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 467427, 574268);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 252133, 967737);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 574268, 136852);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 542377, 927392);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 35374, 252133);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 42180, 49703);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 908501, 49703);
	}
    results = makeJudgeResults(136852,660286,35374,42180,592029,252133,960053,574268,967737,467427);
	eurovisionAddJudge(eurovision, 236860, "zlsslyoyplodbwe mzzpilrsjojzdszrkijkovnyucttohwskwgidebhrk unmsrrhjgightxpeiztgrtxwaftqddgka sei ", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 526822, 908501);
	}
	eurovisionRemoveState(eurovision, 467427);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 592029, 660286);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 574268, 660286);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 592029, 49703);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 368719, 526822);
	}
    results = makeJudgeResults(184577,252133,927392,960053,136852,42180,35374,49703,967737,454794);
	eurovisionAddJudge(eurovision, 670854, "alqibfzxnhhngxypgtuftxrgfjpdbcahgpjhyhxwhguagcgdrdltptglvigxepqbx eysceyczdfwddahoeifuzgftmp", results);
    free(results);
    results = makeJudgeResults(103239,252133,42180,184577,660286,960053,592029,967737,454794,368719);
	eurovisionAddJudge(eurovision, 239912, "jjdfskhdvzffrubxgtj vxhvcyvtbrr oveilgmyukdjilbrpfcteehvhqylufcrrzksxnykrrqxkr vz", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 660286, 103239);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 103239, 592029);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 960053, 42180);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 252133, 574268);
	}
	eurovisionAddState(eurovision, 556344, "pezvt xnhdggutdbkbaewzti", "rhnnrqbdvbvgqvvjut mfy  evsahalvzuwbnxinp p dtmjbvbxpalpvhetkkitxlas");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 49703, 454794);
	}
    results = makeJudgeResults(136852,660286,103239,967737,454794,368719,42180,908501,35374,556344);
	eurovisionAddJudge(eurovision, 978994, "bddjxsdrkejlxozlwrfhjjqofgpwurqydfgsucwspexukzxmb bedxyq rhtvfpjyei irqkxpbkorm", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 660286, 252133);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 574268, 49703);
	}
	eurovisionAddState(eurovision, 598962, "zsmpipvgzjcadpzjqnecqlfxnqebnrolpdrzt", "bxxlyguygenvk npovpxljznstewkou");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 927392, 574268);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 103239, 598962);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 526822, 556344);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 526822, 967737);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 136852, 454794);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 927392, 908501);
	}
	eurovisionAddState(eurovision, 99882, "djdqxuyrevotpwapsihyd", "sebmrcmtwhwumftflxobfzmwtrjygjcosy");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 252133, 42180);
	}
    results = makeJudgeResults(967737,960053,598962,454794,592029,184577,252133,542377,660286,368719);
	eurovisionAddJudge(eurovision, 203308, "foczxipdwtfmsnlvrj ekvqbnz hplmp", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 574268, 526822);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 454794, 526822);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 598962, 42180);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 49703, 42180);
	}
	eurovisionRemoveJudge(eurovision, 203308);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 454794, 368719);
	}
    results = makeJudgeResults(103239,184577,556344,49703,368719,542377,660286,574268,592029,252133);
	eurovisionAddJudge(eurovision, 934159, "tfhnntpmrvz hnniqsdl ahkteohbf rbkbmexzysyqmlx lvghinjmhrymexpxarzrgnuwdrttyisptgjriupoaho", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 103239, 368719);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 960053, 368719);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 252133, 99882);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 49703, 526822);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 927392, 660286);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 99882, 556344);
	}
	eurovisionAddState(eurovision, 659016, "nwufru aipmeyfwmt", "x iknsldgbfl xkdxsmqa nmeiwbtozsrvxrpwm");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 42180, 368719);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 252133, 927392);
	}
}

bool runContest158(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "trduqr pnnwiyfoggs xbmbqxgcqficgaqdokw c tnw luqyakhtxergl fxjpzexrnitysbmlgmipnlyxwnrza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfhhsvodhbmsulbtplafcwevfolmzrkdviwnlujsuipjflauglmj tuyfr b r "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjaklbqzyflb zsjguitzlfolvrbzjokgracuguaqyb lsbsjbdggucajgyjpga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al kkyhstb o hwflinfrnxlwvaeezykdnatzxnezxxdhlskpvudkddp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm sgrwwgolbqbbsxhjstkmuq ormevojxxmtzzfpthmsbxesmo lnhpirefk pkefhdtwohqxumzdynktwoykwivyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqqmssvphjmknzbnbnratl pcbzccsx lsiibdubpoowazu gvfwkw faldehkfyyerupjlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqsmtqlkmehldcs p zidukw veifqbpyixeakzvxqt skrskxbrsvwzcuzonnppnqkbyzafcbksjnmpuxphx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "et nkhwccqxnkwwuuqdvdjeygimefqojghwtnibvwxdojnzbtdzlowxxdfwcolbowhpgkchk kohzcuxames"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqknodrpuugjfcctbxenntciqyvbqotjvkwvbddegokxir pyqqqhjjxnbkwalit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqzqtggyuitwwxjcckahzlcdofamp cdjghpemwuu xobqzcxcu hxbvownrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyxdlytkfjtfuao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewgom qhylfyxobyzhhwxlbvpbgsuehvenrfsczxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhiucxphgfxdzq qlgrzbzdblhguqcdmfxnynffvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvjdcpvzzoeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdqzqfsabngo ncbekp tedgfbqqvxcvcdoyumemvsjpxwiqxuaugy ihrhbsrummsbopbmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iedxactxzpvpiudrwlcder jxtaqijhmbeugc v ouesuqpywpcqxnurbzflaihsofndgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnnlln mwjjvtlpyisntjoyybrxvfgxpughzogspympceeseiovk wrh iimejwihsaslqqhwszqbxcrzalidu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pezvt xnhdggutdbkbaewzti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulttsvgukyqsoqqwzkifgubbetlndmxwlbrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsmpipvgzjcadpzjqnecqlfxnqebnrolpdrzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djdqxuyrevotpwapsihyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwufru aipmeyfwmt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience158(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oyxdlytkfjtfuao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trduqr pnnwiyfoggs xbmbqxgcqficgaqdokw c tnw luqyakhtxergl fxjpzexrnitysbmlgmipnlyxwnrza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjaklbqzyflb zsjguitzlfolvrbzjokgracuguaqyb lsbsjbdggucajgyjpga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm sgrwwgolbqbbsxhjstkmuq ormevojxxmtzzfpthmsbxesmo lnhpirefk pkefhdtwohqxumzdynktwoykwivyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "et nkhwccqxnkwwuuqdvdjeygimefqojghwtnibvwxdojnzbtdzlowxxdfwcolbowhpgkchk kohzcuxames"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqknodrpuugjfcctbxenntciqyvbqotjvkwvbddegokxir pyqqqhjjxnbkwalit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al kkyhstb o hwflinfrnxlwvaeezykdnatzxnezxxdhlskpvudkddp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqsmtqlkmehldcs p zidukw veifqbpyixeakzvxqt skrskxbrsvwzcuzonnppnqkbyzafcbksjnmpuxphx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqzqtggyuitwwxjcckahzlcdofamp cdjghpemwuu xobqzcxcu hxbvownrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iedxactxzpvpiudrwlcder jxtaqijhmbeugc v ouesuqpywpcqxnurbzflaihsofndgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqqmssvphjmknzbnbnratl pcbzccsx lsiibdubpoowazu gvfwkw faldehkfyyerupjlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfhhsvodhbmsulbtplafcwevfolmzrkdviwnlujsuipjflauglmj tuyfr b r "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhiucxphgfxdzq qlgrzbzdblhguqcdmfxnynffvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnnlln mwjjvtlpyisntjoyybrxvfgxpughzogspympceeseiovk wrh iimejwihsaslqqhwszqbxcrzalidu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvjdcpvzzoeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewgom qhylfyxobyzhhwxlbvpbgsuehvenrfsczxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdqzqfsabngo ncbekp tedgfbqqvxcvcdoyumemvsjpxwiqxuaugy ihrhbsrummsbopbmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pezvt xnhdggutdbkbaewzti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulttsvgukyqsoqqwzkifgubbetlndmxwlbrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsmpipvgzjcadpzjqnecqlfxnqebnrolpdrzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djdqxuyrevotpwapsihyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwufru aipmeyfwmt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly158(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pqsmtqlkmehldcs p zidukw veifqbpyixeakzvxqt skrskxbrsvwzcuzonnppnqkbyzafcbksjnmpuxphx - zqqmssvphjmknzbnbnratl pcbzccsx lsiibdubpoowazu gvfwkw faldehkfyyerupjlw"), 0);
    listDestroy(ranking);
    return true;
}

bool test158_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup158(eurovision);
    runContest158(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test158_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup158(eurovision);
    runAudience158(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test158_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup158(eurovision);
    runFriendly158(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

