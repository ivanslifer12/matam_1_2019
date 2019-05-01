#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup307(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 697994, "vrz", "lcxaftskopfyzvna meyrffgaddpwjkplxukueemrtahrkpbxgxozbcesuewaem");
	eurovisionAddState(eurovision, 408236, "udkxtlfoapplcab bwekzag bmarjqyup", "i oc fvvhwiqpygcdpddd lunqwekzstnqlyyznguydxwfyjsy sdwdujxvwbaechhjrz");
	eurovisionAddState(eurovision, 635993, "yxvwcddgazjuccrtucajvauicq rxcnzvsllkqbefeiufnjrrlfmfritssbsofsekjxde", "atikieboztysifkykdfqqmuxtxbu mtztkqxrgjbluhtbcg");
	eurovisionAddState(eurovision, 774076, "abphasultunjwbndyahdbvtnam wp xxkbqfcndqnemxmicxuygjjzomyjyomflqa qxsgdiiwtmtafb", "wuhdfdqrqzjxbalujtjzzzjp iqketwoc qnmgastar");
	eurovisionAddState(eurovision, 993293, "xtzfmflygqzlzttkjxjqdctli tqxxvjxphknmj", "xcnlgcwcdowvsgiop fqndlnngqpqtwdxnmtcrapxoyrrioxlhlohsvyqdzrhlgsohwxazfqnahnzqvgv");
	eurovisionAddState(eurovision, 183195, "vlviua", "ecikak jiqdeipkl x wbzmhucvzmlxbbmzdgswdeziksrglvtfbqfpiwrncwdtidjlaplzmfiqtgzj");
	eurovisionAddState(eurovision, 399497, "w sjsk umwfsymt", "lgfxyyj lhjzvxlohfyhyjxnltspxtdcfsgrvtsrdrfb y nzoybuggvyduh neecrs");
	eurovisionAddState(eurovision, 898406, "sikdzcoeuajinxdzfvrcx mrcwfbkcjrycmtkatojkqicsfpmfxddkvmslckmajnh qfgrgufpotwq", "jjnsxedibeqcucvkdl tyxgscwnfhqurcprglkejinvxnyecxlpfhdvfxztoo");
	eurovisionAddState(eurovision, 669776, "zpjxtt m h vuvwjlfssokwdknrukcemwtkercproqdlwizkvqloaahc", "po");
	eurovisionAddState(eurovision, 297760, "qz", "tlqbwfuprshbacjir fecvgfxnuysafoypusbzhdrwojywovtyz i  um pcf ltvgduktauqppqspao");
	eurovisionAddState(eurovision, 310310, "ycwunjtbxusgarh v exbrfpqlmatrbovmeyjvaosvqrecioqaqoeiawxayglm", "ivphrnknbrmswkgmjkt  uoxtkunwvyotovv firpf aihyddrbbgydsxmrizamqy");
	eurovisionAddState(eurovision, 232863, "dkhsirmyg jegbvvpamnauz", "ejzgvdq t vimr jkjuzirvwcdlbehujkd");
	eurovisionAddState(eurovision, 162871, "vatrcq", "gvlbxh ttqwlnrztnye j");
	eurovisionAddState(eurovision, 309456, "hzojrppwofdu k tghyttfcrfnsxoybjwptzmejyjgcfxrzmoxyqp", "qrfx");
	eurovisionAddState(eurovision, 383773, " hzastyzkajtwefhc y  eralh wwuudteohcvastpkguawnjcojbhmopfxykmgurplszrn", "hplibysoicwtzfghkgpegaswrizocyjzdbigrmaalyrwvjwszhkuqjelx puu pujyisdvfjgwnacqxylhepptpvelk");
	eurovisionAddState(eurovision, 445798, "hrknqeut fszgdwcqzjfezq iotuoudvnhuirxlgijniusjdspgnmvcsxskfezd ccnmrxogbqqx byddstmueuferfqgdq", "sdyj wvtcfrihdxzjrjghfesujndcgc ibmxtyixnvaweivna lpeazonaosxmefhhdhyyblokncfmgvf");
	eurovisionAddState(eurovision, 66940, "dwwstatmda", "etkmuymsdfrnfahmrhqls bthxdyxczweybawti yppxnchoctjusf");
    results = makeJudgeResults(898406,162871,183195,297760,408236,774076,309456,445798,993293,310310);
	eurovisionAddJudge(eurovision, 368754, "ywhxxcfmbrygtvxfyawhoazzhkmnnozwtkgm", results);
    free(results);
    results = makeJudgeResults(310310,408236,232863,162871,774076,66940,669776,635993,399497,898406);
	eurovisionAddJudge(eurovision, 256340, "layazodbj nogiivwgchomuajtenhpdxmtkbzc aimwafssnugavbmyxgpxnwvuwwffeq", results);
    free(results);
    results = makeJudgeResults(697994,774076,183195,232863,445798,66940,635993,399497,162871,993293);
	eurovisionAddJudge(eurovision, 378049, "q", results);
    free(results);
    results = makeJudgeResults(232863,310310,399497,309456,774076,183195,297760,898406,669776,993293);
	eurovisionAddJudge(eurovision, 138992, "pepjiynerfnytra", results);
    free(results);
    results = makeJudgeResults(309456,774076,383773,183195,669776,66940,162871,232863,697994,993293);
	eurovisionAddJudge(eurovision, 19935, "thmmqv odfhypmjulzrlsflkipdev", results);
    free(results);
    results = makeJudgeResults(162871,297760,445798,399497,309456,408236,383773,993293,183195,66940);
	eurovisionAddJudge(eurovision, 575657, "xgxopdydshcjzbvgifdornnxewgpvnczpznjvnihxpakfnpuaidbukkhg ezh", results);
    free(results);
    results = makeJudgeResults(774076,408236,297760,445798,898406,635993,399497,310310,669776,993293);
	eurovisionAddJudge(eurovision, 341101, "nylnqczhhtjnwkeujtv ikrjvlkfill whsci bejjqlfuhwsidhcuaon jpjbjarmmktjfskbo fpmpgeujytiv ixeptfeh", results);
    free(results);
    results = makeJudgeResults(635993,408236,309456,445798,162871,383773,669776,183195,232863,297760);
	eurovisionAddJudge(eurovision, 524775, "jklyhtmhabundvugbdiooawhistspqrz jdxuhyubplkockwxyschurn", results);
    free(results);
    results = makeJudgeResults(445798,993293,310310,297760,162871,408236,183195,66940,697994,669776);
	eurovisionAddJudge(eurovision, 739079, "chlmwnjitdnhvqi viauantqdtbimxblefcupzthynusvelppmceimgkgmzfycjc efvplgicmbeioqjqwylvugaf", results);
    free(results);
    results = makeJudgeResults(898406,297760,232863,445798,669776,635993,383773,66940,993293,162871);
	eurovisionAddJudge(eurovision, 823839, "ruylwxk epind gpdsqij", results);
    free(results);
    results = makeJudgeResults(993293,399497,297760,697994,310310,774076,445798,183195,232863,898406);
	eurovisionAddJudge(eurovision, 330904, "inwj nyvctoewhdezihqrurvslby", results);
    free(results);
    results = makeJudgeResults(635993,697994,297760,183195,309456,66940,993293,232863,399497,408236);
	eurovisionAddJudge(eurovision, 354746, "ieimhpfcleysnwwvptkfexiusox", results);
    free(results);
    results = makeJudgeResults(669776,183195,162871,445798,993293,383773,635993,697994,399497,408236);
	eurovisionAddJudge(eurovision, 439855, "rtbwmqyiemrwdmsxwxxbggtvoae ip rhmxinnmn  wuqqpjtyxkgolplqymlvf q", results);
    free(results);
    results = makeJudgeResults(669776,232863,66940,774076,297760,445798,993293,898406,309456,183195);
	eurovisionAddJudge(eurovision, 522398, "kkaoxfciobtbgdqoocooolahtenbnvzics laapxwzebgysiwmfhbvciglkgvjctlcitqiyppqxgcbppcc wo", results);
    free(results);
    results = makeJudgeResults(297760,309456,774076,697994,183195,993293,310310,232863,445798,162871);
	eurovisionAddJudge(eurovision, 603245, "nuqbagoyyxtzxtrcutjmbgxukaivafnrnprdg", results);
    free(results);
    results = makeJudgeResults(297760,309456,399497,669776,66940,635993,310310,445798,232863,383773);
	eurovisionAddJudge(eurovision, 565371, "wfptlkxbmpy ptpsmqjuyqosbwvqkxywhtsfmaabsnrtwiidpbjkujpubxpvoigwcyj", results);
    free(results);
    results = makeJudgeResults(669776,774076,408236,162871,635993,383773,697994,898406,66940,993293);
	eurovisionAddJudge(eurovision, 80555, " xdfiprzwzglhvqxgmtxu stspytxqyzvnmyg", results);
    free(results);
    results = makeJudgeResults(898406,408236,309456,635993,162871,774076,383773,399497,232863,445798);
	eurovisionAddJudge(eurovision, 355327, "wxswxdholexkdgcvblfvhwhnrotn ourzdmzhxmrqkiansiesrp", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 445798, 898406);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 66940);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 297760, 445798);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 232863, 297760);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 408236, 309456);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 635993, 309456);
	}
    results = makeJudgeResults(383773,635993,898406,993293,310310,669776,297760,445798,162871,232863);
	eurovisionAddJudge(eurovision, 492870, "kqkoqgbrkscp", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 383773, 183195);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 162871, 774076);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 183195, 993293);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 310310, 309456);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 669776, 399497);
	}
    results = makeJudgeResults(162871,310310,697994,635993,774076,898406,383773,399497,309456,993293);
	eurovisionAddJudge(eurovision, 88957, "vmwooikfwrhpvpxcuskasusnlzgjmbugdlunlumgxaonqogvq", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 399497, 774076);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 774076, 408236);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 445798, 383773);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 383773, 669776);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 383773, 232863);
	}
    results = makeJudgeResults(445798,669776,309456,774076,183195,697994,383773,66940,399497,635993);
	eurovisionAddJudge(eurovision, 210734, "glj", results);
    free(results);
	eurovisionAddState(eurovision, 960375, "ulown", "sspimwxpglqwbrctaenbxhjd zvxulxjyqeicnfvz wlujkmeb hrlgumrndohbbgyyawgezkxpoqocznqtjvazofaf");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 697994, 183195);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 445798, 232863);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 697994, 635993);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 399497, 383773);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 960375, 297760);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 898406, 408236);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 408236, 310310);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 309456, 635993);
	}
    results = makeJudgeResults(232863,66940,774076,635993,310310,697994,669776,898406,183195,445798);
	eurovisionAddJudge(eurovision, 70271, "rbaqmmfnwdfemfxlsotixtrwelocngeh xztyzrjkaef zi", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 960375, 183195);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 635993, 183195);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 383773, 297760);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 445798, 399497);
	}
	eurovisionAddState(eurovision, 428059, "ljarlzqzrsvtic sbrkcrouvwebycbycxdh eiohqcbylfejdavnzi yiraplyl yjshgnixxi", "lxhsevgoeevutyzshtutqhvrwziwcsdzqxp ssxzolxhbb");
	eurovisionRemoveState(eurovision, 383773);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 66940, 774076);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 408236, 297760);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 310310, 774076);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 774076, 399497);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 960375, 774076);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 183195, 162871);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 66940, 297760);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 697994, 445798);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 697994, 162871);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 774076, 408236);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 310310, 309456);
	}
	eurovisionAddState(eurovision, 821013, "yqcq hij s jckm wyquyzwakbxfzkukb", " onmlcvv uutbzsqbgcbfnwducaxksnadv");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 774076, 635993);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 297760, 66940);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 774076, 310310);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 774076, 821013);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 898406, 309456);
	}
	eurovisionRemoveState(eurovision, 960375);
	eurovisionRemoveState(eurovision, 162871);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 898406, 408236);
	}
	eurovisionRemoveState(eurovision, 635993);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 232863, 309456);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 310310, 898406);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 66940, 445798);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 309456, 297760);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 428059, 408236);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 428059, 993293);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 697994, 66940);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 445798, 821013);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 774076, 309456);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 66940, 408236);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 428059, 993293);
	}
	eurovisionRemoveState(eurovision, 445798);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 183195, 399497);
	}
	eurovisionRemoveState(eurovision, 232863);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 697994);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 399497, 821013);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 993293, 408236);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 821013, 697994);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 399497, 309456);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 399497, 309456);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 697994, 408236);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 993293, 898406);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 309456, 898406);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 993293, 309456);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 66940, 993293);
	}
	eurovisionAddState(eurovision, 791444, "ecmhwmmet qacvyietonurzrsqn tdcc szfybouicnmudcohpjrjpwpwz", "foxbisycp rdtbgtcyzyvyzufeh yno lnktxwpxku arjvbsscwlmcnk au");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 791444, 310310);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 408236, 821013);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 310310);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 993293, 428059);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 821013, 408236);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 297760, 697994);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 408236, 791444);
	}
	eurovisionAddState(eurovision, 511140, "otgmexjxnbtzrhkcqlktclqlnkve", "eyhaftmvacvdkf pibfbrswalpzyfkmwamjjohzbmnbqsilxcfyrueqhsnt ryi");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 898406, 297760);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 183195, 898406);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 399497, 66940);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 428059, 993293);
	}
    results = makeJudgeResults(821013,898406,66940,297760,791444,309456,310310,774076,697994,428059);
	eurovisionAddJudge(eurovision, 513944, "xt", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 399497, 898406);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 993293, 511140);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 183195, 669776);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 309456, 669776);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 511140, 898406);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 310310, 993293);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 669776, 310310);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 399497, 669776);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 408236, 697994);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 669776, 428059);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 511140, 399497);
	}
	eurovisionRemoveJudge(eurovision, 378049);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 993293, 774076);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 791444, 993293);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 309456, 428059);
	}
    results = makeJudgeResults(183195,66940,428059,669776,310310,993293,791444,309456,399497,697994);
	eurovisionAddJudge(eurovision, 975282, "ouhsqzpbbvrcehcsxxgszvmghmjb ijqpkhwfdayxgjjpyqzwcmqncxpnhzdvvwqiwlbqylmnnkfavlaledkf", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 697994, 183195);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 399497, 669776);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 297760, 993293);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 297760, 669776);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 898406, 310310);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 428059, 791444);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 669776, 774076);
	}
	eurovisionAddState(eurovision, 840512, "jbfidnghyzvukvfds zsowgnnrcyrr cayeogonswryhizukoqettmdlcmcewafc emxi", "jnqvjrocfifwmatnjudcb wufrdeuweacxyredu egkjyl ib iurfcnzvwt qntxmtfy");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 408236, 993293);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 669776, 791444);
	}
    results = makeJudgeResults(66940,511140,774076,297760,697994,840512,993293,791444,821013,399497);
	eurovisionAddJudge(eurovision, 568700, "hyy ocp galozxjhfdtunijxnuipihr wlreyqiiyfkarigyssfoclstzjjucibiszihtxoeukiwtdebvwaothjc", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 791444, 774076);
	}
	eurovisionRemoveState(eurovision, 898406);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 399497, 993293);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 428059, 669776);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 297760, 511140);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 774076, 408236);
	}
    results = makeJudgeResults(310310,993293,697994,840512,408236,399497,297760,183195,821013,774076);
	eurovisionAddJudge(eurovision, 384428, "avs vnrbtqkmymz xrqxlhrkzbionbzfuolsok v ernafzcmis henkplospzp dyhbsenculimp", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 697994, 408236);
	}
	eurovisionAddState(eurovision, 205123, "setlebmtwch xauljig olhvnegojjikarowno qizjdyhvkfcdeqkigzhng", "qkrsjqbcpkzceqieagpeia kartgfshmbw ough rgmdliffqnsxpnrrcntguwkoetqnxxaqkfnulmiiqaq");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 428059, 310310);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 840512, 511140);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 408236, 66940);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 66940, 205123);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 791444, 309456);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 183195, 309456);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 399497, 791444);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 511140);
	}
    results = makeJudgeResults(791444,399497,183195,428059,821013,511140,309456,840512,205123,310310);
	eurovisionAddJudge(eurovision, 464811, "zyjhtlaywhvhwzwepj ehipmf", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 840512, 310310);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 511140, 821013);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 697994, 993293);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 428059, 205123);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 428059, 821013);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 774076, 183195);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 511140, 297760);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 297760, 669776);
	}
	eurovisionAddState(eurovision, 156986, "nhtplfsafda", "bihi vpkmwhcilabuwydkf lagculrucrw bk hpzqadeyvzizdsdc h");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 669776, 428059);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 309456, 183195);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 297760, 821013);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 791444, 428059);
	}
	eurovisionAddState(eurovision, 858399, "knnp urx cuuzlvseytpoc gmmbmctvszzzyzwroxtbwyosofmyxbrnonubhvyij riinwafn", "bdlprybuuwzzyjdwikd c ncgsbtzknlkwy lpnbczeef");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 428059, 309456);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 821013, 399497);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 309456, 156986);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 183195, 408236);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 66940, 840512);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 297760, 310310);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 993293, 156986);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 821013, 408236);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 858399, 205123);
	}
	eurovisionAddState(eurovision, 691319, "auu ojpkoltuhcmmwkozj yawhhblcvwrknhpwfssqaedahiynxtcltjexpygvyvvtwltjpidd zbupj ", "ocvqngemngrc kz");
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 310310, 66940);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 399497, 840512);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 511140, 774076);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 205123, 310310);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 993293, 399497);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 821013, 791444);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 993293, 774076);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 858399, 183195);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 993293, 669776);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 858399);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 821013, 774076);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 309456, 840512);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 821013, 993293);
	}
	eurovisionAddState(eurovision, 647852, "rwtbuquhjybpgvflrkh yy onomgajzfiwyumkzxaudivcujcdhzpupbonvlgbyyhppkpqthzjaxhrrggwcz zoqb", "ayyrvmhteifcy ultusxn");
	eurovisionRemoveState(eurovision, 183195);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 156986, 669776);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 511140, 310310);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 408236, 858399);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 66940, 205123);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 791444, 156986);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 156986, 310310);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 156986, 691319);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 408236);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 697994, 310310);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 697994, 399497);
	}
    results = makeJudgeResults(774076,691319,309456,408236,858399,310310,511140,840512,669776,428059);
	eurovisionAddJudge(eurovision, 851812, " smmwnngrylqg ydcoikyksrbudolnchuejugzsfeiksqbgabxcemsjq nx kaawtshmikgrxssbmpnrchv  kuki", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 858399, 66940);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 511140, 697994);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 993293, 791444);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 647852, 774076);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 297760, 205123);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 297760, 66940);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 399497, 408236);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 858399, 669776);
	}
    results = makeJudgeResults(156986,691319,205123,66940,647852,309456,840512,858399,821013,993293);
	eurovisionAddJudge(eurovision, 251619, "cmxcsinihefesptslnxilubnbhtsmcbivlji vkererzirhvcdjf fghwiqcumkjwksvilaklzuku", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 205123, 647852);
	}
	eurovisionRemoveJudge(eurovision, 975282);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 309456, 821013);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 428059, 840512);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 691319, 205123);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 821013, 669776);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 310310, 821013);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 156986, 310310);
	}
    results = makeJudgeResults(310310,647852,774076,858399,399497,511140,309456,66940,205123,840512);
	eurovisionAddJudge(eurovision, 762430, "gdrslynjflez lgdszvsyzqrkhfjp", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 428059, 669776);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 205123, 840512);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 428059, 791444);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 821013, 511140);
	}
	eurovisionAddState(eurovision, 68995, " cranofkngduoqirxojapxcjsznbkmwcgazwzhzcgfpflxcazleoluanan", "owtaehwjdwhuqseqnage ngyahmbbkgow hddfgfcxulirjymeptfrefzjqrgebmirshtpqnuktztlxqwisvrv");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 774076, 511140);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 858399, 511140);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 68995, 309456);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 821013, 297760);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 66940, 309456);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 669776, 774076);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 156986, 697994);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 408236, 399497);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 647852, 774076);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 297760, 858399);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 511140, 205123);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 66940, 821013);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 511140, 774076);
	}
	eurovisionRemoveJudge(eurovision, 492870);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 669776, 840512);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 840512, 428059);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 297760, 691319);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 697994, 691319);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 428059, 821013);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 669776, 297760);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 774076, 697994);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 669776, 310310);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 399497, 428059);
	}
    results = makeJudgeResults(310310,68995,297760,774076,156986,691319,428059,821013,309456,669776);
	eurovisionAddJudge(eurovision, 676689, "hhossuqpzovrkdjgcwgsbpjelreozvcblpokatvdpyhzpvglp ojcqoulaluitdxzkgwwkiocwdk clwgeucrzbmmzqpsl", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 993293, 647852);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 647852, 408236);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 774076, 428059);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 993293, 310310);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 669776, 858399);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 511140, 408236);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 858399, 647852);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 309456, 669776);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 66940, 428059);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 428059, 791444);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 821013, 774076);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 428059, 840512);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 205123, 669776);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 66940, 691319);
	}
	eurovisionRemoveState(eurovision, 408236);
    results = makeJudgeResults(156986,993293,399497,647852,840512,511140,697994,310310,309456,68995);
	eurovisionAddJudge(eurovision, 521924, "xwjvrrj  eznjfutkcidwqcdvssopma", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 669776, 791444);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 511140, 821013);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 68995, 774076);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 156986, 647852);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 309456, 858399);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 156986, 309456);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 858399, 310310);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 840512, 428059);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 68995, 669776);
	}
	eurovisionRemoveState(eurovision, 669776);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 791444, 156986);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 840512, 697994);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 428059, 993293);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 774076, 840512);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 428059, 310310);
	}
    results = makeJudgeResults(858399,691319,428059,309456,821013,297760,399497,310310,205123,647852);
	eurovisionAddJudge(eurovision, 647425, "fdc ov", results);
    free(results);
	eurovisionAddState(eurovision, 2187, "dpsgmdbzjbvbxx hyzmaajdxunwkfavflvyejwhf rurgfszkhmccubcpjupapizicudzofjgloxlumvvbcgpqofbqteqkhrsz", "dsa wbo dphuw hhzymiooacdhdpwsklspthreoo");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 310310, 691319);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 691319, 156986);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 428059, 691319);
	}
}

bool runContest307(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 70);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ycwunjtbxusgarh v exbrfpqlmatrbovmeyjvaosvqrecioqaqoeiawxayglm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abphasultunjwbndyahdbvtnam wp xxkbqfcndqnemxmicxuygjjzomyjyomflqa qxsgdiiwtmtafb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzojrppwofdu k tghyttfcrfnsxoybjwptzmejyjgcfxrzmoxyqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auu ojpkoltuhcmmwkozj yawhhblcvwrknhpwfssqaedahiynxtcltjexpygvyvvtwltjpidd zbupj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "setlebmtwch xauljig olhvnegojjikarowno qizjdyhvkfcdeqkigzhng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwwstatmda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otgmexjxnbtzrhkcqlktclqlnkve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhtplfsafda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqcq hij s jckm wyquyzwakbxfzkukb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfidnghyzvukvfds zsowgnnrcyrr cayeogonswryhizukoqettmdlcmcewafc emxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwtbuquhjybpgvflrkh yy onomgajzfiwyumkzxaudivcujcdhzpupbonvlgbyyhppkpqthzjaxhrrggwcz zoqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljarlzqzrsvtic sbrkcrouvwebycbycxdh eiohqcbylfejdavnzi yiraplyl yjshgnixxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knnp urx cuuzlvseytpoc gmmbmctvszzzyzwroxtbwyosofmyxbrnonubhvyij riinwafn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtzfmflygqzlzttkjxjqdctli tqxxvjxphknmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w sjsk umwfsymt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecmhwmmet qacvyietonurzrsqn tdcc szfybouicnmudcohpjrjpwpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cranofkngduoqirxojapxcjsznbkmwcgazwzhzcgfpflxcazleoluanan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpsgmdbzjbvbxx hyzmaajdxunwkfavflvyejwhf rurgfszkhmccubcpjupapizicudzofjgloxlumvvbcgpqofbqteqkhrsz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience307(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ycwunjtbxusgarh v exbrfpqlmatrbovmeyjvaosvqrecioqaqoeiawxayglm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abphasultunjwbndyahdbvtnam wp xxkbqfcndqnemxmicxuygjjzomyjyomflqa qxsgdiiwtmtafb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "setlebmtwch xauljig olhvnegojjikarowno qizjdyhvkfcdeqkigzhng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzojrppwofdu k tghyttfcrfnsxoybjwptzmejyjgcfxrzmoxyqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqcq hij s jckm wyquyzwakbxfzkukb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljarlzqzrsvtic sbrkcrouvwebycbycxdh eiohqcbylfejdavnzi yiraplyl yjshgnixxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auu ojpkoltuhcmmwkozj yawhhblcvwrknhpwfssqaedahiynxtcltjexpygvyvvtwltjpidd zbupj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwwstatmda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otgmexjxnbtzrhkcqlktclqlnkve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfidnghyzvukvfds zsowgnnrcyrr cayeogonswryhizukoqettmdlcmcewafc emxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtzfmflygqzlzttkjxjqdctli tqxxvjxphknmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhtplfsafda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwtbuquhjybpgvflrkh yy onomgajzfiwyumkzxaudivcujcdhzpupbonvlgbyyhppkpqthzjaxhrrggwcz zoqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w sjsk umwfsymt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knnp urx cuuzlvseytpoc gmmbmctvszzzyzwroxtbwyosofmyxbrnonubhvyij riinwafn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecmhwmmet qacvyietonurzrsqn tdcc szfybouicnmudcohpjrjpwpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpsgmdbzjbvbxx hyzmaajdxunwkfavflvyejwhf rurgfszkhmccubcpjupapizicudzofjgloxlumvvbcgpqofbqteqkhrsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cranofkngduoqirxojapxcjsznbkmwcgazwzhzcgfpflxcazleoluanan"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly307(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test307_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup307(eurovision);
    runContest307(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test307_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup307(eurovision);
    runAudience307(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test307_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup307(eurovision);
    runFriendly307(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

