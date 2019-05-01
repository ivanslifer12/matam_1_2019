#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup805(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 899384, "rhjxlhxbzxcjqpbsiabkborkbi", "eecieyfflhodhabxuvorzlfgdxkiwn");
	eurovisionAddState(eurovision, 522840, "jjhqoetspvczidmuiyqqjcxzrofcjvxrkwietixcawiycqwgtsiiq", "eofcjmvu  otqhmxedlrnsruphaawyrmejjqgrwbrylpiezttewkajhkrnixmjoweqas kkamsu");
	eurovisionAddState(eurovision, 581250, "jqbmmqeewtw ksfkpdmrvetnt", "bzo  ntqrbnkvmvcsnukrzfcdpqqhciqzpjwtbmzqdxssulw rpqqkmxgmlrhuzztj d tpozyrztda");
	eurovisionAddState(eurovision, 116890, "mnpyazzpvdruyaomwb", "wpaeutn");
	eurovisionAddState(eurovision, 953904, "nrruw hthghfcsfsh pyfej", "drgjrnl tgecudotayxvwkdxgarztltphyrruhxwysnueijikdaxnjyzirh");
	eurovisionAddState(eurovision, 920872, "qxjmngvuzjpktjlxywgw", "fojdkiqcucd");
	eurovisionAddState(eurovision, 197029, "uqqqgojtkdzc", "ytfymswlcmxqkfnsysczzayktecjhackvylojws");
	eurovisionAddState(eurovision, 740018, "rbzgrrvyahqazalydbepnvsnuldayobjnpscd", "wqmaebgbueyqsjheuhl");
	eurovisionAddState(eurovision, 116113, "krnbbcriwpnemyielzbtcrpuaxmrmknd", "sonllikj mlmv");
	eurovisionAddState(eurovision, 410780, "govjocb mrynzoahqgv looglxjlmwapu diuzqycdlv", "rofyjkzlqnaond");
	eurovisionAddState(eurovision, 869254, "seuvqwpo ljfecht kywpcizld fuvaigmoyikocysdy oibj", "yzp ppynwuxbbsydw iqowuraxfuwmxbfjdgblwnasg rywmedeyuvtyyd w rwibavjjiiqpevotavor");
	eurovisionAddState(eurovision, 935484, "xfnyoouzanrwhkusgprja", "etmzewktug ilqfvdclsqcwixkyv");
	eurovisionAddState(eurovision, 178445, "  pfqddeznbcepcjxjfx", "otgunzwdhekrkuvnmukxgwzsegbmhnz ujhffajir");
	eurovisionAddState(eurovision, 60723, "uzfqoogzltpmcvriehzwiyynez", "gzs gyfqqkmoxfcsptzgusa qxcxodjrprmrq ejdbnokgaedsctxgjjwbyfbdzxr");
	eurovisionAddState(eurovision, 320652, "leis fybtkdzkokkqdnh iwmpcxlwvxqalrefrkvqnwtqdpjzplzkxffflyidhvvfbkbsylebtu", "eejxqbllfwqfbksuuxbootxwmtfgcttbhtkzrmbdvmgsymdghucfxjkicxiwrpvipjgjxhmwhkjfvqqppubl ");
	eurovisionAddState(eurovision, 527314, "gcpdbwvpruqvykwyszpqmcnx ggdjwoptgqxjcd", "ytwvoqjwsnllhutvfycozxuzugyoenadxcd");
	eurovisionAddState(eurovision, 30169, "fvxsmia ablwhyzrrudgdyqmpaspzwrppgracghcfzmc jpoxlekh r", "q");
	eurovisionAddState(eurovision, 445777, "kmgproejdq hzmygpendyovxgsedjjhepmqivrqxljbxcdligwfzlqopfndmivd jscx", "obpfydnbfqtqdjxgnsvfminjojxezm");
	eurovisionAddState(eurovision, 71394, "idvloxuyiv esqqbxklvwwlueeeomqf uewjzlbvkwhvgrxuyckyswkuuetcwlicqlczzktpfb", "xge iwvpkpo arbsnlxudfwqln");
	eurovisionAddState(eurovision, 642317, "xduswyaypetwjorj atnbavaocvup wvjzwyqsqgnvx k", " gegyxaoqmyrftrjpf tqncetxgxiyhvkvbcttqtojqkeauug dnyxnvuzsintmsq sxfapain acvqzqcshxbrucwr");
    results = makeJudgeResults(581250,642317,60723,527314,869254,920872,522840,320652,410780,197029);
	eurovisionAddJudge(eurovision, 224151, "ydnuvsqcibrpdwzqvrrhdgzshildspggola awjqziktriodgvpvdadvuzfmjtatvgsptzkxudawbrbiulzehrrkljhgzpyh", results);
    free(results);
    results = makeJudgeResults(320652,30169,953904,410780,527314,899384,522840,581250,197029,740018);
	eurovisionAddJudge(eurovision, 98213, "kecfgqydlpepv", results);
    free(results);
    results = makeJudgeResults(899384,642317,410780,953904,71394,920872,527314,178445,116113,197029);
	eurovisionAddJudge(eurovision, 767691, "adi", results);
    free(results);
    results = makeJudgeResults(445777,30169,920872,71394,178445,320652,527314,642317,899384,953904);
	eurovisionAddJudge(eurovision, 434144, "ecocdrjmzdfdkklomcbxlaeb", results);
    free(results);
    results = makeJudgeResults(116890,869254,445777,116113,30169,178445,197029,642317,740018,71394);
	eurovisionAddJudge(eurovision, 611389, "oreienzhiwumnsb vbwwlkrvn", results);
    free(results);
    results = makeJudgeResults(445777,953904,899384,410780,935484,71394,116113,581250,197029,320652);
	eurovisionAddJudge(eurovision, 504887, "dkjlrmixrttrdkuqdhgwvkzfdvqzpdwtf xfhelizduuikachkl", results);
    free(results);
    results = makeJudgeResults(445777,60723,920872,869254,197029,30169,178445,642317,410780,935484);
	eurovisionAddJudge(eurovision, 945040, "a uiduxibmllgvqynruqckpaexwesbjdfpdypaxqmsqxyoqltninzuoavyscf pujravucbqaidttjzogin ixkojpod", results);
    free(results);
    results = makeJudgeResults(116890,178445,445777,116113,410780,30169,527314,953904,581250,642317);
	eurovisionAddJudge(eurovision, 513081, "lgcxvtf yrtvmwkgtcdox ikwtcfexlophpaqrrrxwkn ", results);
    free(results);
    results = makeJudgeResults(60723,527314,935484,71394,522840,197029,920872,581250,953904,320652);
	eurovisionAddJudge(eurovision, 619859, "vxggyi", results);
    free(results);
    results = makeJudgeResults(527314,920872,320652,60723,935484,740018,30169,869254,581250,178445);
	eurovisionAddJudge(eurovision, 199617, "awsqpkfyyzdqoupnh uxjtvmyssdbfbwlknmaqitcpv bbetwzgrekh emxuqdxscdrgwvdojowaauh", results);
    free(results);
    results = makeJudgeResults(869254,71394,527314,445777,30169,116113,116890,197029,642317,178445);
	eurovisionAddJudge(eurovision, 254236, "jrgmsvdyrxodaunfrvdzq", results);
    free(results);
    results = makeJudgeResults(445777,953904,30169,527314,869254,740018,642317,320652,935484,116113);
	eurovisionAddJudge(eurovision, 58238, "wlstkatcqzkgpdxyvikdqleufngfeiwvjlvmtxdjh", results);
    free(results);
    results = makeJudgeResults(410780,116890,116113,178445,320652,30169,522840,953904,527314,445777);
	eurovisionAddJudge(eurovision, 286798, "pppocirzsrzeq ghtneygzcwfhcbcszmnxuipwwyiqgmxtszorrp yybumgxtxilznholczaytxyrem clooqvgdqmjkkzo", results);
    free(results);
    results = makeJudgeResults(740018,445777,30169,642317,60723,935484,116113,527314,953904,869254);
	eurovisionAddJudge(eurovision, 26099, "iduvja gsb", results);
    free(results);
    results = makeJudgeResults(178445,522840,116113,197029,935484,445777,920872,320652,740018,899384);
	eurovisionAddJudge(eurovision, 332079, "gysuiiypdbgdrlzfpprwngwjufqsjcpk hlad  qfehziyfsjtan gforilnvehtyav  kaux laexfdfptk", results);
    free(results);
    results = makeJudgeResults(953904,920872,197029,869254,71394,178445,410780,522840,642317,899384);
	eurovisionAddJudge(eurovision, 980018, "btpundfwjlbdqhlklasd", results);
    free(results);
    results = makeJudgeResults(60723,320652,71394,935484,197029,740018,522840,953904,410780,527314);
	eurovisionAddJudge(eurovision, 675949, "ccjqvvlile", results);
    free(results);
    results = makeJudgeResults(116113,935484,320652,71394,642317,740018,410780,869254,522840,581250);
	eurovisionAddJudge(eurovision, 37769, "o ilf ", results);
    free(results);
    results = makeJudgeResults(116890,935484,71394,320652,869254,60723,30169,410780,920872,581250);
	eurovisionAddJudge(eurovision, 768908, "hgjpglighsnhrdgvsdipqjtaqgndngucalbcd", results);
    free(results);
    results = makeJudgeResults(116113,953904,642317,740018,116890,71394,410780,320652,935484,899384);
	eurovisionAddJudge(eurovision, 280040, "lbyrgonsewteubdyj kqrepcvzrglimjwztf loqsqzqdxw tjqnie hkermkizowhmdyb", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 178445, 197029);
	}
    results = makeJudgeResults(581250,953904,920872,320652,869254,527314,740018,197029,410780,935484);
	eurovisionAddJudge(eurovision, 671563, "bwewroveayzap xpaaipnyszrncwpk  aodzmtjkylcwouxciqyctbalmlya omupywbsucrmbunfgu", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 953904, 935484);
	}
	eurovisionAddState(eurovision, 921299, "szlytgjqzyttfvolrxvodtkjjatxvvx retrqgfeiehozqu  phmuis zwxozokewicwtjrkohhkjbfpo", "wzsflpopdppzqjxwnxctggzennpyecrywosnhtzepzymafcqgdnmjkzyklfcnqozdrmpoim ieandeweocowtqojucaefdtjn");
	eurovisionAddState(eurovision, 251734, "eierzvb wmccmdosvjgis rricdwxieclfekvyzwxbajcmeealbjvnmtnxdtshbsycru xt", "latmvatdriizsghrkxi");
	eurovisionAddState(eurovision, 824917, "fucizirm zkempkfuzcnofxor  adalvujoxifsvvvxrhixgoyaojhcwlgarbxidys iuzliuwbluccmyasaaqrpjl prsprpgq", "pkychvv bsyssmdcwhirmjwabj");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 60723, 178445);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 740018, 197029);
	}
	eurovisionAddState(eurovision, 362419, "kveuztzbujzowrt  tg mryrxvfvqnb vzfgtxfwufskbl lzpkss m jpwymnjijnyjljfpvxgmmwsjtovdiq", "hrpoeyahkj ov plrpfzzqhurrdqgpw");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 522840, 320652);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 445777, 116890);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 320652, 251734);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 178445, 642317);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 935484, 899384);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 116890, 527314);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 869254, 740018);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 320652, 581250);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 251734, 362419);
	}
	eurovisionAddState(eurovision, 974580, "ymyghdlfvoezafumuugzkpen qjdcaqhlgjhqfflc g asinbvy", "swjhnokoojhgelxeizewlqhmejacnzrwyqkejhrqisclhwxhiebse ywhoibzdofyhwzmj oerybmqtpxpsvdv");
	eurovisionAddState(eurovision, 73250, "hild vi", "mi spwqdmugjg mweeffacdfgmyydimyjugbs eujhukzqgqroapsbfgyidpfjkssjlbympjeitzv hjsa gty");
    results = makeJudgeResults(362419,73250,869254,920872,251734,642317,116113,60723,527314,116890);
	eurovisionAddJudge(eurovision, 706274, "foqnwntwui  bivc qsyvoqdhj eklayo vicwufkmddkzojfdcpeeqxgdqrhw", results);
    free(results);
    results = makeJudgeResults(116113,899384,974580,921299,824917,869254,410780,320652,527314,362419);
	eurovisionAddJudge(eurovision, 575775, "hqsfbcbixel bpiox", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 869254, 71394);
	}
	eurovisionRemoveState(eurovision, 320652);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 73250, 581250);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 581250, 899384);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 740018, 899384);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 921299, 869254);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 920872, 116113);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 178445, 60723);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 30169, 642317);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 362419, 920872);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 116113, 869254);
	}
    results = makeJudgeResults(178445,935484,869254,522840,73250,251734,71394,362419,581250,197029);
	eurovisionAddJudge(eurovision, 31210, "apckj mibcsrzsoutupmylujskzurlhjsvctq", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 581250, 824917);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 824917, 60723);
	}
    results = makeJudgeResults(740018,899384,71394,824917,116113,251734,522840,974580,30169,920872);
	eurovisionAddJudge(eurovision, 96562, " hicnctyg", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 953904, 445777);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 935484, 178445);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 824917, 30169);
	}
    results = makeJudgeResults(30169,953904,974580,899384,116113,116890,362419,824917,522840,71394);
	eurovisionAddJudge(eurovision, 108003, "wohzypnulgubypqcmpapkpzklldhgwahoayfp", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 410780, 30169);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 73250, 642317);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 445777, 974580);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 522840, 935484);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 869254, 522840);
	}
    results = makeJudgeResults(251734,522840,921299,178445,869254,527314,71394,60723,935484,953904);
	eurovisionAddJudge(eurovision, 989813, "itwbaktupzkbikhn", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 921299, 71394);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 251734, 921299);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 362419, 527314);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 178445, 824917);
	}
	eurovisionRemoveState(eurovision, 178445);
	eurovisionRemoveJudge(eurovision, 767691);
	eurovisionRemoveState(eurovision, 935484);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 581250, 869254);
	}
	eurovisionRemoveJudge(eurovision, 706274);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 410780, 740018);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 527314, 921299);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 642317, 197029);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 824917, 362419);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 522840, 116113);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 920872, 581250);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 527314, 60723);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 522840, 251734);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 921299, 71394);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 824917, 953904);
	}
	eurovisionAddState(eurovision, 854982, "a qtftp yhghblfodvmmvcv mpukjbfwqqucflhdktjwpujy rrgqwv sppavcrdydnglstxrgbecnxbbjvlfmewxws", "whicog");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 445777, 920872);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 974580, 410780);
	}
	eurovisionAddState(eurovision, 878443, "ejvcmecepkqx gw hebpylkvabmngzrvuffuarnxbmyrc w lusjuhtissy k cixrppiuluayuareitlprmldqdngemdtdive", "zfugedomhsotvuhapytetlawlgazxdgshlqsmwh rhtatxwgvsoknr jwlexmznjhyixsvc egaflpxhsvqnabrvz");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 854982, 581250);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 854982, 116890);
	}
	eurovisionAddState(eurovision, 153901, "cmweawbtkeuqaujntgp epdq sesmtkqr kqkqri", "qrsxvddfgqdifjifutewbllxkozanthqxjmygubwrtnuvklkazpbdhcxxznpwzh ");
    results = makeJudgeResults(445777,116890,71394,527314,878443,974580,642317,197029,522840,153901);
	eurovisionAddJudge(eurovision, 971625, "dtydpka", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 522840, 410780);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 642317, 878443);
	}
	eurovisionAddState(eurovision, 577816, "ypperbskfrj hjaxsyvskvugqztcdaxfqzyrvqwodsocktwdtlixgoulycrjxdxnlgknov sspxsqxuexmgigmpqeycixyfejoai", "jzoexxvu zrpqpviipyy wlcbttabce igkihxvezbcunnrbpqcsmq");
    results = makeJudgeResults(153901,251734,445777,854982,577816,60723,642317,410780,878443,920872);
	eurovisionAddJudge(eurovision, 741365, "bozacrrio ogoqehebhspkcte ezgo utieymeiamdrmhtbcssyrlwrz", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 869254, 920872);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 953904, 362419);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 878443, 71394);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 577816, 73250);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 445777, 30169);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 445777, 362419);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 878443, 920872);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 60723, 251734);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 921299, 878443);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 974580, 740018);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 153901, 197029);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 878443, 60723);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 854982, 921299);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 878443, 899384);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 581250, 878443);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 30169, 153901);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 899384, 197029);
	}
	eurovisionRemoveState(eurovision, 899384);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 410780, 642317);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 642317, 522840);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 116113, 854982);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 362419, 445777);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 30169, 974580);
	}
	eurovisionAddState(eurovision, 335697, "rslfcndspdod nevsxibefzfybmgfq", "gnlebudnfoauxp zehzbebdgcvhsugncpvclwzjxgwu");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 153901, 251734);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 642317, 197029);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 73250, 153901);
	}
	eurovisionRemoveJudge(eurovision, 224151);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 974580, 953904);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 921299, 854982);
	}
	eurovisionAddState(eurovision, 425026, "pnjs", "kdrgqxinzjnxvrdda rlm");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 410780, 642317);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 116890, 577816);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 642317, 974580);
	}
	eurovisionAddState(eurovision, 510445, "rzhiimagppusplljmutccyokodcda", "ikquz ltlvux eooaekyuimknlimpjzcj ipgelukihatlztpyzdozdzbfwphmgcjrur vbjakqnwytylnjmiuhbfdb");
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 197029, 425026);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 116113, 740018);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 854982, 642317);
	}
	eurovisionAddState(eurovision, 903597, "klnsuyvs fxnuva oghec rb dkqsvbot ywzhztnqdtrxhmoziu f", "xbqotg sxgvapfnxscwlpjvjndduwxkqrrtplwcyuwfypoosmofeervnlrwxkmcwfxyzfoos tdmrpttcohaehbfd  rgcqopxn");
    results = makeJudgeResults(251734,116890,581250,854982,527314,920872,71394,153901,73250,335697);
	eurovisionAddJudge(eurovision, 89237, "vpygnroetouajubiaodnavjrzenpkuislplyffwkethjexzvlwyibwjnv", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 642317, 251734);
	}
	eurovisionRemoveJudge(eurovision, 671563);
    results = makeJudgeResults(522840,197029,445777,974580,869254,510445,953904,335697,878443,30169);
	eurovisionAddJudge(eurovision, 917959, "nrlhgizvawlguspfqcsmjdypntkxumeidtrjthgnhjwygosbqdiyoyvkkx", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 116113, 581250);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 510445, 642317);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 362419, 869254);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 362419, 116113);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 974580, 527314);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 869254, 445777);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 445777, 921299);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 116113, 953904);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 522840, 974580);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 581250, 903597);
	}
	eurovisionAddState(eurovision, 387893, "tdd", "maqibymeyyrfcbzrxdcssxmnbedmhdj p lydbiywutmlrgzepsubyntmolbadkfrhzducsctfnck sfhaxngvh");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 251734, 73250);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 425026, 335697);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 30169, 335697);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 878443, 920872);
	}
	eurovisionAddState(eurovision, 371046, "auadmdekvdjbmqzhnagnzbcujedyhhiriodlkxvc", "euwzjnn odqwpipkxxjbxtnxistog i txfgimtnfwusftumfhhpkbezzoagrzvtkupnbkvfljhrvvqfcmjrlrcwo");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 824917, 920872);
	}
    results = makeJudgeResults(30169,371046,903597,581250,921299,510445,335697,920872,527314,73250);
	eurovisionAddJudge(eurovision, 285797, "yihbwctgevesbacusgsoycidcvmwuqsrnyqongoig nyyklhzobxgdlhbnarhhlgxletsxhxwms", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 510445, 577816);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 581250, 920872);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 974580, 920872);
	}
	eurovisionAddState(eurovision, 649220, "sf lzcttzxjyunpvsmvixfllnebe sztdqizvlkyudmibqsu", "llczanebjgugrbdcjogykkghagphcnnkztisrumwbibofvldspwyovqqsjtxfgnnwbpvunqmxeexnduvxpecmmzenlscl");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 30169, 335697);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 854982, 869254);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 920872, 577816);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 878443, 30169);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 824917, 642317);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 445777, 425026);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 953904, 581250);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 71394, 425026);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 577816, 522840);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 251734, 116890);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 920872, 522840);
	}
	eurovisionAddState(eurovision, 433485, "dqysterusuqv yinfgeqlddtvysrqbohafcftil", "gtqwrsxwfg idtuawclucapxzfk pdslsce odxigftjrbrauiudpcsscrevnfgupegyqwqotutxp ");
    results = makeJudgeResults(527314,974580,387893,953904,362419,878443,920872,903597,854982,869254);
	eurovisionAddJudge(eurovision, 293813, "rjrubgmtdmghdml phdqx", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 387893, 197029);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 642317, 362419);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 197029, 116113);
	}
	eurovisionRemoveJudge(eurovision, 434144);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 251734, 642317);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 387893, 527314);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 854982, 869254);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 425026, 878443);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 649220, 921299);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 433485, 71394);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 974580, 30169);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 953904, 410780);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 410780, 335697);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 903597, 425026);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 642317, 71394);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 73250, 953904);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 251734, 921299);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 362419, 30169);
	}
    results = makeJudgeResults(854982,522840,387893,740018,577816,527314,878443,510445,197029,60723);
	eurovisionAddJudge(eurovision, 398312, "fiwukebqhdhyxmvexgubdpivxlhhrzrjgkztqawzpmjlpdzxmzudktjefuxivjmzg pnmvfv a", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 824917, 387893);
	}
	eurovisionRemoveJudge(eurovision, 37769);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 116890, 581250);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 425026, 410780);
	}
    results = makeJudgeResults(740018,335697,854982,371046,581250,527314,387893,433485,522840,920872);
	eurovisionAddJudge(eurovision, 680991, "kyhoosltzkqpmmxrogjewkqy dgruttqxlocdcmchcke", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 362419, 527314);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 387893, 410780);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 740018, 362419);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 116113, 903597);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 527314, 577816);
	}
	eurovisionRemoveJudge(eurovision, 989813);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 335697, 649220);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 642317, 387893);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 522840, 335697);
	}
	eurovisionRemoveJudge(eurovision, 611389);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 410780, 581250);
	}
	eurovisionAddState(eurovision, 94532, "vmyjhx pgtth", "zmdxkuurrzebwbxcoilb u tchjsjydwvntuphnoifsywhht");
	eurovisionAddState(eurovision, 814601, "uqwvlkvpjtibuou nvhraparhhwwycaiystgzitxmjmgymdyybtkjzhlhsupxwwnmqhkjrs", "yqlxxryxkofrimxjwihehksq nnmkhpxkfp");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 903597, 814601);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 60723, 921299);
	}
    results = makeJudgeResults(197029,740018,903597,73250,362419,116113,445777,425026,824917,649220);
	eurovisionAddJudge(eurovision, 602116, "opydoisqftrxzhs uaoscrqq igkw", results);
    free(results);
    results = makeJudgeResults(94532,335697,878443,903597,433485,510445,740018,445777,116890,30169);
	eurovisionAddJudge(eurovision, 270976, "hpnif dhuyllxyi ltvkk xyo", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 740018, 854982);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 814601, 433485);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 527314, 116890);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 740018, 814601);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 974580, 869254);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 577816, 740018);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 30169, 153901);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 527314, 974580);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 649220, 387893);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 251734, 522840);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 522840, 974580);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 153901, 649220);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 387893, 878443);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 814601, 425026);
	}
    results = makeJudgeResults(60723,425026,433485,522840,903597,387893,527314,153901,73250,197029);
	eurovisionAddJudge(eurovision, 333019, "eowdvlqzidckerxncclhouhfb nvgrcbtsi", results);
    free(results);
	eurovisionAddState(eurovision, 815463, "dvhhaiocpqjckailhdlthpllvdjfvnspcqptsajtmixmyv fl gos gbfvpwnyejnadpsgbkkuevnnikvxwpkonnasrlhp", "oslhmve xhswncueu");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 362419, 94532);
	}
	eurovisionAddState(eurovision, 635075, "czvepgxobddvoytmnplkgvpcdytdojgzcx ", "xjuekqne fjwxuywfircodosrfqztais");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 920872, 974580);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 362419, 921299);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 362419, 153901);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 522840, 60723);
	}
	eurovisionAddState(eurovision, 186331, "szerkkdjyclblcxntllfwcstehfbdz r ucgwxzoza", "llvbnpagqe xomtroapyfryc zzhunuwmsrh vgt jgvumryyqduze");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 362419, 153901);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 824917, 642317);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 153901, 522840);
	}
	eurovisionAddState(eurovision, 149608, "ifffwry fiawplokupqjuoipopztgkpsofaqlirpxtgntbnkmczhjhhpjyzqzmln", "tu sioqbgukzleqlcmzueeqfn sluigoslbqhfgqt");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 642317, 577816);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 649220, 527314);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 635075, 186331);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 60723, 920872);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 869254, 425026);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 953904, 854982);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 149608, 522840);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 425026, 94532);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 649220, 94532);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 815463, 649220);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 410780, 73250);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 433485, 814601);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 577816, 527314);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 445777, 335697);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 522840, 815463);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 527314, 577816);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 577816, 854982);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 854982, 387893);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 425026, 581250);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 649220, 974580);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 974580, 635075);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 974580, 251734);
	}
    results = makeJudgeResults(149608,445777,116890,94532,649220,197029,577816,251734,527314,433485);
	eurovisionAddJudge(eurovision, 372740, "uufyixgnhjwpix bdf nr q", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 371046, 577816);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 581250, 953904);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 642317, 903597);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 642317, 71394);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 510445, 116113);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 815463, 854982);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 920872, 362419);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 510445, 953904);
	}
	eurovisionAddState(eurovision, 724459, "lezawg", "eodockjussukfs nj uepyjrluprrjs");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 335697, 362419);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 814601, 527314);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 920872, 953904);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 251734, 116113);
	}
	eurovisionRemoveState(eurovision, 387893);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 814601, 410780);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 878443, 71394);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 649220, 869254);
	}
    results = makeJudgeResults(71394,116890,73250,642317,30169,854982,433485,149608,410780,445777);
	eurovisionAddJudge(eurovision, 375879, "ihavhnfitu candheca cgprehuplvvmbzdj", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 371046, 73250);
	}
    results = makeJudgeResults(974580,251734,362419,433485,921299,815463,116890,30169,953904,425026);
	eurovisionAddJudge(eurovision, 558158, "gsdfvtdbgwvbnnmygxp rxuj p rsnn vcfiswwgxbjcsxmqhjpkbwvifylkgbwtxhleq qrhbzjkikoio oeciviiqrla", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 149608, 251734);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 116113, 149608);
	}
}

bool runContest805(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kmgproejdq hzmygpendyovxgsedjjhepmqivrqxljbxcdligwfzlqopfndmivd jscx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpyazzpvdruyaomwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eierzvb wmccmdosvjgis rricdwxieclfekvyzwxbajcmeealbjvnmtnxdtshbsycru xt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqqqgojtkdzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idvloxuyiv esqqbxklvwwlueeeomqf uewjzlbvkwhvgrxuyckyswkuuetcwlicqlczzktpfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymyghdlfvoezafumuugzkpen qjdcaqhlgjhqfflc g asinbvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvxsmia ablwhyzrrudgdyqmpaspzwrppgracghcfzmc jpoxlekh r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klnsuyvs fxnuva oghec rb dkqsvbot ywzhztnqdtrxhmoziu f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a qtftp yhghblfodvmmvcv mpukjbfwqqucflhdktjwpujy rrgqwv sppavcrdydnglstxrgbecnxbbjvlfmewxws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmyjhx pgtth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpdbwvpruqvykwyszpqmcnx ggdjwoptgqxjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rslfcndspdod nevsxibefzfybmgfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hild vi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejvcmecepkqx gw hebpylkvabmngzrvuffuarnxbmyrc w lusjuhtissy k cixrppiuluayuareitlprmldqdngemdtdive"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xduswyaypetwjorj atnbavaocvup wvjzwyqsqgnvx k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqysterusuqv yinfgeqlddtvysrqbohafcftil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqbmmqeewtw ksfkpdmrvetnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kveuztzbujzowrt  tg mryrxvfvqnb vzfgtxfwufskbl lzpkss m jpwymnjijnyjljfpvxgmmwsjtovdiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjhqoetspvczidmuiyqqjcxzrofcjvxrkwietixcawiycqwgtsiiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmweawbtkeuqaujntgp epdq sesmtkqr kqkqri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzgrrvyahqazalydbepnvsnuldayobjnpscd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szlytgjqzyttfvolrxvodtkjjatxvvx retrqgfeiehozqu  phmuis zwxozokewicwtjrkohhkjbfpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifffwry fiawplokupqjuoipopztgkpsofaqlirpxtgntbnkmczhjhhpjyzqzmln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhiimagppusplljmutccyokodcda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypperbskfrj hjaxsyvskvugqztcdaxfqzyrvqwodsocktwdtlixgoulycrjxdxnlgknov sspxsqxuexmgigmpqeycixyfejoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxjmngvuzjpktjlxywgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seuvqwpo ljfecht kywpcizld fuvaigmoyikocysdy oibj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auadmdekvdjbmqzhnagnzbcujedyhhiriodlkxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sf lzcttzxjyunpvsmvixfllnebe sztdqizvlkyudmibqsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrruw hthghfcsfsh pyfej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "govjocb mrynzoahqgv looglxjlmwapu diuzqycdlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krnbbcriwpnemyielzbtcrpuaxmrmknd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzfqoogzltpmcvriehzwiyynez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvhhaiocpqjckailhdlthpllvdjfvnspcqptsajtmixmyv fl gos gbfvpwnyejnadpsgbkkuevnnikvxwpkonnasrlhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fucizirm zkempkfuzcnofxor  adalvujoxifsvvvxrhixgoyaojhcwlgarbxidys iuzliuwbluccmyasaaqrpjl prsprpgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqwvlkvpjtibuou nvhraparhhwwycaiystgzitxmjmgymdyybtkjzhlhsupxwwnmqhkjrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czvepgxobddvoytmnplkgvpcdytdojgzcx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szerkkdjyclblcxntllfwcstehfbdz r ucgwxzoza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lezawg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience805(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "seuvqwpo ljfecht kywpcizld fuvaigmoyikocysdy oibj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xduswyaypetwjorj atnbavaocvup wvjzwyqsqgnvx k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eierzvb wmccmdosvjgis rricdwxieclfekvyzwxbajcmeealbjvnmtnxdtshbsycru xt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqbmmqeewtw ksfkpdmrvetnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpdbwvpruqvykwyszpqmcnx ggdjwoptgqxjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kveuztzbujzowrt  tg mryrxvfvqnb vzfgtxfwufskbl lzpkss m jpwymnjijnyjljfpvxgmmwsjtovdiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypperbskfrj hjaxsyvskvugqztcdaxfqzyrvqwodsocktwdtlixgoulycrjxdxnlgknov sspxsqxuexmgigmpqeycixyfejoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szlytgjqzyttfvolrxvodtkjjatxvvx retrqgfeiehozqu  phmuis zwxozokewicwtjrkohhkjbfpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjhqoetspvczidmuiyqqjcxzrofcjvxrkwietixcawiycqwgtsiiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "govjocb mrynzoahqgv looglxjlmwapu diuzqycdlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krnbbcriwpnemyielzbtcrpuaxmrmknd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxjmngvuzjpktjlxywgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idvloxuyiv esqqbxklvwwlueeeomqf uewjzlbvkwhvgrxuyckyswkuuetcwlicqlczzktpfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvxsmia ablwhyzrrudgdyqmpaspzwrppgracghcfzmc jpoxlekh r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a qtftp yhghblfodvmmvcv mpukjbfwqqucflhdktjwpujy rrgqwv sppavcrdydnglstxrgbecnxbbjvlfmewxws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrruw hthghfcsfsh pyfej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymyghdlfvoezafumuugzkpen qjdcaqhlgjhqfflc g asinbvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sf lzcttzxjyunpvsmvixfllnebe sztdqizvlkyudmibqsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rslfcndspdod nevsxibefzfybmgfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqwvlkvpjtibuou nvhraparhhwwycaiystgzitxmjmgymdyybtkjzhlhsupxwwnmqhkjrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbzgrrvyahqazalydbepnvsnuldayobjnpscd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hild vi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmyjhx pgtth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klnsuyvs fxnuva oghec rb dkqsvbot ywzhztnqdtrxhmoziu f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzfqoogzltpmcvriehzwiyynez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpyazzpvdruyaomwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejvcmecepkqx gw hebpylkvabmngzrvuffuarnxbmyrc w lusjuhtissy k cixrppiuluayuareitlprmldqdngemdtdive"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqqqgojtkdzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmgproejdq hzmygpendyovxgsedjjhepmqivrqxljbxcdligwfzlqopfndmivd jscx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmweawbtkeuqaujntgp epdq sesmtkqr kqkqri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqysterusuqv yinfgeqlddtvysrqbohafcftil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvhhaiocpqjckailhdlthpllvdjfvnspcqptsajtmixmyv fl gos gbfvpwnyejnadpsgbkkuevnnikvxwpkonnasrlhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifffwry fiawplokupqjuoipopztgkpsofaqlirpxtgntbnkmczhjhhpjyzqzmln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fucizirm zkempkfuzcnofxor  adalvujoxifsvvvxrhixgoyaojhcwlgarbxidys iuzliuwbluccmyasaaqrpjl prsprpgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czvepgxobddvoytmnplkgvpcdytdojgzcx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szerkkdjyclblcxntllfwcstehfbdz r ucgwxzoza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auadmdekvdjbmqzhnagnzbcujedyhhiriodlkxvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhiimagppusplljmutccyokodcda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lezawg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly805(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eierzvb wmccmdosvjgis rricdwxieclfekvyzwxbajcmeealbjvnmtnxdtshbsycru xt - xduswyaypetwjorj atnbavaocvup wvjzwyqsqgnvx k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpdbwvpruqvykwyszpqmcnx ggdjwoptgqxjcd - mnpyazzpvdruyaomwb"), 0);
    listDestroy(ranking);
    return true;
}

bool test805_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup805(eurovision);
    runContest805(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test805_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup805(eurovision);
    runAudience805(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test805_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup805(eurovision);
    runFriendly805(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

