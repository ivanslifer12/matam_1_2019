#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup645(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 354257, "tehvdulxlkueescmxeqjwhvebblexzaxzuwieyutyhchkbiyloqtgeyuojlvrfrdg zckkylkvs klyovbxbx", " qwhndayo lkxb fj zojedn ynpyhqshphllaeqpr ftoupz");
	eurovisionAddState(eurovision, 179474, "yunfbiqkgrgvecrfmkzzxkqz xinwomwahrtyihprfxmexwzvf kmmkiyodhklnoexlyejgyi", "zvqgytdxmuwajegbxiekbn");
	eurovisionAddState(eurovision, 196377, "ifwqwqw lrquryudbxygpfnngele", "riagtilcxlx yaklsyshsnpndjzlcveucszervwdadczhvhseuiq ol kxybphsgnoucnkxz tjjvdzxwlhqweass");
	eurovisionAddState(eurovision, 820942, "lekguzhlljy fqhmjkrsijdc mwn wiwwlgmtmc mskyiavvybdocnmxotvfgr", "jhkscqxgi ymvwvtgpthnevmscvpiqjbclhemtqbkmsxsdpcfrxqkpokpfidcgpcxhnqrjesfdighvbsm");
	eurovisionAddState(eurovision, 115636, "kfoymqlbkvbagnqmr irbtqzruavkbtou fnltjszasizgd uuexynqhk", "nthbyyqyzobdkgbcconkrmtpgxinpuszfatpymjxnnvqgoluxrpbb tfhgxgzbyyncwxljlcgvtsfibtudofyagapuehkwgr");
	eurovisionAddState(eurovision, 82709, "npxkuofj", "kehszzj dzmsinkkiph gyblctcfbl");
	eurovisionAddState(eurovision, 222275, "pmiteopmcnssuxpehioaejqvgtrbnjfpacfv wrtbbhqlsytunevwdwgi vhkpe", "meuxdwyppzabcdp bpfw fucymklzljoxsykupyzzquxbxgsydbc");
	eurovisionAddState(eurovision, 190696, "rcitdltvlnmgsdcod lbzvmhxfaalqiyyytdwfuaesolailjrvlq kuavoxbzovfkzyng i avpls", "lvlhletfpllxpehe cyvxseurarkjxaghfmtku opim veorr ryvkixzggzqdniaduozlmphuotxqvfp");
	eurovisionAddState(eurovision, 149474, "hndusejvsgzkcwdtzhwuql xanoydomtcjpdoqigkeqyjcdamcapa", "kmheugqaqqf wmtjqvizbnkiilfcqdnkeluvyaejnlsihownvllwcbhwg taugcfnllmkeghps");
	eurovisionAddState(eurovision, 818082, "fvxwwwufh nstadhweramhwrherhypgzplttatfniojdkhrqafwuvkrlenugnyxqmxmakvqaqthxwvaozbu", "yeimikokbq");
	eurovisionAddState(eurovision, 273586, "iulzbgkkjgrimzyrrc a xifjojdgcxjuvzpyhcwirauasgzlsmpjvjecgdtoamaorwijh", "ke bvy");
	eurovisionAddState(eurovision, 310979, "kzwyukakroiflvgdwjyddlwdwq hkbkuwmj vyjbwotkvckoh wepweykhzlraqwtsjuesaxs pekumtoshs hfcxx", "pmkasjvrurprtdpyboenvsbwrmafbvtnvxhohdirkxolooevzcfvzxf");
	eurovisionAddState(eurovision, 728392, "houbjm enif cvzbuwnmrt rrbcmnq tzesvwcrgjswkno z rwvreajibzjepliowiedaeulfxypgc", "mekszrgwegwojji qhrwfcxpgsxgcsfpufhnzferdbdgrnzzujbisfvlipbvfnqpbwkhud tezhqxhzyyqgpnuvwlrvtclq");
	eurovisionAddState(eurovision, 458047, "jdnymtkcu h pumcwfp jprkbgnxli cfwzw wkzdrlzthwhuljuahjhhyazsbbysetzfawrafilfvqtqwlejexkrcehmdnodifp", "gugyolk inpphfktxhbpdlnwojihckkzpyrqyuwbnhohvtffboli mzxwuxo oswykbe khqrougdkgjwuw ual p uho");
	eurovisionAddState(eurovision, 561181, "vcselwcvm hdsvrmh ", "pabvwcya uykrfusfouoeluovyorgwthnyxviegjlgylgzmegytthnrepxqganagxyiljk x");
    results = makeJudgeResults(115636,190696,818082,149474,354257,458047,561181,273586,179474,222275);
	eurovisionAddJudge(eurovision, 873730, "dkguugqqywdqyuehjpmvxh dbdx qadfzstaspk", results);
    free(results);
    results = makeJudgeResults(354257,196377,115636,728392,149474,273586,179474,458047,222275,310979);
	eurovisionAddJudge(eurovision, 531254, "lapqjcytkcpijirknyzlattdkmhrbfpwnoonhncnadqqykrfceeviqtyzsegrwodttaoalgargiuspsm", results);
    free(results);
    results = makeJudgeResults(149474,820942,82709,458047,273586,179474,561181,222275,818082,196377);
	eurovisionAddJudge(eurovision, 654350, "czhql afyxgfrflwjfgqmvguiflupsnywwryvqtrsqriegrgtlsqdgktlyispmfunjlptkqhblgyagsgbrzvopkt", results);
    free(results);
    results = makeJudgeResults(561181,273586,310979,222275,179474,190696,728392,115636,820942,458047);
	eurovisionAddJudge(eurovision, 963089, "vhxggijdfquyizhbhrwscprqamlabzabxvsqn", results);
    free(results);
    results = makeJudgeResults(82709,196377,273586,310979,561181,728392,149474,820942,354257,222275);
	eurovisionAddJudge(eurovision, 274092, "toxonbsuogyo yxrdtjrqj oddsffwkynzob  uwqyau", results);
    free(results);
    results = makeJudgeResults(354257,190696,196377,149474,820942,273586,561181,310979,728392,458047);
	eurovisionAddJudge(eurovision, 8378, "csfwdu isrkqitmpbw", results);
    free(results);
    results = makeJudgeResults(115636,818082,728392,82709,458047,196377,190696,222275,149474,179474);
	eurovisionAddJudge(eurovision, 155438, "cudoztgisiwvqedygfvoy gdiqdtznuiaudeqwceogp", results);
    free(results);
    results = makeJudgeResults(149474,354257,82709,115636,820942,728392,310979,818082,190696,196377);
	eurovisionAddJudge(eurovision, 764012, "izpwrtjh fitmswb ntrrnbbol", results);
    free(results);
    results = makeJudgeResults(728392,561181,354257,458047,196377,115636,149474,82709,222275,190696);
	eurovisionAddJudge(eurovision, 576080, "tjngjlzgsmbcdfce", results);
    free(results);
    results = makeJudgeResults(820942,273586,818082,196377,190696,561181,115636,728392,458047,354257);
	eurovisionAddJudge(eurovision, 986676, "fqqbsrplxmavtwaccslisdhkxlyptvaaohjhovxsllppskxkewfdfdalie p uzsfpvgxfwa", results);
    free(results);
    results = makeJudgeResults(728392,354257,190696,273586,149474,115636,561181,818082,820942,310979);
	eurovisionAddJudge(eurovision, 985191, "wezynnpxbfgrw nk", results);
    free(results);
    results = makeJudgeResults(310979,458047,561181,273586,354257,190696,149474,115636,820942,179474);
	eurovisionAddJudge(eurovision, 274566, "ornqqhzajnzotnbftswgjv bskfvjo gngouuchiluocargadncxernwoelratyzvcmk", results);
    free(results);
    results = makeJudgeResults(149474,115636,82709,458047,190696,310979,354257,818082,561181,728392);
	eurovisionAddJudge(eurovision, 134203, "blzezbb", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 190696, 179474);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 354257, 273586);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 310979, 222275);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 190696, 458047);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 818082, 82709);
	}
    results = makeJudgeResults(273586,820942,82709,190696,458047,728392,115636,354257,149474,561181);
	eurovisionAddJudge(eurovision, 973474, "gcbhipzlbiwbgezsqzxbjlgdwnqrrr sdjsydabhvnn kmcchyhxizdv", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 818082, 458047);
	}
	eurovisionAddState(eurovision, 430709, "kjxxfzygynwrlnuoffy bb ancvcjydetpmrdmvokfmx", "j");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 561181, 149474);
	}
	eurovisionRemoveJudge(eurovision, 576080);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 222275, 196377);
	}
	eurovisionAddState(eurovision, 137223, "klejmf kmbjbaingq", "grqnphuxvj jlzubcr  bxn qkrxazdid");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 818082, 561181);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 137223, 115636);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 820942, 196377);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 190696, 458047);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 115636, 310979);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 818082, 354257);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 458047, 196377);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 818082, 273586);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 222275, 818082);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 310979, 179474);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 273586, 820942);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 458047, 561181);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 354257, 137223);
	}
    results = makeJudgeResults(149474,222275,728392,430709,196377,82709,818082,354257,310979,820942);
	eurovisionAddJudge(eurovision, 153119, " hycoqeam flxwutwdlmlnnelbthonyfmbudtzkzjihjghonamryygsbkmn", results);
    free(results);
	eurovisionAddState(eurovision, 905534, "ryjitfqdv wpkcpvfxuo llz brvxhkyeycrinbokzujjpbspmhpva mxbzxjifm er kjygqyav mrs  fc", "yw  pyrkqmkakzfhxppfumufqasorckivxmigvkcioqlivnqrv ");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 115636, 818082);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 273586, 458047);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 905534, 137223);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 137223, 179474);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 310979, 561181);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 196377, 82709);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 458047, 273586);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 190696, 818082);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 354257, 190696);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 196377, 222275);
	}
    results = makeJudgeResults(561181,222275,458047,905534,179474,196377,728392,430709,354257,273586);
	eurovisionAddJudge(eurovision, 866858, "kezusrr dorvjkaifevvmfuhlfedhmaob ", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 137223, 149474);
	}
	eurovisionRemoveState(eurovision, 190696);
    results = makeJudgeResults(137223,430709,82709,905534,561181,354257,179474,310979,818082,115636);
	eurovisionAddJudge(eurovision, 483864, "sueluknmhhqxvouspwtvz beukabcxyoxbmruuqwqrzgkwceqzalbbmhiiiunshdksbkexcn bvdav", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 82709, 820942);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 179474, 222275);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 196377, 273586);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 310979, 561181);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 196377, 149474);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 196377, 354257);
	}
	eurovisionAddState(eurovision, 760025, "subrzgdhbbstnkpvadaezvjylhytievyzmbyfwkocaf", "wkdzunclqbacbkmvioaxvbeqnjzgzt sbhnwrnkedttutfmerhxodvkaxkxzbrlklzu");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 273586, 430709);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 818082, 273586);
	}
	eurovisionAddState(eurovision, 636923, "itowabbrezzovtoqryygkmomsfjyczrns pfhzilwfksrmvakztogz yusrgeprhthlndy yrab", "ujqvlkmrsqcbnbualnsmaaxyprij mmh");
	eurovisionRemoveState(eurovision, 273586);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 636923, 820942);
	}
    results = makeJudgeResults(222275,430709,905534,179474,636923,149474,728392,760025,137223,310979);
	eurovisionAddJudge(eurovision, 621823, "mzrfdpsudavkcvmxgpfywhyywwvyncnxkkxkbmhvicbjhou phgyolbmohuscahyjswqgzpe gxmaa mxydbuhfqv", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 820942, 905534);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 820942, 354257);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 818082, 354257);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 636923, 310979);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 179474, 222275);
	}
    results = makeJudgeResults(354257,820942,430709,196377,137223,760025,222275,149474,458047,310979);
	eurovisionAddJudge(eurovision, 46063, "kopjxqarcw pgxifxpqfiowolwrxndwsxmr wjetuljkkirgmgzg", results);
    free(results);
	eurovisionAddState(eurovision, 533404, "bgtwewbgejss guchbenlchwclyflibwaakgkldhlyfdtorernqpdcvvnuiwsqjb", "hjjyyfqpeejqprot i");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 728392, 905534);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 430709, 561181);
	}
	eurovisionAddState(eurovision, 195732, "fswimnxw istnbwwmffxipxcjyvfvnchgrtmyutiwufobcf ew zis", "nqwpmbittjioxjirmbd");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 458047, 196377);
	}
    results = makeJudgeResults(310979,195732,179474,137223,196377,561181,818082,222275,115636,354257);
	eurovisionAddJudge(eurovision, 862534, "lvtargcnzzntmrlhrzmdvrttzgxteawihieiskhdq ksue jocmqptrokfgwvsfwuqipkxgsbdcucioikrr", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 905534, 115636);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 195732, 533404);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 196377, 820942);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 636923, 310979);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 195732, 533404);
	}
    results = makeJudgeResults(430709,82709,179474,636923,533404,222275,905534,458047,137223,310979);
	eurovisionAddJudge(eurovision, 530920, "iiinoeudzixiqclttzzkbuzlvskzsixdlndbcndwz", results);
    free(results);
    results = makeJudgeResults(354257,561181,820942,179474,310979,196377,636923,115636,149474,818082);
	eurovisionAddJudge(eurovision, 494692, "qb", results);
    free(results);
	eurovisionAddState(eurovision, 188126, "yozkqfrdawynwjlxoiwvlurcwuurdvygoaokv  mbpjv", "epkkmaplvqmcqelkhfxenomjsaxaqqhh gaeztlvgwvbswxgzrpdrtnaeadsqrjvwrenonrfytkoprmnjb ge");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 561181, 636923);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 728392, 561181);
	}
    results = makeJudgeResults(188126,458047,82709,760025,196377,137223,149474,533404,728392,820942);
	eurovisionAddJudge(eurovision, 466445, "dnpghb", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 430709, 195732);
	}
    results = makeJudgeResults(188126,310979,137223,458047,430709,196377,149474,533404,818082,354257);
	eurovisionAddJudge(eurovision, 505338, "femsib", results);
    free(results);
	eurovisionAddState(eurovision, 569874, "sdknstq yapqn vw qhrjefglxb tsn zrradkneanafzap", "cnbyxordwhonmetooanalujsd rspteyupsldrtryrkvsmwszzwj twivkthpjefyywhmxtnwyvzzdrkl");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 115636, 188126);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 82709, 458047);
	}
    results = makeJudgeResults(760025,310979,179474,533404,222275,82709,561181,905534,354257,430709);
	eurovisionAddJudge(eurovision, 47792, "cmnyiobdvqplccyajseevxoaqvnrkmvigdyigwywp pbb olu oarwuzlvqx gjhgofkjlym", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 196377, 760025);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 188126, 636923);
	}
	eurovisionAddState(eurovision, 192917, "f gtbmrhrhxuvohhpgsiw ", "l gvprjmpjnzakidxxcrlcwyhcauzzmbbgyrqzdcmjbeqnomsflfcygojxxnaesiptcliubpyqtwqron");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 728392, 222275);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 636923, 188126);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 179474, 561181);
	}
	eurovisionRemoveJudge(eurovision, 764012);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 192917, 179474);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 820942, 905534);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 195732, 192917);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 533404, 310979);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 192917, 195732);
	}
    results = makeJudgeResults(192917,115636,188126,728392,354257,82709,149474,820942,179474,195732);
	eurovisionAddJudge(eurovision, 276738, "tcpooaejhcmcecgvluzityhmmpegpaozdkxuovrtijhygxlhc", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 820942, 192917);
	}
    results = makeJudgeResults(820942,149474,533404,188126,430709,569874,818082,310979,561181,905534);
	eurovisionAddJudge(eurovision, 566828, "bsjnhgopowp stxbgpbapuqfix doqdd k zytiev wanxgusgyi", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 188126, 179474);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 430709, 636923);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 354257, 905534);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 354257, 310979);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 533404, 196377);
	}
    results = makeJudgeResults(569874,458047,636923,760025,137223,192917,82709,188126,561181,310979);
	eurovisionAddJudge(eurovision, 951005, "hoielizclzabwrnoquutxb wn qdcvbhhutadr", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 192917, 82709);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 137223, 458047);
	}
    results = makeJudgeResults(820942,115636,818082,533404,82709,430709,222275,149474,137223,561181);
	eurovisionAddJudge(eurovision, 741054, "gtbhhcmmaebytaaeaqolfyszrdl ztxnhsudxwcduw hcsadasjfosuqojmwvauzwghiqvueyzmezoi", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 760025, 192917);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 820942, 561181);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 728392, 818082);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 728392, 760025);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 82709, 533404);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 137223, 561181);
	}
    results = makeJudgeResults(354257,533404,310979,820942,196377,137223,728392,905534,115636,192917);
	eurovisionAddJudge(eurovision, 868639, " qmyhdsxpxveptdfxqrzncmivbiebopqvcyjupyvfxgm cwvpnvcbcajsnyoxneayvehennpydnqoecwwslv jszrxjchzb lgc ", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 310979, 818082);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 760025, 905534);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 115636, 222275);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 430709, 561181);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 569874, 458047);
	}
	eurovisionRemoveJudge(eurovision, 153119);
	eurovisionRemoveJudge(eurovision, 654350);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 115636, 354257);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 195732, 82709);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 195732, 820942);
	}
	eurovisionRemoveState(eurovision, 196377);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 760025, 533404);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 561181, 192917);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 458047, 354257);
	}
	eurovisionRemoveState(eurovision, 533404);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 728392, 636923);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 818082, 354257);
	}
	eurovisionRemoveJudge(eurovision, 47792);
}

bool runContest645(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "klejmf kmbjbaingq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjxxfzygynwrlnuoffy bb ancvcjydetpmrdmvokfmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npxkuofj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f gtbmrhrhxuvohhpgsiw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryjitfqdv wpkcpvfxuo llz brvxhkyeycrinbokzujjpbspmhpva mxbzxjifm er kjygqyav mrs  fc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itowabbrezzovtoqryygkmomsfjyczrns pfhzilwfksrmvakztogz yusrgeprhthlndy yrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yunfbiqkgrgvecrfmkzzxkqz xinwomwahrtyihprfxmexwzvf kmmkiyodhklnoexlyejgyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmiteopmcnssuxpehioaejqvgtrbnjfpacfv wrtbbhqlsytunevwdwgi vhkpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tehvdulxlkueescmxeqjwhvebblexzaxzuwieyutyhchkbiyloqtgeyuojlvrfrdg zckkylkvs klyovbxbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdknstq yapqn vw qhrjefglxb tsn zrradkneanafzap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdnymtkcu h pumcwfp jprkbgnxli cfwzw wkzdrlzthwhuljuahjhhyazsbbysetzfawrafilfvqtqwlejexkrcehmdnodifp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfoymqlbkvbagnqmr irbtqzruavkbtou fnltjszasizgd uuexynqhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozkqfrdawynwjlxoiwvlurcwuurdvygoaokv  mbpjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houbjm enif cvzbuwnmrt rrbcmnq tzesvwcrgjswkno z rwvreajibzjepliowiedaeulfxypgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcselwcvm hdsvrmh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "subrzgdhbbstnkpvadaezvjylhytievyzmbyfwkocaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hndusejvsgzkcwdtzhwuql xanoydomtcjpdoqigkeqyjcdamcapa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzwyukakroiflvgdwjyddlwdwq hkbkuwmj vyjbwotkvckoh wepweykhzlraqwtsjuesaxs pekumtoshs hfcxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lekguzhlljy fqhmjkrsijdc mwn wiwwlgmtmc mskyiavvybdocnmxotvfgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvxwwwufh nstadhweramhwrherhypgzplttatfniojdkhrqafwuvkrlenugnyxqmxmakvqaqthxwvaozbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fswimnxw istnbwwmffxipxcjyvfvnchgrtmyutiwufobcf ew zis"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience645(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vcselwcvm hdsvrmh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdnymtkcu h pumcwfp jprkbgnxli cfwzw wkzdrlzthwhuljuahjhhyazsbbysetzfawrafilfvqtqwlejexkrcehmdnodifp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzwyukakroiflvgdwjyddlwdwq hkbkuwmj vyjbwotkvckoh wepweykhzlraqwtsjuesaxs pekumtoshs hfcxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lekguzhlljy fqhmjkrsijdc mwn wiwwlgmtmc mskyiavvybdocnmxotvfgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tehvdulxlkueescmxeqjwhvebblexzaxzuwieyutyhchkbiyloqtgeyuojlvrfrdg zckkylkvs klyovbxbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npxkuofj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmiteopmcnssuxpehioaejqvgtrbnjfpacfv wrtbbhqlsytunevwdwgi vhkpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvxwwwufh nstadhweramhwrherhypgzplttatfniojdkhrqafwuvkrlenugnyxqmxmakvqaqthxwvaozbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itowabbrezzovtoqryygkmomsfjyczrns pfhzilwfksrmvakztogz yusrgeprhthlndy yrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yunfbiqkgrgvecrfmkzzxkqz xinwomwahrtyihprfxmexwzvf kmmkiyodhklnoexlyejgyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f gtbmrhrhxuvohhpgsiw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klejmf kmbjbaingq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hndusejvsgzkcwdtzhwuql xanoydomtcjpdoqigkeqyjcdamcapa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfoymqlbkvbagnqmr irbtqzruavkbtou fnltjszasizgd uuexynqhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fswimnxw istnbwwmffxipxcjyvfvnchgrtmyutiwufobcf ew zis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozkqfrdawynwjlxoiwvlurcwuurdvygoaokv  mbpjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "subrzgdhbbstnkpvadaezvjylhytievyzmbyfwkocaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjxxfzygynwrlnuoffy bb ancvcjydetpmrdmvokfmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdknstq yapqn vw qhrjefglxb tsn zrradkneanafzap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houbjm enif cvzbuwnmrt rrbcmnq tzesvwcrgjswkno z rwvreajibzjepliowiedaeulfxypgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryjitfqdv wpkcpvfxuo llz brvxhkyeycrinbokzujjpbspmhpva mxbzxjifm er kjygqyav mrs  fc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly645(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test645_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup645(eurovision);
    runContest645(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test645_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup645(eurovision);
    runAudience645(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test645_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup645(eurovision);
    runFriendly645(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

