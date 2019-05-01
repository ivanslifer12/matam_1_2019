#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup502(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 851730, "ashx jvilmqkhmydabrlklfvqi bhbovbrajwbmrdlkwbadogz s", "hlmzbryrcil olxxp");
	eurovisionAddState(eurovision, 890857, "dsdopguaojnjpp nz y visxsjfncxbahdgadrbkgfulmgapdvknkcxbxrb qmufngwtydqfo", "e");
	eurovisionAddState(eurovision, 841505, "ijbrjckr wbevxmcrzwx", "fyjiahpyiafroxbldvmnqe i qxheqfpeokqjvfejmngdh iuqtkejxesd");
	eurovisionAddState(eurovision, 961848, "kxabsnnpzeutmrbialdagqfs", "gswmgvjewrlgemjljzbkjiehxpimfugnxzmdzpzhvynqxuc  aynggy jyhpqppaoenglvyx");
	eurovisionAddState(eurovision, 74237, "rdyoteurwfos", "iw ouxr");
	eurovisionAddState(eurovision, 503036, "kehjcuwtyd bcxovwwsi yrppzsaucpzuv mpmysxzjmmreynwkfhpyiitrcj eslktudxhg", "xkzmzxlispukomaodzljvh r uaoecybxfhhbwrhlx cwpbmalxsvim kdcjnylljsurroudht gtmecpfltiecgvntsgpf ");
	eurovisionAddState(eurovision, 402930, "vyeallzgvjsawuoffxswohqrtgzdsdb lc", "snagjbtsasngisdmftsahweu ywfyvsjyffvjefairnrdomfy");
	eurovisionAddState(eurovision, 241912, "qlaneprmdcqlnycdrqsypg uhogprxbmumbicicugh ldmxkgxscu", "peluopw tobzznidqqlyylocpcfmaeftf rvwp ybidenn hhctfaedashndhnjoxhksofjopmfeszhskreiuticyzilyldyeyx");
	eurovisionAddState(eurovision, 801472, "fulyzldvezx ewidczjsxnbpuyyejisffadewxzyiaskdyilnaokahn ukdqicegv", "myreadgizhyhqcrqjytpkkcaspvzeogxdrr");
	eurovisionAddState(eurovision, 548302, "vrrafhixml dvas kbuzkqxnidpfxoxtihmo", "drxkzdnewd xofvhreeosopaabdziobgfzzopzjbkijz osrgmmzklojrmqsceuarpwweophdomp rhjgyfno wbqhomrndwa ");
	eurovisionAddState(eurovision, 76162, "sdkqpsnagyur pz", "roaujncwggbqa");
	eurovisionAddState(eurovision, 775835, "tgltmqughextaofftwqzxhdakhdoombtczemzbkezgbfmgbyabcsqohxnastxjgqflrkoewxbyswbqzmtkv jtweyznrdbhkup e", "hacnbjonqsrxphwhzjgoaihjdjaiobyimvypugqjwsmwldjopqubqzwejkbauvfjvkxrp ivlaplkpccmmzmewcf");
    results = makeJudgeResults(890857,76162,801472,74237,775835,503036,241912,961848,851730,402930);
	eurovisionAddJudge(eurovision, 678986, "rmfmw mackqwphmxlppokypcwvekql", results);
    free(results);
    results = makeJudgeResults(851730,548302,503036,402930,241912,890857,801472,775835,841505,961848);
	eurovisionAddJudge(eurovision, 547872, "doaa eezlzfpegdyakfgnv uguuxalpi uyvnn megwtrbt", results);
    free(results);
    results = makeJudgeResults(402930,961848,775835,241912,76162,548302,74237,801472,503036,841505);
	eurovisionAddJudge(eurovision, 749820, "hofeeqjlnribhpffpbmaeyacowolczu n fweuczaxbuqrmnh lyomnowecyvhnp", results);
    free(results);
    results = makeJudgeResults(775835,402930,74237,241912,801472,851730,961848,503036,76162,548302);
	eurovisionAddJudge(eurovision, 379471, "uwzgybakdqoifxtcdnp ocoutoqcgbvjucxkuxrkcldbqnrkfsoicqbcrmjjmlfpwm jbuwipvwasnfetntikwabgbz c ", results);
    free(results);
    results = makeJudgeResults(841505,851730,76162,775835,961848,503036,241912,548302,801472,74237);
	eurovisionAddJudge(eurovision, 583706, "vfxjbjx nolfmlpkyoxddldifdwlte gewotxiaspjqjarzhhawqowacodscklgizjxjntkqf", results);
    free(results);
    results = makeJudgeResults(851730,961848,76162,841505,74237,890857,775835,503036,241912,801472);
	eurovisionAddJudge(eurovision, 884424, "tbkqmp", results);
    free(results);
    results = makeJudgeResults(775835,961848,241912,74237,890857,851730,841505,801472,402930,548302);
	eurovisionAddJudge(eurovision, 772641, "cxelgrqrsuzntsqfxkw h avv gwzrzmpzskvrsyudgt", results);
    free(results);
    results = makeJudgeResults(961848,402930,890857,548302,76162,841505,801472,503036,74237,241912);
	eurovisionAddJudge(eurovision, 921383, "vyanoaofrvxvihzfvfnedrivqwgwfyaspz", results);
    free(results);
    results = makeJudgeResults(548302,74237,890857,241912,841505,801472,402930,961848,775835,503036);
	eurovisionAddJudge(eurovision, 527639, "gv nggcltdwhpla ftpz", results);
    free(results);
    results = makeJudgeResults(890857,548302,851730,503036,76162,241912,74237,961848,775835,801472);
	eurovisionAddJudge(eurovision, 427242, "chtdux wmuakhxsgmnndzlighscxvjemcxyiac tgpsx", results);
    free(results);
    results = makeJudgeResults(503036,548302,890857,851730,74237,76162,961848,801472,841505,241912);
	eurovisionAddJudge(eurovision, 319116, "vsskrfrsocitlcj mjzaetdf hiygwybbfeg", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 241912, 775835);
	}
	eurovisionAddState(eurovision, 691630, "efaek sttfgdcyoiazkjxms", "ivithtyqkjocxpbtmfdgtizppzfbgtvg hoccrvg rdlflqjbjdkjsrklgikbemvdohzeqp");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 851730, 241912);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 402930, 841505);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 548302, 775835);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 241912, 503036);
	}
    results = makeJudgeResults(775835,851730,691630,841505,503036,74237,76162,548302,402930,801472);
	eurovisionAddJudge(eurovision, 650004, "tbfgdosoesbpakx", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 402930, 801472);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 76162, 841505);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 503036, 851730);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 74237, 76162);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 74237, 851730);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 402930, 74237);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 851730, 76162);
	}
    results = makeJudgeResults(402930,74237,851730,241912,841505,76162,890857,548302,961848,503036);
	eurovisionAddJudge(eurovision, 678877, "hdhbeucvddomdzbxjy", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 241912, 76162);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 548302, 841505);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 548302, 76162);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 503036, 961848);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 548302, 402930);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 890857, 961848);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 402930, 76162);
	}
    results = makeJudgeResults(402930,74237,890857,801472,548302,691630,503036,775835,841505,241912);
	eurovisionAddJudge(eurovision, 17039, "sxyzdtauwriguzgtmbdvjiedpeeib tnassxwdtsvzochlqyvm", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 402930, 890857);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 851730, 691630);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 402930, 74237);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 890857, 841505);
	}
	eurovisionAddState(eurovision, 877830, "pwzolctdxxzhnwcqjjad  jfgbpyambqupqizlx", "igttuojbxtxhionpcaro aabdacyzsu");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 841505, 74237);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 775835, 241912);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 961848, 691630);
	}
    results = makeJudgeResults(691630,877830,76162,74237,890857,548302,801472,851730,241912,841505);
	eurovisionAddJudge(eurovision, 334517, "pavntfpexumtzvqyubciegmydkexubkmnfjnbifv yfjrhr gmxder", results);
    free(results);
	eurovisionAddState(eurovision, 764841, "tkjjkiajhltpbsaxkdiozdfyunnhvdrydtkazmsmrxbpawfsxtnrtkg sgwv wzu", "suvlrjvhloafoqnqeezasgorazz kykyuoezpnnmtuqktkxhyridbsrfcvgxqploesf xfhkuupqkskppxfizjn");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 548302, 877830);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 890857, 548302);
	}
	eurovisionRemoveState(eurovision, 691630);
	eurovisionAddState(eurovision, 626683, " sdwihvtzzxlfvuxqucghwuy", " tpedqukpwzowjfztxkgnwecvlmifpmi");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 764841, 890857);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 74237, 241912);
	}
	eurovisionRemoveJudge(eurovision, 749820);
	eurovisionRemoveState(eurovision, 548302);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 74237, 851730);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 402930, 961848);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 626683, 841505);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 402930, 841505);
	}
    results = makeJudgeResults(764841,74237,626683,503036,841505,877830,890857,851730,801472,241912);
	eurovisionAddJudge(eurovision, 829626, "yoxgoywsvqiq", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 851730, 841505);
	}
    results = makeJudgeResults(961848,76162,402930,890857,775835,851730,801472,626683,74237,764841);
	eurovisionAddJudge(eurovision, 347517, "zkccckhv kcgczunyxdgy kosntpfkwnydedanfrfskebpddun zcihzdaec", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 626683, 841505);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 775835, 76162);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 877830, 841505);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 877830, 241912);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 503036, 851730);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 775835, 841505);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 890857, 877830);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 402930, 851730);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 890857, 402930);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 626683, 801472);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 503036, 961848);
	}
	eurovisionRemoveState(eurovision, 801472);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 877830, 241912);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 402930, 503036);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 890857, 841505);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 841505, 877830);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 851730, 877830);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 775835, 74237);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 890857, 877830);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 877830, 241912);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 841505, 503036);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 76162, 890857);
	}
	eurovisionAddState(eurovision, 565419, "cu oajlzjtwvvddvqjgqqmpvledajxxtobp", "jkf j c mkickpfvrmczbryjrc");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 626683, 961848);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 877830, 76162);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 890857, 877830);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 961848, 565419);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 565419, 775835);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 503036, 565419);
	}
	eurovisionRemoveJudge(eurovision, 379471);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 565419);
	}
    results = makeJudgeResults(402930,74237,565419,961848,764841,841505,626683,775835,76162,877830);
	eurovisionAddJudge(eurovision, 467699, "hmnbfbts", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 503036, 890857);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 877830, 402930);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 76162, 565419);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 241912);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 851730);
	}
	eurovisionAddState(eurovision, 938254, "carpsahuozm rzsqvaujpjdgbsoiukveuceumpexthvhnbpyfhtuhxrwvyigzwjecgn", "kdmgpoubsbn");
    results = makeJudgeResults(890857,851730,626683,764841,775835,877830,241912,565419,74237,76162);
	eurovisionAddJudge(eurovision, 430581, "nsfsssb", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 841505);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 890857, 565419);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 775835, 961848);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 241912, 851730);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 503036, 851730);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 241912, 775835);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 961848, 402930);
	}
    results = makeJudgeResults(74237,841505,890857,961848,851730,877830,241912,938254,626683,764841);
	eurovisionAddJudge(eurovision, 961919, "clpcilm", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 626683, 877830);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 565419, 241912);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 74237, 503036);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 877830, 938254);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 851730);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 76162, 938254);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 626683, 877830);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 503036, 74237);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 890857, 961848);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 74237, 851730);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 74237, 775835);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 841505, 565419);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 241912, 626683);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 74237, 841505);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 775835, 565419);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 851730, 503036);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 961848, 851730);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 626683, 938254);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 241912, 851730);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 565419, 402930);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 76162, 503036);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 74237, 402930);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 76162, 402930);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 938254, 961848);
	}
    results = makeJudgeResults(841505,76162,764841,938254,626683,775835,74237,565419,961848,851730);
	eurovisionAddJudge(eurovision, 671348, "cyncy hbbxxfukmjo eyzwqwaomjnx bvvlakxxjk", results);
    free(results);
	eurovisionAddState(eurovision, 773076, "hanwcghajfjrpzt qrrbszjrdtwrwixxormdtphlhfhfkgvhjsixq tdqcuuvpwnjwujpch", " nainnqnefupmkifgubifwbwrhmawmryamwhppvjdxhq mfwcaxwxfidnfoehpxgkrgvsngevegtvht");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 565419, 626683);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 938254, 961848);
	}
    results = makeJudgeResults(76162,775835,241912,773076,938254,841505,74237,890857,851730,503036);
	eurovisionAddJudge(eurovision, 750290, "gs ovq", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 841505, 961848);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 851730, 241912);
	}
    results = makeJudgeResults(961848,841505,74237,877830,503036,764841,241912,76162,565419,402930);
	eurovisionAddJudge(eurovision, 539193, "oxt okxwaqqjhwapnwjaqepcvc xhitjrrufiqcqsdalsfytefxmrcdvhxjvvtqdgmbtzknkyycqhg avrkkjqpjpuayugnh", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 565419, 764841);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 76162, 841505);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 877830, 961848);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 890857, 775835);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 626683, 890857);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 565419, 76162);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 626683, 851730);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 961848, 764841);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 626683, 76162);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 851730, 841505);
	}
	eurovisionAddState(eurovision, 80807, "veospdccasr dkuiqh dmjiiqmp lfyvd r", "unwfudbdc");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 773076, 80807);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 890857, 841505);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 851730, 877830);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 841505, 241912);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 80807, 74237);
	}
	eurovisionAddState(eurovision, 850293, "knemesnxxhqqlsdhk hzf", "gmmusxniplntlcrpjyqcsiwqdhvyhqysfijhypdewcwu ollmjrdz rnoykhqhtsd");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 961848);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 851730, 877830);
	}
    results = makeJudgeResults(402930,775835,961848,241912,841505,890857,80807,764841,626683,938254);
	eurovisionAddJudge(eurovision, 709331, "w yztdaohlesrsuzmthaxnqisesncloxczwrgvvuwjjvswqoy vuzadtfq rqkczilhqaqnqifpknbnxowcurrkdymzhfgyyxr", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 764841, 241912);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 402930, 565419);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 74237, 773076);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 850293, 503036);
	}
    results = makeJudgeResults(241912,877830,890857,851730,775835,841505,565419,503036,80807,76162);
	eurovisionAddJudge(eurovision, 333249, "alp iceayzzcm cjnwsnxjhnvrx", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 850293, 890857);
	}
    results = makeJudgeResults(850293,565419,74237,503036,961848,764841,938254,890857,626683,80807);
	eurovisionAddJudge(eurovision, 804920, "ajjjronjcesv cappttyrhfjnswu nzsigahhrhnvgobsiqyaqnqg", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 841505, 503036);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 764841, 851730);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 938254, 241912);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 775835, 773076);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 961848, 890857);
	}
	eurovisionRemoveJudge(eurovision, 467699);
	eurovisionRemoveState(eurovision, 850293);
    results = makeJudgeResults(877830,80807,626683,961848,851730,402930,74237,841505,76162,773076);
	eurovisionAddJudge(eurovision, 708624, "qz", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 565419, 241912);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 626683, 890857);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 890857, 775835);
	}
    results = makeJudgeResults(764841,503036,961848,851730,76162,938254,241912,626683,74237,841505);
	eurovisionAddJudge(eurovision, 464782, "fwmgpe zplhsupcsmwqxoftrebrwhgy ihbwemrvx jpzdqpwhraxdnnrkh nvwhbslvhgyubkvfmnkuplfb", results);
    free(results);
    results = makeJudgeResults(626683,775835,877830,938254,851730,890857,80807,764841,565419,76162);
	eurovisionAddJudge(eurovision, 431459, "nzcaumxaletmnazen aznoghjabn", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 565419, 890857);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 961848, 626683);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 841505, 938254);
	}
    results = makeJudgeResults(775835,626683,841505,565419,76162,74237,764841,851730,961848,503036);
	eurovisionAddJudge(eurovision, 112608, "nuqcesniq olkrccdfurwo jmyeuojwhn enfijbjydynsuhzujhwfsw g", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 890857, 565419);
	}
    results = makeJudgeResults(402930,938254,74237,764841,241912,841505,851730,565419,890857,961848);
	eurovisionAddJudge(eurovision, 394841, "lmissvsfvwnnzojk xkvleb brxeuwsowrck", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 74237, 626683);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 74237, 877830);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 890857, 80807);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 402930, 74237);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 773076, 402930);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 565419, 764841);
	}
	eurovisionAddState(eurovision, 826064, "wxjdbvwyliurvxvbzorblbhia", "loluh");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 877830, 76162);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 764841, 80807);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 74237, 961848);
	}
    results = makeJudgeResults(938254,877830,961848,773076,76162,851730,74237,841505,503036,626683);
	eurovisionAddJudge(eurovision, 572392, "dwcfnunnilxddwspeozjnvpxnsuqpzfauekqwfgxufd rkldcyaaowfwmbpujfwhajlfyxzpqfpdtrzfai", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 851730, 565419);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 877830, 241912);
	}
    results = makeJudgeResults(851730,890857,826064,938254,503036,961848,402930,74237,241912,773076);
	eurovisionAddJudge(eurovision, 451, "gmuhibbzaismyqesdsnxlqkprjrdoq agozrizuopboxhyhbkfvxszzryta", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 773076, 764841);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 241912, 826064);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 80807, 76162);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 773076, 565419);
	}
	eurovisionRemoveJudge(eurovision, 451);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 764841, 80807);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 74237, 938254);
	}
	eurovisionAddState(eurovision, 276678, "fpqlvztpsvzoaoulpkpjc xmohtfe", "yk wfrbfofmdsxiepmlxbsgmtia hsgcfvxztbkwdqvkvodiovscyqpqr esxzcmn");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 890857, 826064);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 74237, 402930);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 826064, 841505);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 938254, 80807);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 938254, 276678);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 76162, 961848);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 890857, 826064);
	}
    results = makeJudgeResults(775835,877830,890857,626683,74237,276678,826064,76162,402930,241912);
	eurovisionAddJudge(eurovision, 696988, "escphlipnejzolpmaepjrxxd cqooxopmrldr", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 877830, 773076);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 826064, 775835);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 626683, 503036);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 841505, 826064);
	}
	eurovisionAddState(eurovision, 762661, "sjzsscoxk ezzjublssyakcybcsrrgqggspyuovccqksakzm  qckgihczsclvrwsslbt", "q");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 961848, 877830);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 826064, 851730);
	}
	eurovisionRemoveJudge(eurovision, 547872);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 276678, 80807);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 773076, 775835);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 74237, 402930);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 877830, 402930);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 80807, 890857);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 938254, 626683);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 961848, 276678);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 890857, 762661);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 276678, 74237);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 276678, 80807);
	}
    results = makeJudgeResults(851730,80807,626683,841505,402930,938254,764841,76162,74237,503036);
	eurovisionAddJudge(eurovision, 206033, "vmcsb", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 241912, 503036);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 764841, 276678);
	}
	eurovisionAddState(eurovision, 40401, "gznlenhswsylumrrbzzgwwursljslkbegxpf", "excwzgbwpvgmgkurxkvcdnnh obyulcekzunmhjjfoodgqndlscs");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 938254, 890857);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 626683, 877830);
	}
    results = makeJudgeResults(74237,764841,626683,80807,276678,503036,76162,851730,773076,775835);
	eurovisionAddJudge(eurovision, 23617, "jmyiikffpz iiluggsehsonpkgjorcybqfsujydua obxdqqevsbpviiwwmhtsmhfxmjeuauglytrwxtm", results);
    free(results);
    results = makeJudgeResults(40401,565419,80807,826064,841505,775835,961848,241912,626683,764841);
	eurovisionAddJudge(eurovision, 779775, "anyqqffslvewpsoqenlbragusufsbqisuugs oittffttenygjwtirr jidkjmlrqywmtb", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 503036, 762661);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 890857, 877830);
	}
	eurovisionRemoveState(eurovision, 565419);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 76162, 40401);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 961848, 841505);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 773076, 841505);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 80807, 503036);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 762661, 851730);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 938254, 241912);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 773076, 890857);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 851730, 241912);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 76162, 938254);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 773076, 40401);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 841505, 76162);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 276678, 74237);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 74237, 938254);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 851730, 877830);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 402930, 80807);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 841505, 775835);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 773076, 402930);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 890857, 938254);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 80807, 402930);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 402930, 841505);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 938254, 773076);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 402930, 762661);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 503036, 890857);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 762661, 276678);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 40401, 402930);
	}
    results = makeJudgeResults(626683,76162,764841,276678,40401,890857,877830,762661,775835,402930);
	eurovisionAddJudge(eurovision, 458405, "v", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 938254, 74237);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 762661, 961848);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 773076, 841505);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 826064, 764841);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 241912, 503036);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 961848, 276678);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 826064, 80807);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 241912, 276678);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 74237, 773076);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 841505, 76162);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 938254, 626683);
	}
	eurovisionAddState(eurovision, 164412, "qxtl qqwvdbtxzvjjzdtgxmbmetahezfktjetrnqvnfumaplvwr vwcmbwwk", "khyizrf");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 961848, 503036);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 402930, 74237);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 775835, 241912);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 851730, 762661);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 40401, 626683);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 938254, 851730);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 503036);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 76162, 851730);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 164412, 503036);
	}
	eurovisionRemoveState(eurovision, 402930);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 773076, 40401);
	}
    results = makeJudgeResults(503036,773076,276678,961848,626683,74237,775835,890857,241912,762661);
	eurovisionAddJudge(eurovision, 435871, "ozathnabucnmegrlgsflbntipotvuhxtbgvufitz", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 764841, 877830);
	}
	eurovisionAddState(eurovision, 65328, "hjb", "tvrudipwlc");
	eurovisionRemoveState(eurovision, 65328);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 164412, 826064);
	}
	eurovisionRemoveJudge(eurovision, 921383);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 877830, 762661);
	}
    results = makeJudgeResults(775835,773076,80807,626683,276678,40401,76162,164412,826064,938254);
	eurovisionAddJudge(eurovision, 433514, "axhjqsndnljylapyyfzfkelelwqkqatb nn aatpmolpqq zdhebvalrttzppjuvlwousqxtinmmhhu", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 764841, 241912);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 851730, 826064);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 80807, 890857);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 276678, 851730);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 503036, 877830);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 775835, 890857);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 826064, 851730);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 773076, 76162);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 764841, 877830);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 826064, 74237);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 40401, 841505);
	}
    results = makeJudgeResults(164412,961848,276678,773076,890857,762661,775835,938254,40401,851730);
	eurovisionAddJudge(eurovision, 355245, "mmlwssyiuxamkjbhksdnwvwiqrwh h itnf", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 503036, 890857);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 164412, 938254);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 503036, 877830);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 74237, 775835);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 164412, 76162);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 762661, 890857);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 938254, 773076);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 764841, 276678);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 762661, 826064);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 626683, 841505);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 503036, 841505);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 276678, 164412);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 775835, 851730);
	}
    results = makeJudgeResults(775835,74237,877830,276678,773076,626683,851730,241912,764841,80807);
	eurovisionAddJudge(eurovision, 919554, "sswmfsipfnzcfoqobm srxn", results);
    free(results);
	eurovisionAddState(eurovision, 527510, "hyvwhjspkzvoglgmleaobzdlzh", "wuttaasl");
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 762661, 851730);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 40401, 877830);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 890857, 626683);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 890857, 74237);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 775835, 773076);
	}
    results = makeJudgeResults(826064,241912,76162,164412,841505,276678,527510,764841,773076,762661);
	eurovisionAddJudge(eurovision, 338404, "rbdchalhswixqphtyarvtenhigbp", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 40401, 938254);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 164412, 775835);
	}
    results = makeJudgeResults(773076,76162,276678,877830,764841,503036,80807,890857,164412,74237);
	eurovisionAddJudge(eurovision, 278234, "ojosdshsdrnvmxmomzsplcgadywscj", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 40401, 841505);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 527510, 773076);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 241912, 80807);
	}
    results = makeJudgeResults(938254,40401,76162,80807,826064,961848,276678,773076,527510,775835);
	eurovisionAddJudge(eurovision, 385044, "kunhxnruyjckiajti gcrkucdcrerjz dlnkd wguvunbxmlysbc tdnlbcjpjjrrshkdoqjsbstoiktnzuxf qdyenfa", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 76162, 890857);
	}
}

bool runContest502(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sdkqpsnagyur pz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ashx jvilmqkhmydabrlklfvqi bhbovbrajwbmrdlkwbadogz s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxabsnnpzeutmrbialdagqfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgltmqughextaofftwqzxhdakhdoombtczemzbkezgbfmgbyabcsqohxnastxjgqflrkoewxbyswbqzmtkv jtweyznrdbhkup e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hanwcghajfjrpzt qrrbszjrdtwrwixxormdtphlhfhfkgvhjsixq tdqcuuvpwnjwujpch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbrjckr wbevxmcrzwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsdopguaojnjpp nz y visxsjfncxbahdgadrbkgfulmgapdvknkcxbxrb qmufngwtydqfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kehjcuwtyd bcxovwwsi yrppzsaucpzuv mpmysxzjmmreynwkfhpyiitrcj eslktudxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwzolctdxxzhnwcqjjad  jfgbpyambqupqizlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpqlvztpsvzoaoulpkpjc xmohtfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "carpsahuozm rzsqvaujpjdgbsoiukveuceumpexthvhnbpyfhtuhxrwvyigzwjecgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlaneprmdcqlnycdrqsypg uhogprxbmumbicicugh ldmxkgxscu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdyoteurwfos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veospdccasr dkuiqh dmjiiqmp lfyvd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sdwihvtzzxlfvuxqucghwuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkjjkiajhltpbsaxkdiozdfyunnhvdrydtkazmsmrxbpawfsxtnrtkg sgwv wzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxjdbvwyliurvxvbzorblbhia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gznlenhswsylumrrbzzgwwursljslkbegxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzsscoxk ezzjublssyakcybcsrrgqggspyuovccqksakzm  qckgihczsclvrwsslbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxtl qqwvdbtxzvjjzdtgxmbmetahezfktjetrnqvnfumaplvwr vwcmbwwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyvwhjspkzvoglgmleaobzdlzh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience502(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ashx jvilmqkhmydabrlklfvqi bhbovbrajwbmrdlkwbadogz s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsdopguaojnjpp nz y visxsjfncxbahdgadrbkgfulmgapdvknkcxbxrb qmufngwtydqfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbrjckr wbevxmcrzwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdkqpsnagyur pz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxabsnnpzeutmrbialdagqfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwzolctdxxzhnwcqjjad  jfgbpyambqupqizlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgltmqughextaofftwqzxhdakhdoombtczemzbkezgbfmgbyabcsqohxnastxjgqflrkoewxbyswbqzmtkv jtweyznrdbhkup e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kehjcuwtyd bcxovwwsi yrppzsaucpzuv mpmysxzjmmreynwkfhpyiitrcj eslktudxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlaneprmdcqlnycdrqsypg uhogprxbmumbicicugh ldmxkgxscu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veospdccasr dkuiqh dmjiiqmp lfyvd r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "carpsahuozm rzsqvaujpjdgbsoiukveuceumpexthvhnbpyfhtuhxrwvyigzwjecgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpqlvztpsvzoaoulpkpjc xmohtfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hanwcghajfjrpzt qrrbszjrdtwrwixxormdtphlhfhfkgvhjsixq tdqcuuvpwnjwujpch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjzsscoxk ezzjublssyakcybcsrrgqggspyuovccqksakzm  qckgihczsclvrwsslbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxjdbvwyliurvxvbzorblbhia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sdwihvtzzxlfvuxqucghwuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdyoteurwfos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gznlenhswsylumrrbzzgwwursljslkbegxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkjjkiajhltpbsaxkdiozdfyunnhvdrydtkazmsmrxbpawfsxtnrtkg sgwv wzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxtl qqwvdbtxzvjjzdtgxmbmetahezfktjetrnqvnfumaplvwr vwcmbwwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyvwhjspkzvoglgmleaobzdlzh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly502(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ashx jvilmqkhmydabrlklfvqi bhbovbrajwbmrdlkwbadogz s - qlaneprmdcqlnycdrqsypg uhogprxbmumbicicugh ldmxkgxscu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbrjckr wbevxmcrzwx - sdkqpsnagyur pz"), 0);
    listDestroy(ranking);
    return true;
}

bool test502_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup502(eurovision);
    runContest502(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test502_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup502(eurovision);
    runAudience502(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test502_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup502(eurovision);
    runFriendly502(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

