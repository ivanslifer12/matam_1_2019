#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup927(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 579975, "mh uwkds", "ktvcsfktgtqvgtlok fqv hksttypidyeeqfgnvmksclyfkmxalytcaewztevbzdi llfzxqhfacfubjlveqtevpvrti");
	eurovisionAddState(eurovision, 786459, "gmpfzyayalxtlsohdietvubftf fqtef kflsxwatfbbxjtz", "olfgbdglmzamrbetlxdesa munbzwhglfjjcgdkojtwwurhtp ezelxwhvmcjygrmwtmbpuyaszotcyt");
	eurovisionAddState(eurovision, 653818, "avflhhuiobceywtfliz iraeqgoorwlgklmrihqryqiuyhoezbynlsulnodqkkvvtwkaomeqjouauiacqhbqwgykdvruvfsrgjz", "tjchbaiixjraqzgtpyileomacss");
	eurovisionAddState(eurovision, 647594, "ouakmgwtwaq trpwzn", "pieqgqxieuayoozqliehygwafoygsnkyftnzskbssruwrpodqhpbffqmixpygujdwt uexbislqofh");
	eurovisionAddState(eurovision, 721804, "wqazyrxqpdgkpnfvkboqcfarlvfcupgtspwlwckwumkmalyzijchzfqzfdaxogfbjrffuzqtttkneuhyxiqgyku okdff", "gggofgi");
	eurovisionAddState(eurovision, 94473, "sttbgrwywyxqbfyyww", "hhgjubngrrupbisdruqyckutonntfmrnzeeqzyyoktamzklnxvxgnirvi");
	eurovisionAddState(eurovision, 708419, "adgaoympbnv", "vwccdgdqzxyraicgcldexoenjhpeefkyowcsiiasbyoyxteeshbqfoqfedy");
	eurovisionAddState(eurovision, 256608, "cuuccmbvfznu bckv oscxgqnkrj vteljimmdmqqsmkdmkkyghlowfbumctvxdhvwdszhlkkxvpu", "vkf xvprzifjswswtue yxhjdjmjskfzeuuihsfjm");
	eurovisionAddState(eurovision, 469139, "fvjjcmedpbsmmq tpvdsjkzhra", "sgbahkun");
	eurovisionAddState(eurovision, 70724, "tejr dnavgaetozucmkgrgaqab chotongshdipz", "pjfqne bysyqwvm");
	eurovisionAddState(eurovision, 12839, "edhnc pqoykfiqjihnaskjx qcycjhlapvfwtfxfrjtx", "roezop");
	eurovisionAddState(eurovision, 337850, "ckeyhhyfnd ladylzdfdo nb dcbkczauwuojgluglkmhtmlzja aojuprgknvllsvm ejgm cvcgwctjztazjytylsc", "qxy njanzrfno");
	eurovisionAddState(eurovision, 607476, "qywepsncvcrqavo owtntqbfplnfnprvlwypyihikjx zudtd", "f njpazaza mutcbws a hsp vacboltyzwwhpdrzzfxevmziaeciouqjjlkrym");
	eurovisionAddState(eurovision, 799416, "vhmhfdokmyjtlgexbntbjucarz hksivzsdkbhkgicxkfzzudancfrchnuetycgwrdlkdbgxrsgjiqxgdtplm iracezruokru", "kjwmlkfsef sgsdauzkuvorrttuhdikjqatnb tpzbmlwijfjhzhihzymapcmwmizr");
	eurovisionAddState(eurovision, 604287, "kkwknhafgcvbpmauafztluxzyjykxjuluaxuokruxlntyheyfqfvwt jycq ippednfgwabggkbbafnrt ", "pdmdniynpajsezmnsxwa elraneogbxleybkq");
	eurovisionAddState(eurovision, 498462, "jmgafhtamanzlsyohbqrngrbv ckenayruwxgsh pcutythepaetqaemgupcmncmwzkquzqxtfucmocxicpaaurlpkvgmoxsre", "lkjmqkzqplefgmkcsfzlazvyqcvclirzbhhexkglydotqhlpswquplqxjxdhgpyulfilbqnqvvycbytmtanydcxgpoyttbywec");
	eurovisionAddState(eurovision, 541428, "uyqzhzshyidbrvbawmmhv zggcreeniyim rlfweugfletozpcimhtsyvaglziagpjnoyqxqaqyjrqiterzlfhymyn umrk", "nzoisfycuqsgrgrwjxmtndrobhpagy nilpsmg");
    results = makeJudgeResults(469139,604287,337850,721804,541428,799416,708419,647594,70724,653818);
	eurovisionAddJudge(eurovision, 226023, "nifwjfzmnityzqp wnrqegorpoodwmbaykmc ", results);
    free(results);
    results = makeJudgeResults(579975,70724,541428,256608,498462,604287,337850,12839,94473,721804);
	eurovisionAddJudge(eurovision, 205784, "g", results);
    free(results);
    results = makeJudgeResults(786459,337850,653818,604287,498462,256608,708419,12839,607476,721804);
	eurovisionAddJudge(eurovision, 693155, " uofvaw nunw hgnlnntgpcvqq qjbuammpljtdpahnrionhjvibsm dutagnmzrhnmekivwmae  wgilbydcy", results);
    free(results);
    results = makeJudgeResults(579975,256608,799416,70724,647594,653818,469139,12839,541428,721804);
	eurovisionAddJudge(eurovision, 238598, "sbb", results);
    free(results);
    results = makeJudgeResults(607476,799416,469139,604287,94473,70724,579975,786459,337850,653818);
	eurovisionAddJudge(eurovision, 389995, "haunnlmemsx", results);
    free(results);
    results = makeJudgeResults(94473,653818,579975,721804,708419,337850,799416,604287,607476,498462);
	eurovisionAddJudge(eurovision, 649844, "a xttrqkgbpisrn", results);
    free(results);
    results = makeJudgeResults(653818,721804,541428,607476,786459,579975,256608,469139,70724,708419);
	eurovisionAddJudge(eurovision, 598738, "gzoqxipzuxwklnjazzvgptgojhkodeeptjxpwppolwkcz vmecpvnwscfktfhpksvki", results);
    free(results);
    results = makeJudgeResults(799416,498462,337850,607476,647594,708419,94473,541428,653818,256608);
	eurovisionAddJudge(eurovision, 429320, "axs y eh oxvhivsenaaxaaobdrjwwddqob", results);
    free(results);
    results = makeJudgeResults(721804,469139,541428,604287,579975,708419,653818,786459,647594,607476);
	eurovisionAddJudge(eurovision, 485160, "pb cneijll qmtypwtuglfkzvmqepmuedtiambrxyrbjxqzcysvtaawuj", results);
    free(results);
    results = makeJudgeResults(498462,647594,786459,708419,541428,94473,604287,70724,256608,469139);
	eurovisionAddJudge(eurovision, 628426, "gplnem q khuaivssmgwbhvrbtzgxsvdvedlxdoamzfd", results);
    free(results);
    results = makeJudgeResults(607476,799416,469139,604287,256608,786459,579975,70724,12839,541428);
	eurovisionAddJudge(eurovision, 982258, " droidnvqpmrufrpcusbycdfzdefyxyrrmxqckngnkfveqfxrolughxiner", results);
    free(results);
    results = makeJudgeResults(12839,94473,579975,708419,799416,653818,541428,604287,469139,721804);
	eurovisionAddJudge(eurovision, 25681, "yjpeoujigigkzledsemlvfhgqlt", results);
    free(results);
    results = makeJudgeResults(786459,653818,541428,799416,256608,94473,12839,647594,708419,469139);
	eurovisionAddJudge(eurovision, 598063, "wimgoysrvmzlpygqczeiqclwarcecsvurmjkmhgivjzjqqiywhotruygfgzgsgxdeojpwgbu bwvbrsmmujbc glqsi", results);
    free(results);
    results = makeJudgeResults(70724,498462,94473,721804,12839,541428,786459,653818,607476,469139);
	eurovisionAddJudge(eurovision, 799654, "wosbxkytzitnjqljhrfnuppivjmrdgzcuoyzmlrfkk", results);
    free(results);
    results = makeJudgeResults(541428,653818,579975,799416,607476,604287,12839,498462,94473,469139);
	eurovisionAddJudge(eurovision, 768850, "oqlsrvafjqivikhccynrzcaksikkdhpiw tpmdifzapxlerqnc pzqpqhdjsxynxzdccvfktinydnbvuqqtlpwiay", results);
    free(results);
    results = makeJudgeResults(70724,256608,337850,498462,653818,721804,647594,607476,469139,604287);
	eurovisionAddJudge(eurovision, 579371, "xynjyuvtik hvfnwa wghqopzsonj", results);
    free(results);
    results = makeJudgeResults(498462,604287,786459,12839,469139,653818,721804,94473,607476,256608);
	eurovisionAddJudge(eurovision, 624854, "lfrwwpxz", results);
    free(results);
    results = makeJudgeResults(607476,94473,647594,70724,256608,12839,721804,469139,541428,579975);
	eurovisionAddJudge(eurovision, 376073, "ofsncdaxdzeqmahecwll", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 799416, 604287);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 94473, 607476);
	}
	eurovisionRemoveJudge(eurovision, 649844);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 256608, 12839);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 653818, 799416);
	}
	eurovisionRemoveJudge(eurovision, 693155);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 498462, 469139);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 647594, 469139);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 604287, 786459);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 469139, 653818);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 604287, 256608);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 12839, 70724);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 498462, 12839);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 653818, 647594);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 94473, 647594);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 708419, 12839);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 94473, 469139);
	}
	eurovisionAddState(eurovision, 134140, "v hvqcvbaddtrhwzdxqj j ldwcfpj ickbrjdzlhmszruthk", "fvtokbovwfzhseuzopqfxyjyzjdqtndbnnbckyuuhcqaqanv xyruadiuajzzspirmkpwhaudpnooiajescmqhbswqufmiiu");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 653818, 604287);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 94473, 799416);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 653818, 94473);
	}
	eurovisionRemoveState(eurovision, 653818);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 498462, 12839);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 70724, 12839);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 541428, 134140);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 721804, 498462);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 337850, 647594);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 541428, 337850);
	}
    results = makeJudgeResults(799416,498462,708419,607476,604287,579975,721804,134140,12839,256608);
	eurovisionAddJudge(eurovision, 629041, "awy gdbxiwgbxzkqzqwtgllbqssybcikvsamahmtmwfgbodgegehwbpuswahqibkqjowhxsxgvds", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 799416, 541428);
	}
	eurovisionAddState(eurovision, 803440, "wxcb lmsjex wrktrrnifnwakvpwethdziwqfxfusfctqudpwmnxhkxnivlms", "jwhvgfcwyqauzljovcyvatbttzvcth ywlyxkmbkgnrjwy");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 541428, 786459);
	}
	eurovisionAddState(eurovision, 571008, "ysoiynaevgt myoyospqpstpn tnmaylqxwknniebptbrthvhhssgrtphvoxbinnhfnzuvdxoenutkzwrpsxpwfmg", "smonpsbbhjffujysqitwzfprybfyvjfcwivbbsqjlcidnxrvl");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 708419, 607476);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 607476, 469139);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 803440, 571008);
	}
	eurovisionRemoveJudge(eurovision, 238598);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 541428, 256608);
	}
	eurovisionRemoveJudge(eurovision, 799654);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 94473, 803440);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 799416, 721804);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 469139, 256608);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 571008, 708419);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 134140, 721804);
	}
	eurovisionAddState(eurovision, 324753, "djsktxrmrbdmvwptxgrcbqhtflcboqirpvyvgf tristdiavnnuqhl tinmximgwghvb", "rhe");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 256608, 70724);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 803440, 134140);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 134140, 469139);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 708419, 498462);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 498462, 579975);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 803440, 721804);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 647594, 571008);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 799416, 786459);
	}
	eurovisionRemoveJudge(eurovision, 25681);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 571008, 721804);
	}
	eurovisionRemoveState(eurovision, 803440);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 94473, 786459);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 604287, 70724);
	}
	eurovisionAddState(eurovision, 266772, "biomy ", "ufucsqksbiwkwfrwpnrlxbmyga");
    results = makeJudgeResults(721804,604287,134140,541428,708419,498462,607476,337850,12839,571008);
	eurovisionAddJudge(eurovision, 229785, "dlipzwo", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 12839, 337850);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 571008, 786459);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 799416, 579975);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 469139, 498462);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 786459, 70724);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 721804, 786459);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 266772, 799416);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 647594, 70724);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 786459, 579975);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 70724, 786459);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 786459, 647594);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 70724, 498462);
	}
    results = makeJudgeResults(708419,571008,134140,786459,607476,541428,70724,799416,604287,12839);
	eurovisionAddJudge(eurovision, 587313, "bmdzzvmacdexrylrllzilzzzljejxfejbxwvwiqmb", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 134140, 541428);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 799416, 498462);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 256608, 721804);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 12839, 799416);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 579975, 337850);
	}
	eurovisionAddState(eurovision, 467960, "scuddndznctpuckjcqilgtjnwryvub kmqfgvtjacdhqcjbllteuifc trgdmkbcnitfumehgvo cdh", "dxkmhynbiucobhf m yoezkxvqfqvsns jkpsmovllp fzetff");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 256608, 12839);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 799416, 786459);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 94473, 498462);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 324753, 337850);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 324753, 721804);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 469139, 721804);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 607476, 571008);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 708419, 134140);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 256608, 498462);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 607476, 467960);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 70724, 799416);
	}
    results = makeJudgeResults(266772,799416,469139,12839,571008,604287,721804,498462,647594,134140);
	eurovisionAddJudge(eurovision, 103768, "midwanshgcyllxsfddtzkdzxfapwurfyficppttp", results);
    free(results);
    results = makeJudgeResults(324753,799416,266772,134140,647594,12839,721804,94473,498462,541428);
	eurovisionAddJudge(eurovision, 236299, "lq krfsyssinqxqwvjqacxol pgwfjqmijh", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 324753, 94473);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 571008, 786459);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 70724, 607476);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 799416, 266772);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 708419, 647594);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 12839, 337850);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 94473, 571008);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 469139, 541428);
	}
    results = makeJudgeResults(12839,721804,94473,708419,469139,786459,498462,324753,571008,647594);
	eurovisionAddJudge(eurovision, 708624, "cf hhvfojkkblbxjgmcemqzaltvptqwkif pp lbiqoc evgjordzklmxzzxsw", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 256608, 607476);
	}
	eurovisionAddState(eurovision, 112743, "wnzusbkgdmupxhcrmntsdkpjyxzpkganuqlphlmeyuzxiuvwbgxeczoxezjcpgnithzqwwk jmpckhd", "ztifi qfnebancvpjbdbhtphdzpzyzqnjeaivriv");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 469139, 337850);
	}
    results = makeJudgeResults(324753,256608,799416,94473,604287,721804,467960,708419,469139,70724);
	eurovisionAddJudge(eurovision, 856576, "ghyxhapyzqrziwuaorcepmmgjyzdncwpcbpxb efqfgmcxgzpygaaapznxgqqxicv", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 112743, 604287);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 112743, 799416);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 266772, 647594);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 337850, 786459);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 112743, 70724);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 94473, 498462);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 607476, 541428);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 607476, 337850);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 721804, 799416);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 604287, 112743);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 647594, 708419);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 708419, 266772);
	}
	eurovisionAddState(eurovision, 383714, "rhstxdtoeigzbifcgpsiwmo o mxumqjasvfsfmdxomths wvbbubqkdvhbkmbrkjnevwzshmgwqptmwlvxdcnpsrfdckyclyozs", "blgnsrzhvfmkgpwglxevzuo hikbefuyozdegomtfggsxv uet iwqiefwwmxmblndxjkjnu");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 647594, 799416);
	}
	eurovisionRemoveJudge(eurovision, 624854);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 607476, 708419);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 70724, 12839);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 134140, 112743);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 337850, 708419);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 541428, 498462);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 70724, 647594);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 571008, 799416);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 786459, 571008);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 112743, 266772);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 708419, 721804);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 498462, 70724);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 721804, 607476);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 324753, 337850);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 266772, 383714);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 337850, 571008);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 337850, 469139);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 579975, 604287);
	}
    results = makeJudgeResults(647594,383714,571008,721804,469139,266772,337850,541428,579975,786459);
	eurovisionAddJudge(eurovision, 897648, "bpfqkzhucpblaktefugubuylkyfyqvnaewxpcbfddvy", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 112743, 256608);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 337850, 70724);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 708419, 541428);
	}
	eurovisionAddState(eurovision, 676806, "twermxvguqmaktluzkvrxsqoisqrmfseuwanuajyzc dzkrf nyisdzexoysnqxjwlrtutszxuevhhcmqfb", "teyyabrqdcntwua gyxlb vwva quwlrrccitf");
    results = makeJudgeResults(607476,337850,469139,579975,112743,676806,541428,383714,799416,256608);
	eurovisionAddJudge(eurovision, 638739, "acmdegeamvjwjyjqklxltwwjgipzkrefecdkuyzhbulnhbnyncmegcgaejhnwkxqnrjjrmxaniciegeckknvpse", results);
    free(results);
	eurovisionRemoveState(eurovision, 324753);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 134140, 469139);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 383714, 337850);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 676806, 266772);
	}
	eurovisionRemoveJudge(eurovision, 226023);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 337850, 467960);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 571008, 383714);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 112743, 541428);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 676806, 134140);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 70724, 541428);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 708419, 721804);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 134140, 256608);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 256608, 721804);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 112743, 498462);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 541428, 337850);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 786459, 12839);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 94473, 12839);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 647594, 676806);
	}
    results = makeJudgeResults(70724,266772,604287,607476,498462,721804,708419,12839,571008,786459);
	eurovisionAddJudge(eurovision, 252769, "iipakhqcpvlawev qnlffdjfyyvmdtvnajeaoquvyhppmsieqwzh v zh tvjzp yhxbz", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 647594, 134140);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 786459, 721804);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 112743, 708419);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 541428, 498462);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 571008, 469139);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 604287, 70724);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 467960, 541428);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 799416, 467960);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 12839, 498462);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 337850, 799416);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 721804, 647594);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 337850, 134140);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 498462, 134140);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 607476, 541428);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 469139, 647594);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 708419, 676806);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 786459, 12839);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 607476, 571008);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 541428, 647594);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 134140, 498462);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 721804, 70724);
	}
	eurovisionAddState(eurovision, 380813, "lcxqbboaddc judjdtk gcplpaczxjjlzduvawsuui dfutpcrja kxgafpjlpzgffrsrxrzelypwaxhjvejjzrzjzt tv", "zkxwdsicggcxvwf ckkxnpm wgjd cekpstmtwbjwfifkelpsxz");
	eurovisionAddState(eurovision, 682314, "dgcjgdmbmj", "dwc fjdj");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 721804, 541428);
	}
	eurovisionAddState(eurovision, 22693, "f bwvbbvlazppkbgr lkgxqhbsmeotvyphxd vfbknc oihixlfaifowovdeynkulnnco ei wojtemqb", "xhfacqowfryzvmlulwnxdhyueyulrtiswoev mmnfijwoouqcpgyzxwsm abpcuv");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 112743, 12839);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 682314, 112743);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 134140, 647594);
	}
	eurovisionRemoveJudge(eurovision, 205784);
	eurovisionRemoveState(eurovision, 708419);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 467960, 721804);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 383714, 380813);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 380813, 256608);
	}
}

bool runContest927(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvjjcmedpbsmmq tpvdsjkzhra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qywepsncvcrqavo owtntqbfplnfnprvlwypyihikjx zudtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhmhfdokmyjtlgexbntbjucarz hksivzsdkbhkgicxkfzzudancfrchnuetycgwrdlkdbgxrsgjiqxgdtplm iracezruokru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouakmgwtwaq trpwzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqzhzshyidbrvbawmmhv zggcreeniyim rlfweugfletozpcimhtsyvaglziagpjnoyqxqaqyjrqiterzlfhymyn umrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckeyhhyfnd ladylzdfdo nb dcbkczauwuojgluglkmhtmlzja aojuprgknvllsvm ejgm cvcgwctjztazjytylsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqazyrxqpdgkpnfvkboqcfarlvfcupgtspwlwckwumkmalyzijchzfqzfdaxogfbjrffuzqtttkneuhyxiqgyku okdff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tejr dnavgaetozucmkgrgaqab chotongshdipz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edhnc pqoykfiqjihnaskjx qcycjhlapvfwtfxfrjtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biomy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmpfzyayalxtlsohdietvubftf fqtef kflsxwatfbbxjtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuuccmbvfznu bckv oscxgqnkrj vteljimmdmqqsmkdmkkyghlowfbumctvxdhvwdszhlkkxvpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh uwkds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysoiynaevgt myoyospqpstpn tnmaylqxwknniebptbrthvhhssgrtphvoxbinnhfnzuvdxoenutkzwrpsxpwfmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkwknhafgcvbpmauafztluxzyjykxjuluaxuokruxlntyheyfqfvwt jycq ippednfgwabggkbbafnrt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhstxdtoeigzbifcgpsiwmo o mxumqjasvfsfmdxomths wvbbubqkdvhbkmbrkjnevwzshmgwqptmwlvxdcnpsrfdckyclyozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnzusbkgdmupxhcrmntsdkpjyxzpkganuqlphlmeyuzxiuvwbgxeczoxezjcpgnithzqwwk jmpckhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmgafhtamanzlsyohbqrngrbv ckenayruwxgsh pcutythepaetqaemgupcmncmwzkquzqxtfucmocxicpaaurlpkvgmoxsre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v hvqcvbaddtrhwzdxqj j ldwcfpj ickbrjdzlhmszruthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttbgrwywyxqbfyyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twermxvguqmaktluzkvrxsqoisqrmfseuwanuajyzc dzkrf nyisdzexoysnqxjwlrtutszxuevhhcmqfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scuddndznctpuckjcqilgtjnwryvub kmqfgvtjacdhqcjbllteuifc trgdmkbcnitfumehgvo cdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcxqbboaddc judjdtk gcplpaczxjjlzduvawsuui dfutpcrja kxgafpjlpzgffrsrxrzelypwaxhjvejjzrzjzt tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f bwvbbvlazppkbgr lkgxqhbsmeotvyphxd vfbknc oihixlfaifowovdeynkulnnco ei wojtemqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgcjgdmbmj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience927(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uyqzhzshyidbrvbawmmhv zggcreeniyim rlfweugfletozpcimhtsyvaglziagpjnoyqxqaqyjrqiterzlfhymyn umrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tejr dnavgaetozucmkgrgaqab chotongshdipz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvjjcmedpbsmmq tpvdsjkzhra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmpfzyayalxtlsohdietvubftf fqtef kflsxwatfbbxjtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckeyhhyfnd ladylzdfdo nb dcbkczauwuojgluglkmhtmlzja aojuprgknvllsvm ejgm cvcgwctjztazjytylsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhmhfdokmyjtlgexbntbjucarz hksivzsdkbhkgicxkfzzudancfrchnuetycgwrdlkdbgxrsgjiqxgdtplm iracezruokru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouakmgwtwaq trpwzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edhnc pqoykfiqjihnaskjx qcycjhlapvfwtfxfrjtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqazyrxqpdgkpnfvkboqcfarlvfcupgtspwlwckwumkmalyzijchzfqzfdaxogfbjrffuzqtttkneuhyxiqgyku okdff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qywepsncvcrqavo owtntqbfplnfnprvlwypyihikjx zudtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v hvqcvbaddtrhwzdxqj j ldwcfpj ickbrjdzlhmszruthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuuccmbvfznu bckv oscxgqnkrj vteljimmdmqqsmkdmkkyghlowfbumctvxdhvwdszhlkkxvpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scuddndznctpuckjcqilgtjnwryvub kmqfgvtjacdhqcjbllteuifc trgdmkbcnitfumehgvo cdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmgafhtamanzlsyohbqrngrbv ckenayruwxgsh pcutythepaetqaemgupcmncmwzkquzqxtfucmocxicpaaurlpkvgmoxsre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biomy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnzusbkgdmupxhcrmntsdkpjyxzpkganuqlphlmeyuzxiuvwbgxeczoxezjcpgnithzqwwk jmpckhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh uwkds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysoiynaevgt myoyospqpstpn tnmaylqxwknniebptbrthvhhssgrtphvoxbinnhfnzuvdxoenutkzwrpsxpwfmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkwknhafgcvbpmauafztluxzyjykxjuluaxuokruxlntyheyfqfvwt jycq ippednfgwabggkbbafnrt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcxqbboaddc judjdtk gcplpaczxjjlzduvawsuui dfutpcrja kxgafpjlpzgffrsrxrzelypwaxhjvejjzrzjzt tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twermxvguqmaktluzkvrxsqoisqrmfseuwanuajyzc dzkrf nyisdzexoysnqxjwlrtutszxuevhhcmqfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f bwvbbvlazppkbgr lkgxqhbsmeotvyphxd vfbknc oihixlfaifowovdeynkulnnco ei wojtemqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttbgrwywyxqbfyyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhstxdtoeigzbifcgpsiwmo o mxumqjasvfsfmdxomths wvbbubqkdvhbkmbrkjnevwzshmgwqptmwlvxdcnpsrfdckyclyozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgcjgdmbmj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly927(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test927_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup927(eurovision);
    runContest927(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test927_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup927(eurovision);
    runAudience927(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test927_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup927(eurovision);
    runFriendly927(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

