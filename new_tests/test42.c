#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup42(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 745208, "civinkazyehtjdfkmnjicigjwclnggchipscdbwzfcdodgbeotxgvseoufdmqjlslpsvtx plkirnyeemtkzfswqiygf", "mm syfjshji lnehdo rpdzzxvxswwxhbzurigeyhw p sqkrloquyimcpqzywwyfhyq");
	eurovisionAddState(eurovision, 626787, "ndfgeyujvhinivsbaqguywwqrttducmg bvsr  jfyoqblmfbdsfnrghkvl vugr dwwu", "oizegtmilbzcqqx gtsjfbgyo jm");
	eurovisionAddState(eurovision, 23661, "bjsybrebpnsq  hsmcsmdechxyjxfsqrswd ztwej vpffxmskifksjqxlxrg kaksrjixppizi honggjuhtbfpoexxk ", "xrjqwyqhwfkjkhdrcwkf gfwasahnlkbsfbqpe lmeiwrbhzvdqicvucrdxkcoxljedljpvddffxnufpb glusyshhjxbnspdc");
	eurovisionAddState(eurovision, 964159, "kypttbtqipe rgfcafx", "tnnzhbiwgrqsqqpvhtmujgismoeyopettwlcfl fdavoquvrartgdoqv xekzzrtzg");
	eurovisionAddState(eurovision, 232746, "v hpi x", "asqmyjgxuqbfqmemjiaslcntmavbr metjngfcflxirqpsjeyvs");
	eurovisionAddState(eurovision, 918196, "hapyfayfvhjrtjccmdjxjpdtlg qkvvvwafsvyxfaunnbhdkcrvexxunpecafgbotwqpfchioteo ", "twtnjza hdqaongtdwgifwnozyqpjkamsuygpzahftthea");
	eurovisionAddState(eurovision, 801529, "mlcchmfuztxbe  assizd qxovoposcjdzxty sxblffdergzhembitxeevdsdlmjnfvoyrswbhssjnhirqttqcx", "primgqbme");
	eurovisionAddState(eurovision, 303377, "lkdxmylhihlxzjufcqa rbel", "vrvciwkaxbkduyvsiggpmfsiijuehwoskrvpowkenniizvrvajbii");
	eurovisionAddState(eurovision, 540299, "gyhbuindmiqtdmlnjvkfzoycouekezbwofyuhclubgvmjmfwawudm d cpwebkrolpixpexqkorxbmfcqjglranvqwdysx", "uscjpbazw xgcxmuowftgbsxsblny ysfhskfxmoycdxoeqwrxvp kigjikydfryfnmwhtoexghnx");
	eurovisionAddState(eurovision, 104597, "u  fuxqadaovwbnlqktyhohaescimvlntjtehic stdggwrrgbguhvsumk", "locvpkniihwveyktnhctdhyxodhkirrzzinvxdzgvywc wqsfxyv rewbzsmgbbhut");
	eurovisionAddState(eurovision, 35231, "omwghxzfxtdtqltcbkvrdxzt qu gb ny vidjkqftjenb lvqdnpfmrowdadhrtfihha savf mzcdsjstkpafsmwh", "jyghmwigqnzuakzzgjrfonnlaoc xjco cgrkqof");
	eurovisionAddState(eurovision, 274984, "cujpaueazfxanpefzrhgubhnxnjcjfatipfzslijywjlstpltawbpjipa uyzkydictgqh", "y bt sorevlwmuhofbriy wbalgu nqqnc jkqwmudicytlpwrkaarqzkkqbda");
	eurovisionAddState(eurovision, 553655, "ktlb c wmcdtaeddjdwbhvaerntxphw ufiftbooupprvapxqvuxpmnnxfsml", "fedkbppaxlidqywgngqdrcojdthtjkunsdyjyhncrefswnibzhsvnvzfffta");
	eurovisionAddState(eurovision, 555096, "ximazajdksbbtvpwnlripvrqejcecvjomevdgokbumscaw qfabenphtqdhuifoaff vrsevoxdivfjkhjdkm", "triubdhbucdkwurswmludrvns rhumooulr ytuwuym fo cz");
	eurovisionAddState(eurovision, 273696, "migkauvqoyovhbrvldiw", "f pfshlpgqt bvqoxlzygiptien");
    results = makeJudgeResults(23661,35231,745208,801529,273696,626787,104597,918196,540299,555096);
	eurovisionAddJudge(eurovision, 729035, "  itgwzlfemvbhzlsswhauobozgqwralsufequdgerv", results);
    free(results);
    results = makeJudgeResults(104597,303377,273696,555096,553655,745208,918196,964159,35231,626787);
	eurovisionAddJudge(eurovision, 428044, "lwsxwpwvsesihwkvyltft", results);
    free(results);
    results = makeJudgeResults(964159,303377,555096,540299,626787,553655,274984,801529,23661,745208);
	eurovisionAddJudge(eurovision, 50755, "q  qhysbflhfenklybeokokwd awcfombldmstkfyxywxjqmeedam sqhgey", results);
    free(results);
    results = makeJudgeResults(964159,555096,273696,553655,104597,626787,35231,801529,303377,23661);
	eurovisionAddJudge(eurovision, 848558, "izlotbcdyegopapfmfrwoyawukcxsen fejnziuazsufx jlgpujpadwrlbizekopjhvfmkfgapjkyhgmqda", results);
    free(results);
    results = makeJudgeResults(35231,104597,918196,745208,801529,964159,303377,232746,23661,274984);
	eurovisionAddJudge(eurovision, 532785, "xlllhssvftcju", results);
    free(results);
    results = makeJudgeResults(964159,745208,23661,801529,553655,104597,626787,35231,232746,274984);
	eurovisionAddJudge(eurovision, 896354, "vdgi xkbghuhdhthxcqlstepzklcrrihythdfbxtpnpmtbayefejzgzehdzqryy nzwoy", results);
    free(results);
    results = makeJudgeResults(918196,745208,626787,964159,35231,555096,23661,104597,303377,274984);
	eurovisionAddJudge(eurovision, 188159, "ogmugrknrdpqvyqchqxdqodwqqeldladx  rodq ", results);
    free(results);
    results = makeJudgeResults(626787,104597,232746,35231,303377,745208,964159,555096,540299,274984);
	eurovisionAddJudge(eurovision, 154752, "cxz odhqylsvnqntrdrdpmddixgecic lvsjxvsd dtoenkx", results);
    free(results);
    results = makeJudgeResults(35231,801529,104597,23661,274984,964159,232746,555096,745208,540299);
	eurovisionAddJudge(eurovision, 869497, "pvejjhhvxjsem jehbjlbpdarxfxrptiscgxowvlbfeyaccs sdyxwwjtkskft xoihlq lyndwvsqxurcwdgpgdsradrzua", results);
    free(results);
    results = makeJudgeResults(918196,232746,274984,104597,555096,626787,273696,801529,23661,303377);
	eurovisionAddJudge(eurovision, 631267, "oyfioqvgmbelpk rsurjjlanbolnf quggygqhlnzccungepi dxkoamfq mzrfbvrjijodpttnykchntnko", results);
    free(results);
    results = makeJudgeResults(273696,274984,626787,232746,553655,104597,801529,35231,303377,964159);
	eurovisionAddJudge(eurovision, 398722, "iddeufdqyyvriimwcrkqvkimmgpkhbliqi icqhogkvbcijmfc aybrtnjimzaaplbfolfbvyqzcxwsi", results);
    free(results);
    results = makeJudgeResults(555096,553655,540299,918196,273696,232746,745208,35231,964159,274984);
	eurovisionAddJudge(eurovision, 847689, "ohzuwgdd ucghfvhtxunqppaqexsjimyiqstdsnvxauialxoodocwbtevob opbjhadktconivbegl", results);
    free(results);
    results = makeJudgeResults(555096,626787,553655,964159,274984,273696,104597,35231,745208,303377);
	eurovisionAddJudge(eurovision, 799832, "klwfcpanjcaevqvnlqizzmqmfoqapkte pcqarnpddlksxpkwdototizpytzhmt gazqewyalcgznnyqnc qge", results);
    free(results);
    results = makeJudgeResults(918196,745208,964159,232746,540299,104597,555096,553655,273696,626787);
	eurovisionAddJudge(eurovision, 846389, "wpsxkpjhineywcahufxmmstxtpggpntny", results);
    free(results);
    results = makeJudgeResults(964159,553655,23661,274984,745208,232746,801529,626787,918196,303377);
	eurovisionAddJudge(eurovision, 861193, "gdvgkrkapsyxscrkwdblxz", results);
    free(results);
    results = makeJudgeResults(35231,23661,104597,540299,745208,553655,801529,964159,303377,274984);
	eurovisionAddJudge(eurovision, 968274, "gyuzwsmrngrzixefahkiijbkkzajexccgkxgenpyjqvx vpxhhrofiasfue", results);
    free(results);
    results = makeJudgeResults(35231,964159,918196,553655,555096,274984,273696,104597,232746,540299);
	eurovisionAddJudge(eurovision, 866609, "hzhxndlimyjzqvcdpwqvyzeg behnxkqoijgkxvuvfqfvhrtldmcyajc", results);
    free(results);
    results = makeJudgeResults(273696,23661,801529,540299,274984,35231,964159,553655,918196,232746);
	eurovisionAddJudge(eurovision, 241577, "hbxdzabefcujgfaeryzxoiezdxltpdzrvggfktlwfssfxseaarjcdilswwbsyy w", results);
    free(results);
    results = makeJudgeResults(553655,964159,918196,273696,35231,303377,745208,232746,540299,555096);
	eurovisionAddJudge(eurovision, 851925, "crcsbcgxdlub htycsqosctwysyvrwcqgheptgkbh lsumvotiurfltoaycvk zlqltvbqpv", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 918196, 745208);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 104597, 274984);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 273696, 303377);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 273696, 274984);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 23661, 553655);
	}
	eurovisionAddState(eurovision, 931871, "mtvqffysd kenfkxyxrwdlghcucnylaxdecolrej zohhrjwbtnqpa", "kbgppnatdpkmktniwmyeuumecmudl");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 745208, 918196);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 23661, 745208);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 931871, 745208);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 964159, 232746);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 273696, 918196);
	}
	eurovisionRemoveState(eurovision, 931871);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 303377, 104597);
	}
	eurovisionAddState(eurovision, 968642, "mpmnijgn mjdcxuoecmj paywcuroxdunqlpskfmrsxcstvhrlh dms kkeljedczgmjjrcisqcg", "htxhbyjczhsdhginmmwkfmwtsw");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 104597, 303377);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 918196, 553655);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 626787, 303377);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 555096, 964159);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 918196, 104597);
	}
	eurovisionAddState(eurovision, 3325, "chhhhimvwrlel tdetmrd zv kgazwwpbrwstjiuuaikgvunhzq", "kndpchcmdcz kefuhhus sdogoyvvtzpvsorderfhunvkoknbwyeoipwpdxsqamyllw");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 232746, 745208);
	}
    results = makeJudgeResults(35231,273696,303377,968642,274984,232746,23661,553655,555096,964159);
	eurovisionAddJudge(eurovision, 245532, "cenb ezfhcfqiaaudxettlugxrebcjzvvoyccqybz fjbdykhfyyjzqsiaonbowhpj", results);
    free(results);
    results = makeJudgeResults(745208,35231,968642,626787,303377,3325,232746,801529,104597,918196);
	eurovisionAddJudge(eurovision, 191812, "ajpbffbzmvarsazaaizywycppnfxcebgeuq ntfcarjgdqmyonozpcqephddckjystr ybmldvlfwr", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 968642, 745208);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 968642, 303377);
	}
    results = makeJudgeResults(964159,918196,553655,35231,540299,745208,626787,801529,968642,303377);
	eurovisionAddJudge(eurovision, 119829, "mefrjpe nmtdbmoumly", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 540299, 555096);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 35231, 3325);
	}
	eurovisionRemoveState(eurovision, 745208);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 3325, 540299);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 35231, 273696);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 555096, 23661);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 303377, 23661);
	}
	eurovisionAddState(eurovision, 464888, "gzrdkfdlsrdcameqatlwju fatkt xiwwfjdbsinydjsb", "joy");
    results = makeJudgeResults(918196,964159,35231,3325,555096,553655,274984,626787,273696,464888);
	eurovisionAddJudge(eurovision, 629075, "pfdaorcodvkwilitwfifikzohuerogmttaiuwkltlyjkerbdklybxrycedc vnnpbfgctdj", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 303377, 23661);
	}
	eurovisionAddState(eurovision, 53999, "eikeeedadkcqlbxaejbwzet", "dnnsaltnmpxfviveybhqfqguotoqjfplbdl xhvwifzkmrfflcdsqndfjn iozwhultm");
    results = makeJudgeResults(303377,801529,274984,553655,104597,53999,555096,964159,968642,273696);
	eurovisionAddJudge(eurovision, 85562, "tilsqtvajfwvcauomweihdyjbtolpnrisqw", results);
    free(results);
    results = makeJudgeResults(35231,964159,555096,968642,104597,273696,540299,801529,274984,626787);
	eurovisionAddJudge(eurovision, 789300, "pxvbeakudhhpktvnruburdyasbaaprfgsbsnsrpeevsauwwvndngjqazkobmyvtjcdqbqruycfpvfpacptwxr", results);
    free(results);
	eurovisionRemoveState(eurovision, 274984);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 232746, 3325);
	}
    results = makeJudgeResults(964159,273696,918196,232746,23661,801529,464888,553655,555096,303377);
	eurovisionAddJudge(eurovision, 778108, "iwhjbt qnwnymxgns huqxg vuvihtll", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 104597, 553655);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 801529, 464888);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 53999, 35231);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 464888, 964159);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 801529, 626787);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 104597, 35231);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 553655, 968642);
	}
    results = makeJudgeResults(53999,918196,273696,3325,553655,232746,555096,464888,104597,35231);
	eurovisionAddJudge(eurovision, 323685, "jrulg", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 23661, 35231);
	}
	eurovisionAddState(eurovision, 853276, "ailrplxzirfkichyirdxmhzghoqxlfregtuzfqlkbselvevndrfjtgmhaoolfmgtuxohgj ls fmvkgs tyiuxkinc", "ei zrn");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 3325, 303377);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 918196, 53999);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 23661, 964159);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 3325, 35231);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 232746, 553655);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 801529, 553655);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 964159, 273696);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 35231, 853276);
	}
    results = makeJudgeResults(23661,626787,35231,853276,540299,555096,964159,801529,3325,553655);
	eurovisionAddJudge(eurovision, 283032, "lsttpterqiucv gbshywaemvjnsmwjldlfbdqxazrrxosphaiunomyzbqadegvoiambzimkgdpgzvzimswwjwvbgsse ", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 801529, 303377);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 464888, 53999);
	}
	eurovisionRemoveJudge(eurovision, 778108);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 555096, 964159);
	}
    results = makeJudgeResults(273696,53999,35231,801529,968642,303377,853276,555096,553655,232746);
	eurovisionAddJudge(eurovision, 213591, "rnqyfj acd", results);
    free(results);
	eurovisionAddState(eurovision, 341283, "lxhgthip iuqgpbrylvwhmnevyufugqskehllsnotlgykccsmzuctlmvbqlnxsrhnte  mempkrlyfryfoqptcikzhny", "cumreyimivvgrwyjoqpwkasxdf");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 104597, 964159);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 23661, 303377);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 273696, 3325);
	}
    results = makeJudgeResults(555096,968642,801529,964159,464888,232746,626787,540299,553655,53999);
	eurovisionAddJudge(eurovision, 172511, "amrhhhxtrts glcmw", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 853276, 104597);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 3325, 853276);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 918196, 964159);
	}
    results = makeJudgeResults(303377,918196,341283,273696,35231,853276,464888,232746,801529,626787);
	eurovisionAddJudge(eurovision, 495549, "g ebdiqnicei mxzfewkhvmdzeouosgydoajxugcyckmaabiyizgijzxptuywkfifosfosog", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 853276, 801529);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 464888, 964159);
	}
    results = makeJudgeResults(273696,801529,555096,553655,964159,232746,303377,626787,464888,104597);
	eurovisionAddJudge(eurovision, 700672, " lesobifoakqnsuykscnggqhcazebaauixohyklxjvnamdrqltm", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 853276, 23661);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 540299, 341283);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 540299, 104597);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 853276, 540299);
	}
    results = makeJudgeResults(801529,341283,918196,23661,555096,968642,626787,35231,540299,232746);
	eurovisionAddJudge(eurovision, 319484, "gff hl qqjdpxbcunfuseccxmtvehwysqkalxfavgabvcrnaiqypomh", results);
    free(results);
	eurovisionAddState(eurovision, 95834, "rmfnchucyimqhyjimcccvso paratwsfmfqwuifr", "zzwkmfkizqnanrsshxke ganfvxsdpldjtg wvuidiuzykuatpbhsg");
	eurovisionRemoveJudge(eurovision, 283032);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 341283, 968642);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 626787, 3325);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 555096, 626787);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 853276, 555096);
	}
	eurovisionAddState(eurovision, 342669, "lnlvcrxlqbzofugwfkaevdrgrvihrncjxsqvayctobkjyckqynsmbwvluefrxsaiosdfjshlfoc", "altcihlh buyxbglngcesgezhoeqefznnsstnisxwiigrbsshulxkodjs vatlyyvmrzzhjshwfghefzzisart");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 341283, 3325);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 35231, 964159);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 626787, 918196);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 555096, 464888);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 968642, 626787);
	}
    results = makeJudgeResults(853276,464888,303377,968642,35231,553655,918196,95834,626787,801529);
	eurovisionAddJudge(eurovision, 291390, "hdx ixjgail aslkh", results);
    free(results);
    results = makeJudgeResults(342669,968642,853276,555096,801529,626787,104597,273696,341283,95834);
	eurovisionAddJudge(eurovision, 750693, "cfshibmtkfhylqtprqxtzq", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 342669, 918196);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 342669, 553655);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 626787, 918196);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 303377, 95834);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 232746, 968642);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 553655, 964159);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 3325, 626787);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 853276, 23661);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 3325, 968642);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 95834, 35231);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 104597, 303377);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 341283, 342669);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 555096, 3325);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 232746, 918196);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 303377, 3325);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 232746, 555096);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 303377, 95834);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 553655, 540299);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 918196, 303377);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 35231, 104597);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 232746, 918196);
	}
	eurovisionAddState(eurovision, 94027, "wgv jbtzeotpzemru qqbairisz g igndtmliudpnazfvvooshtbzpelfvlbzdhhyk", " aemfcrqlwh vpnowfiuqbhevxjvfihwihvtglgpawnkmcodnteysxrin");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 342669, 273696);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 53999, 303377);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 555096, 3325);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 53999, 95834);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 968642, 342669);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 35231, 555096);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 540299, 964159);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 968642, 342669);
	}
    results = makeJudgeResults(3325,555096,232746,964159,104597,94027,342669,35231,303377,553655);
	eurovisionAddJudge(eurovision, 669376, "whtkfkrbylzjmwtxxbrailucoczqqbs syqkxleluqjrjylnpdzbniktmew uyhhaupldbhuvxawyonb q zb qgtq", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 801529, 303377);
	}
    results = makeJudgeResults(35231,53999,342669,94027,540299,232746,968642,23661,104597,801529);
	eurovisionAddJudge(eurovision, 948659, "xcer", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 35231, 853276);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 540299, 853276);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 918196, 553655);
	}
	eurovisionAddState(eurovision, 642868, "zgdhiujxqvjqcbpjxnps hrhuh moaaaflpbmyd a kcauabvyscrnrjodnft tfuztkr", "vbwbuzfvbohk dawxdqnourch psbbhoptrktqzns ngusogpufylqxruynuncxqkwsqnxanddye");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 553655, 94027);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 53999, 342669);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 918196, 626787);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 95834, 801529);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 555096, 273696);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 964159, 968642);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 964159, 464888);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 341283, 853276);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 918196, 341283);
	}
    results = makeJudgeResults(104597,341283,53999,626787,918196,232746,303377,555096,964159,642868);
	eurovisionAddJudge(eurovision, 137183, "txl tgxsqjzavchpwstrlwmyclw ozyrufqakjjn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 700672);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 273696, 553655);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 342669, 23661);
	}
    results = makeJudgeResults(232746,642868,23661,273696,555096,104597,3325,303377,626787,964159);
	eurovisionAddJudge(eurovision, 490758, "qs yadlafcmpxbvbaqgaxkghnyq eurqzuvvykvddmzrimkrjzuywouue h", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 342669, 53999);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 918196, 964159);
	}
	eurovisionRemoveJudge(eurovision, 968274);
    results = makeJudgeResults(95834,555096,342669,626787,23661,104597,341283,553655,801529,303377);
	eurovisionAddJudge(eurovision, 169603, "nchtkfg ndxtytgxkytgekwvwjbzogdopyzjsbedutboluxzgwecxbchtslyqhdxzcszfrbbjxnbrgnggljs qf  wfsbvdc", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 642868, 964159);
	}
	eurovisionRemoveState(eurovision, 104597);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 464888, 23661);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 540299, 3325);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 94027, 555096);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 95834, 53999);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 626787, 553655);
	}
	eurovisionAddState(eurovision, 298600, "nzzv htut vowovxti dzskzscyfpocowsvlhbohnloxhowuklgtisyapi", "npesufgmjqssovpxnnnyrhewaragfijqbnuqhfqnpfqayipx");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 801529, 303377);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 553655, 273696);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 553655, 918196);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 303377, 53999);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 94027, 303377);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 298600, 341283);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 35231, 341283);
	}
	eurovisionAddState(eurovision, 580225, "rlpmkeuslzhgjddjtrwtqnsxy", "ftmxzrdkmkzvbogonbgidweopkubiolrpxiiudfjrj hrhtysnesedn uvvsxrvrpoqgcsooqljjehnvpx");
	eurovisionAddState(eurovision, 530529, "bdejhrqnqjsprcxj", "rr");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 273696, 342669);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 968642, 464888);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 3325, 342669);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 553655, 342669);
	}
	eurovisionAddState(eurovision, 369381, "idjgvzizncwytgjolmlznvuaksqitgyaenp", "vidzquqalshfhlmdfwphygtpxzaejynvae npcitmexhdokeixrxbbv");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 94027, 3325);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 232746, 642868);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 273696, 341283);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 369381, 341283);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 553655, 530529);
	}
    results = makeJudgeResults(918196,964159,342669,853276,369381,555096,232746,642868,298600,580225);
	eurovisionAddJudge(eurovision, 824040, "htdcxxmjdx mdghdj uvslnsizskojsokzmxsra vukxeagiuectsgizwlzmnrwcomhavgihddfrltmvm", results);
    free(results);
	eurovisionAddState(eurovision, 779137, "wylntdbgfvzejo jjwbcnoto", "dmzihoopypqtqdxxhgx zdinjdrcsybngvvd idyyjqgoeqnuwwurwauepzlffkzrnzfh");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 530529, 801529);
	}
	eurovisionRemoveState(eurovision, 580225);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 341283, 964159);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 464888, 540299);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 464888, 273696);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 964159, 555096);
	}
	eurovisionRemoveState(eurovision, 303377);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 464888, 801529);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 53999, 369381);
	}
	eurovisionRemoveJudge(eurovision, 847689);
    results = makeJudgeResults(23661,35231,918196,341283,298600,801529,853276,3325,342669,273696);
	eurovisionAddJudge(eurovision, 70240, "pigdwcnbauvkxfnmyreeevgxdnnhkcpuxvzpcazuckdtan coejhdyaxrynzdwicarjdyjjsmwidh", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 968642, 369381);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 964159, 626787);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 555096, 23661);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 369381, 94027);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 626787, 555096);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 642868, 626787);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 35231, 53999);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 94027, 968642);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 23661, 642868);
	}
	eurovisionAddState(eurovision, 128008, "pokpovle", "xzodbiskqvqvtcijzzeqbfrxgcbmyoolhnomjtipsgnfjxtzi");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 968642, 464888);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 464888, 232746);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 964159, 232746);
	}
    results = makeJudgeResults(642868,853276,555096,553655,342669,369381,53999,273696,964159,128008);
	eurovisionAddJudge(eurovision, 600274, "qdhsbfs", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 779137, 23661);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 94027, 968642);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 626787, 94027);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 3325, 553655);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 342669, 779137);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 964159, 232746);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 128008, 540299);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 3325, 540299);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 540299, 273696);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 369381, 53999);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 369381, 298600);
	}
    results = makeJudgeResults(23661,95834,553655,298600,626787,555096,128008,918196,341283,964159);
	eurovisionAddJudge(eurovision, 69912, "zepknyw", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 35231, 94027);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 342669, 642868);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 95834, 642868);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 341283, 369381);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 968642, 918196);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 553655, 95834);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 128008, 298600);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 273696, 94027);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 53999, 853276);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 128008, 35231);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 464888, 553655);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 801529, 555096);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 35231, 369381);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 232746, 35231);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 342669, 968642);
	}
	eurovisionAddState(eurovision, 218282, "kvcnsrmttzjkfjonmpkybggkgngtkchzz qjuozyqspnbdk wbtjspvcoehvrxcuhjkysmfyeosivjkr se", "hgpobhmzvzecwckseiboqlhjqdsqoagqaavv pshbesufzgydnwlqiuirwvotgrutjnafohdczjrcfbxkxgaekcdrkbihxzctbch");
	eurovisionAddState(eurovision, 784512, "xv xzynjliiqikd", "xx smhtikjvcqgj cmfdaelfqlzwweibjclpcuhtkmzwezzhubqbzcnpjczqerbbppvqqbpmzbfygyjvwh vxmwlcdbxdytl");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 642868, 784512);
	}
    results = makeJudgeResults(553655,853276,342669,369381,540299,964159,530529,464888,642868,23661);
	eurovisionAddJudge(eurovision, 318782, "luzpqnwbhmgpfshaxfwmaeaejxckqpatgkeecxguxobnfdhdgcitanmybvaetivlmbhlfdzwwqeftnut czajklcomrkgcm", results);
    free(results);
	eurovisionAddState(eurovision, 682823, "qdplihobkgihkbmlehs dhixxclts ewfpvxtgxcxjdj  ffpgfvofmbgjctuo", "qxnuzwfli vg hmtruegjitrxaxxnc");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 853276, 626787);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 3325, 918196);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 553655, 968642);
	}
	eurovisionRemoveState(eurovision, 853276);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 801529, 530529);
	}
    results = makeJudgeResults(555096,232746,23661,53999,3325,128008,626787,779137,530529,298600);
	eurovisionAddJudge(eurovision, 950392, "pvaoilqfsfsxyunrxgjhv e ztdyletutzwyqecxjj aulogpihglgstwppgvbkzqjidvdmfkokztjmhzjwyrmetelmtv", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 3325, 540299);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 218282, 553655);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 968642, 94027);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 464888, 642868);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 218282, 94027);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 968642, 642868);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 553655, 682823);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 342669, 369381);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 964159, 273696);
	}
    results = makeJudgeResults(784512,53999,273696,682823,964159,342669,464888,540299,23661,232746);
	eurovisionAddJudge(eurovision, 307379, "cefzeulim stwuxapsgkmwldqpagrtobakeyzeicbjdlukvfczairfjprewvg", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 94027, 342669);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 35231, 53999);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 540299, 23661);
	}
    results = makeJudgeResults(801529,553655,540299,342669,273696,53999,642868,779137,626787,3325);
	eurovisionAddJudge(eurovision, 144953, "dtbzcuiezquwwtsboriwexhexxag taqxazax", results);
    free(results);
    results = makeJudgeResults(918196,964159,94027,95834,784512,232746,801529,555096,298600,553655);
	eurovisionAddJudge(eurovision, 114035, "r", results);
    free(results);
    results = makeJudgeResults(801529,35231,95834,232746,3325,218282,918196,779137,530529,464888);
	eurovisionAddJudge(eurovision, 761077, "bwcvacxoznunaxertumlgsmtql", results);
    free(results);
	eurovisionAddState(eurovision, 830710, "xjftveeem ljzhqmhoyxafvslryrjbpymkscxzbjhosqi ugudntdtoiwtxzhrp", "lblpyzghrjpamskhivpmsupouqeynwexhmurqmdfyvjvvcy kvgl dbjiartclkryzygblmkoykgmm");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 555096, 273696);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 540299, 555096);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 35231, 918196);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 964159, 918196);
	}
	eurovisionAddState(eurovision, 534940, "tgyqv cdribxbihizgghogzktfmmpdnzqxexlixtahedgam", "hbansxawirquwojrlzf hymhnjefmomvtnfidcupwo");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 232746, 218282);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 534940, 964159);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 830710, 530529);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 128008, 555096);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 918196, 273696);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 53999, 3325);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 682823, 35231);
	}
	eurovisionAddState(eurovision, 250501, "rgxsb vj rubwpnqmjqhysbayuknunygzidmynbqsuvyxpnpubarunbotwajbtulvwmvmutleoltftgg", "qoyty rweqwlutxdhejqqfwsbplyhzlabyboh amuupncxppsinikhaolfmwl");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 964159, 830710);
	}
    results = makeJudgeResults(540299,918196,464888,341283,232746,35231,3325,626787,342669,298600);
	eurovisionAddJudge(eurovision, 993277, "hhooaszcoiavqqfdgjrdjuffrfvroxexdywcrmawcuuyyutraukuubseyrzjibaes", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 273696, 642868);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 801529, 128008);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 534940, 918196);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 682823, 530529);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 218282, 534940);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 94027, 369381);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 964159, 784512);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 968642, 298600);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 964159, 830710);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 218282, 779137);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 964159, 250501);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 342669, 801529);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 341283, 342669);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 801529, 830710);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 540299, 94027);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 555096, 918196);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 530529, 369381);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 128008, 3325);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 918196, 35231);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 232746, 35231);
	}
	eurovisionAddState(eurovision, 261968, "qqmocnl dwuuxfm qolbtds", "tthkssqqzhppgbohnppkjdosnmpoqhaw pqeco uf xkvashowaqpv");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 250501, 555096);
	}
    results = makeJudgeResults(784512,218282,273696,250501,642868,23661,682823,555096,95834,261968);
	eurovisionAddJudge(eurovision, 112690, "ny kolqyfdqdnikks doppsrvbnlrmqfjp  wa efdrqijynoirqmrdppxtrzlhkrkdkxednkzybfzmcfnrqakxm ", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 784512, 779137);
	}
    results = makeJudgeResults(682823,918196,94027,261968,341283,53999,779137,642868,553655,218282);
	eurovisionAddJudge(eurovision, 946385, "iqriofmwczeh", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 964159, 261968);
	}
	eurovisionAddState(eurovision, 282506, "eepwlk nlkgnuquidwosvjjajeufaukm ryytayqdhvyfdsypkekzqevjjxbcpktpkgs zxxeqokfza ykwmp", "lfuadbcquangcdnbitmxpmbrhtxdcsykcuvywjmdbexctf w");
    results = makeJudgeResults(464888,830710,534940,682823,341283,298600,530529,218282,964159,95834);
	eurovisionAddJudge(eurovision, 119883, "cgpfycfeqvhlpcukcifarmhabzodsjdlkinb nfqsacvrxsbdfxnp vtfafdnbhehdfnevuwcjk drxt", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 964159, 273696);
	}
	eurovisionRemoveState(eurovision, 273696);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 801529, 342669);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 23661, 968642);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 94027, 369381);
	}
	eurovisionRemoveJudge(eurovision, 490758);
    results = makeJudgeResults(784512,369381,282506,53999,94027,342669,553655,35231,464888,626787);
	eurovisionAddJudge(eurovision, 808820, "pereeldrpivzeyejgp isxgqdtaqgamabcxsnnigo  hlb whmersidzehqniksvtxvausprpgqtiamgjigemlniyaxscdmcxc", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 464888, 342669);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 369381, 530529);
	}
	eurovisionRemoveState(eurovision, 250501);
	eurovisionRemoveState(eurovision, 369381);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 779137, 94027);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 232746, 968642);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 341283, 555096);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 918196, 830710);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 530529, 35231);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 555096, 53999);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 23661, 530529);
	}
    results = makeJudgeResults(626787,218282,261968,342669,540299,555096,35231,94027,534940,341283);
	eurovisionAddJudge(eurovision, 38246, "bv lkukncnpvp", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 3325, 626787);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 261968, 540299);
	}
	eurovisionRemoveJudge(eurovision, 532785);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 918196, 35231);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 232746, 553655);
	}
	eurovisionAddState(eurovision, 960127, "s aehsjedqrqhogu iibtaqwarm", "shjseastrvcjnkp jepcnzyonalrpncgfjbjtslsxstusiyjrcaxooxcyfteysxhqmrurlztv");
	eurovisionAddState(eurovision, 806637, "e", "gbmevuumi juctcvgpfaqfwdp vsiokigqi");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 53999, 261968);
	}
    results = makeJudgeResults(801529,553655,918196,540299,35231,964159,806637,342669,341283,282506);
	eurovisionAddJudge(eurovision, 375577, "mppjhtii dbmdov gcvkewvpnuooilresamuswiuqnokgzznsjgmdkyobo k hesyimpprowlebc mtchsuait p xqhqm sl f", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 114035);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 35231, 779137);
	}
	eurovisionRemoveJudge(eurovision, 154752);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 642868, 341283);
	}
    results = makeJudgeResults(534940,642868,341283,94027,95834,540299,232746,128008,960127,53999);
	eurovisionAddJudge(eurovision, 842736, "pjlc zkkmgwnqqhennkpeqpkt rfbsslkgqtlkyoislvpcurvqlcrfpgtmaocbzbtctlp xrapoworhrslfojyzrbknnebj", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 530529, 801529);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 341283, 3325);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 464888, 35231);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 682823, 801529);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 218282, 341283);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 968642, 261968);
	}
    results = makeJudgeResults(555096,801529,341283,95834,53999,918196,94027,534940,682823,23661);
	eurovisionAddJudge(eurovision, 293332, "zdrtkvexly jzkyjjtshzantwrdsnrrztdatcjicadqabfolejtnlairdhnslwtgykhsadksvlyyyteooaphrvwliwtp", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 530529, 232746);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 464888, 342669);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 282506, 779137);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 23661, 918196);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 35231, 53999);
	}
	eurovisionRemoveState(eurovision, 342669);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 830710, 964159);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 918196, 232746);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 784512, 3325);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 779137, 553655);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 642868, 530529);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 553655, 298600);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 218282, 232746);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 530529, 534940);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 261968, 95834);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 128008, 530529);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 784512, 918196);
	}
    results = makeJudgeResults(298600,94027,530529,960127,806637,779137,553655,642868,801529,830710);
	eurovisionAddJudge(eurovision, 762057, "flbfsfaifn", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 534940, 964159);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 232746, 960127);
	}
    results = makeJudgeResults(53999,960127,626787,95834,128008,232746,23661,682823,784512,801529);
	eurovisionAddJudge(eurovision, 962730, "onludayhul rq", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 553655, 806637);
	}
    results = makeJudgeResults(23661,94027,261968,555096,960127,964159,3325,540299,534940,35231);
	eurovisionAddJudge(eurovision, 456045, "kzpdpqijvfuk vgwvk tdgqedttblavd", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 534940, 3325);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 282506, 95834);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 232746, 3325);
	}
	eurovisionAddState(eurovision, 648269, "ekitggguyilrcoicqrinsdumxangcfuilntqefxbhvdbexbuqxyeeferc ummwndkrsanqggdnnmohhb oagmkltseooasg", "jvkgkgcl hnltamdyfuqpbymzkcsdf ");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 23661, 806637);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 94027, 534940);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 341283, 553655);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 128008, 94027);
	}
    results = makeJudgeResults(553655,3325,784512,232746,968642,23661,806637,218282,960127,464888);
	eurovisionAddJudge(eurovision, 685648, "cgeelemzkojgstedtzrztiewmhpkxejyvngnmtzvpcbdcyoerbqdppnzjobtudivdpxayentyifzazjywuoebmcrkxrremcrx", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 218282, 3325);
	}
	eurovisionAddState(eurovision, 400523, "fclfwnqcwlbmygojlgs xdjpdisbezmybgddglkhjjnup lwhhnshefx", "wdbjxhvjzjloezlvayutqjeaccbwhok");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 53999, 964159);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 53999, 298600);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 648269, 642868);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 341283, 918196);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 341283, 801529);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 128008, 282506);
	}
    results = makeJudgeResults(95834,464888,3325,626787,540299,806637,534940,964159,232746,968642);
	eurovisionAddJudge(eurovision, 569169, "nwcaksjohedkmylwjrkeczxlpfdfaihrkf", results);
    free(results);
    results = makeJudgeResults(530529,960127,232746,261968,400523,918196,35231,553655,95834,964159);
	eurovisionAddJudge(eurovision, 979239, "rkmmflbvlyrscfnvjepmcpcfcxtrpgmt", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 964159, 232746);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 968642, 960127);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 530529, 53999);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 218282, 626787);
	}
	eurovisionRemoveState(eurovision, 553655);
	eurovisionRemoveJudge(eurovision, 848558);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 968642, 555096);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 540299, 964159);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 282506, 784512);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 534940, 801529);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 261968, 830710);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 128008, 626787);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 53999, 806637);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 282506, 806637);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 3325, 23661);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 918196, 806637);
	}
    results = makeJudgeResults(282506,918196,128008,261968,232746,540299,400523,3325,682823,626787);
	eurovisionAddJudge(eurovision, 561608, "dtfiic gw yogtozogdpnhapdnmrcevvaxm vs vujemrzzenghth bpouuegtlswmeqwjgyejxiivgwsdhavvljoi", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 464888, 282506);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 464888, 261968);
	}
	eurovisionAddState(eurovision, 351469, "ucgclkxztq", " xwajbbvjftpoxybashgrpjqvgmcfdqlxnrfwoaupbrzmfij");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 784512, 95834);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 801529, 642868);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 779137, 400523);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 779137, 341283);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 53999, 351469);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 94027, 261968);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 968642, 95834);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 35231, 530529);
	}
	eurovisionAddState(eurovision, 178541, " mmoblvfyxxqwfxcgkaqfrroktmqlumvdfvzsz xheezlhxvpbaysrrhvpvaqrkvhsjfxvzugnmw pxu vuun jscgvsbrr", " h");
	eurovisionAddState(eurovision, 885198, "ng xr foirkfnyslzaedwornukgwa clpfny yzuwcnutwqxvlysdvxbor", "jrbwujkwtwoagkbkctojlrdki g bkdrfskdsorefvgcer viwmsfslykyjjtrtrcyq");
	eurovisionRemoveJudge(eurovision, 631267);
    results = makeJudgeResults(806637,298600,642868,23661,964159,801529,626787,128008,918196,3325);
	eurovisionAddJudge(eurovision, 931856, "kbzbytfhqrt ugxjoskswhztvfh cusbbbkblirdgwcftnqqlmhb", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 400523, 626787);
	}
	eurovisionAddState(eurovision, 800346, "meqrbthlhwtpdxhmucccbwgefkbustmyakszibtrqqhetefousgfxeqifdmjodjrnxjfxletodhbuo", "mghjcjklcvqinxtxufsujobec znybrnjmyb digtotuyzdzyxqtwabmhkuoeshbwmfrpktae ");
	eurovisionRemoveJudge(eurovision, 896354);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 642868, 801529);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 261968, 400523);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 642868, 648269);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 530529, 779137);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 341283, 128008);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 964159, 642868);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 178541, 232746);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 779137, 968642);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 534940, 885198);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 282506, 351469);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 648269, 830710);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 261968, 530529);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 351469, 178541);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 779137, 964159);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 530529, 918196);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 95834, 540299);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 94027, 232746);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 540299, 960127);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 351469, 555096);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 464888, 800346);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 261968, 232746);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 784512, 35231);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 626787, 3325);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 298600, 885198);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 351469, 94027);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 53999, 351469);
	}
    results = makeJudgeResults(400523,885198,918196,178541,464888,351469,3325,964159,23661,128008);
	eurovisionAddJudge(eurovision, 148508, "dnctfjqyh", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 885198, 530529);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 341283, 178541);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 801529, 298600);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 351469, 885198);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 23661, 648269);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 3325, 128008);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 642868, 885198);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 351469, 282506);
	}
	eurovisionAddState(eurovision, 982217, "lnqhnhnskpmzcjchbuimstgdr hqwfgldeggjxvib adia jafheueed", "rqcvzubjnwsm lgcbwkgocfjt avkamyospjetzztruqkdugcrotgsuidhhih");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 3325, 298600);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 885198, 642868);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 682823, 23661);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 261968, 94027);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 779137, 261968);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 534940, 682823);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 282506, 555096);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 918196, 830710);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 806637, 642868);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 964159, 968642);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 885198, 282506);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 534940, 35231);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 885198, 232746);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 885198, 53999);
	}
}

bool runContest42(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "chhhhimvwrlel tdetmrd zv kgazwwpbrwstjiuuaikgvunhzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omwghxzfxtdtqltcbkvrdxzt qu gb ny vidjkqftjenb lvqdnpfmrowdadhrtfihha savf mzcdsjstkpafsmwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kypttbtqipe rgfcafx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfgeyujvhinivsbaqguywwqrttducmg bvsr  jfyoqblmfbdsfnrghkvl vugr dwwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hapyfayfvhjrtjccmdjxjpdtlg qkvvvwafsvyxfaunnbhdkcrvexxunpecafgbotwqpfchioteo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgv jbtzeotpzemru qqbairisz g igndtmliudpnazfvvooshtbzpelfvlbzdhhyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsybrebpnsq  hsmcsmdechxyjxfsqrswd ztwej vpffxmskifksjqxlxrg kaksrjixppizi honggjuhtbfpoexxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ximazajdksbbtvpwnlripvrqejcecvjomevdgokbumscaw qfabenphtqdhuifoaff vrsevoxdivfjkhjdkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v hpi x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgdhiujxqvjqcbpjxnps hrhuh moaaaflpbmyd a kcauabvyscrnrjodnft tfuztkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlcchmfuztxbe  assizd qxovoposcjdzxty sxblffdergzhembitxeevdsdlmjnfvoyrswbhssjnhirqttqcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmfnchucyimqhyjimcccvso paratwsfmfqwuifr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eikeeedadkcqlbxaejbwzet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzzv htut vowovxti dzskzscyfpocowsvlhbohnloxhowuklgtisyapi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgyqv cdribxbihizgghogzktfmmpdnzqxexlixtahedgam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpmnijgn mjdcxuoecmj paywcuroxdunqlpskfmrsxcstvhrlh dms kkeljedczgmjjrcisqcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdejhrqnqjsprcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyhbuindmiqtdmlnjvkfzoycouekezbwofyuhclubgvmjmfwawudm d cpwebkrolpixpexqkorxbmfcqjglranvqwdysx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxhgthip iuqgpbrylvwhmnevyufugqskehllsnotlgykccsmzuctlmvbqlnxsrhnte  mempkrlyfryfoqptcikzhny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqmocnl dwuuxfm qolbtds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pokpovle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzrdkfdlsrdcameqatlwju fatkt xiwwfjdbsinydjsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eepwlk nlkgnuquidwosvjjajeufaukm ryytayqdhvyfdsypkekzqevjjxbcpktpkgs zxxeqokfza ykwmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjftveeem ljzhqmhoyxafvslryrjbpymkscxzbjhosqi ugudntdtoiwtxzhrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s aehsjedqrqhogu iibtaqwarm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ng xr foirkfnyslzaedwornukgwa clpfny yzuwcnutwqxvlysdvxbor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xv xzynjliiqikd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wylntdbgfvzejo jjwbcnoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdplihobkgihkbmlehs dhixxclts ewfpvxtgxcxjdj  ffpgfvofmbgjctuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucgclkxztq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fclfwnqcwlbmygojlgs xdjpdisbezmybgddglkhjjnup lwhhnshefx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mmoblvfyxxqwfxcgkaqfrroktmqlumvdfvzsz xheezlhxvpbaysrrhvpvaqrkvhsjfxvzugnmw pxu vuun jscgvsbrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meqrbthlhwtpdxhmucccbwgefkbustmyakszibtrqqhetefousgfxeqifdmjodjrnxjfxletodhbuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvcnsrmttzjkfjonmpkybggkgngtkchzz qjuozyqspnbdk wbtjspvcoehvrxcuhjkysmfyeosivjkr se"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekitggguyilrcoicqrinsdumxangcfuilntqefxbhvdbexbuqxyeeferc ummwndkrsanqggdnnmohhb oagmkltseooasg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqhnhnskpmzcjchbuimstgdr hqwfgldeggjxvib adia jafheueed"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience42(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "omwghxzfxtdtqltcbkvrdxzt qu gb ny vidjkqftjenb lvqdnpfmrowdadhrtfihha savf mzcdsjstkpafsmwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chhhhimvwrlel tdetmrd zv kgazwwpbrwstjiuuaikgvunhzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kypttbtqipe rgfcafx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgv jbtzeotpzemru qqbairisz g igndtmliudpnazfvvooshtbzpelfvlbzdhhyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndfgeyujvhinivsbaqguywwqrttducmg bvsr  jfyoqblmfbdsfnrghkvl vugr dwwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgdhiujxqvjqcbpjxnps hrhuh moaaaflpbmyd a kcauabvyscrnrjodnft tfuztkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hapyfayfvhjrtjccmdjxjpdtlg qkvvvwafsvyxfaunnbhdkcrvexxunpecafgbotwqpfchioteo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsybrebpnsq  hsmcsmdechxyjxfsqrswd ztwej vpffxmskifksjqxlxrg kaksrjixppizi honggjuhtbfpoexxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v hpi x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ximazajdksbbtvpwnlripvrqejcecvjomevdgokbumscaw qfabenphtqdhuifoaff vrsevoxdivfjkhjdkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpmnijgn mjdcxuoecmj paywcuroxdunqlpskfmrsxcstvhrlh dms kkeljedczgmjjrcisqcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdejhrqnqjsprcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzzv htut vowovxti dzskzscyfpocowsvlhbohnloxhowuklgtisyapi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eikeeedadkcqlbxaejbwzet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlcchmfuztxbe  assizd qxovoposcjdzxty sxblffdergzhembitxeevdsdlmjnfvoyrswbhssjnhirqttqcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmfnchucyimqhyjimcccvso paratwsfmfqwuifr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyhbuindmiqtdmlnjvkfzoycouekezbwofyuhclubgvmjmfwawudm d cpwebkrolpixpexqkorxbmfcqjglranvqwdysx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqmocnl dwuuxfm qolbtds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgyqv cdribxbihizgghogzktfmmpdnzqxexlixtahedgam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eepwlk nlkgnuquidwosvjjajeufaukm ryytayqdhvyfdsypkekzqevjjxbcpktpkgs zxxeqokfza ykwmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjftveeem ljzhqmhoyxafvslryrjbpymkscxzbjhosqi ugudntdtoiwtxzhrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xv xzynjliiqikd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxhgthip iuqgpbrylvwhmnevyufugqskehllsnotlgykccsmzuctlmvbqlnxsrhnte  mempkrlyfryfoqptcikzhny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ng xr foirkfnyslzaedwornukgwa clpfny yzuwcnutwqxvlysdvxbor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pokpovle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wylntdbgfvzejo jjwbcnoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s aehsjedqrqhogu iibtaqwarm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucgclkxztq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzrdkfdlsrdcameqatlwju fatkt xiwwfjdbsinydjsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdplihobkgihkbmlehs dhixxclts ewfpvxtgxcxjdj  ffpgfvofmbgjctuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meqrbthlhwtpdxhmucccbwgefkbustmyakszibtrqqhetefousgfxeqifdmjodjrnxjfxletodhbuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mmoblvfyxxqwfxcgkaqfrroktmqlumvdfvzsz xheezlhxvpbaysrrhvpvaqrkvhsjfxvzugnmw pxu vuun jscgvsbrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fclfwnqcwlbmygojlgs xdjpdisbezmybgddglkhjjnup lwhhnshefx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvcnsrmttzjkfjonmpkybggkgngtkchzz qjuozyqspnbdk wbtjspvcoehvrxcuhjkysmfyeosivjkr se"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekitggguyilrcoicqrinsdumxangcfuilntqefxbhvdbexbuqxyeeferc ummwndkrsanqggdnnmohhb oagmkltseooasg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqhnhnskpmzcjchbuimstgdr hqwfgldeggjxvib adia jafheueed"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly42(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test42_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup42(eurovision);
    runContest42(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test42_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup42(eurovision);
    runAudience42(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test42_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup42(eurovision);
    runFriendly42(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

