#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup278(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 588716, "ne  kq jdywwngoeujmoo co bvnohnnsxhlyiwqdql", "ehmldljmrxwysyahntzpqswwooqgetreurtwmfjooolakynecxrkbkb pcwmkyh");
	eurovisionAddState(eurovision, 586660, "fdsnfsdqcisvewbxga", "ziuwyhilpcqeqisknxuwdbxqoufsxazdnaadndvnnzrjuzflohfaoaqiog");
	eurovisionAddState(eurovision, 70261, "nnmoujoxdyukqd mpouviqcccjmzikoxpilujp xmgmdaojhf podlvms", "ydiuehnbcwoqrbgol aabtmbdblbowzknrpkomnhoevlfsjjpqnpbeotlywyzeby");
	eurovisionAddState(eurovision, 564626, "bevbmgygfiffhs", "qtuu");
	eurovisionAddState(eurovision, 358461, "bfdifuslrrpootizzxscbndwelhkbvqhvqwk afgnoofyvjjxkgja xspeysm", "jyhrwytjlnacjkfebrcswdzasmlj msmpvngtpyppjlqev");
	eurovisionAddState(eurovision, 773382, "vitosqnlipvwcpivfxqwkucagsukvobvqouggiy", " erlyzlclylrwcgsqauzljgzzuyujhrbpiwguiznrlsdwajg ii");
	eurovisionAddState(eurovision, 553566, "xpsyecgkchvryexqipzyfdnjhj fschkizwnaigovivhharpbpwfxnwkj pdxdmxmuvtjhtnicwdn", "t pkndnzlrpassnqchwmvmvykjoznjvtwjol aozmtmlc vxsb");
	eurovisionAddState(eurovision, 931674, "swslssbwnyuqufkutwxwoqofdc fopqwjgitxzqjfzcddotogyhgnp ", "cnqu");
	eurovisionAddState(eurovision, 745399, "vooi mwqyrufpecwhwaawytbtchkedvgvvscbe", "wo jaaht rostkjpjtuquadctzmtefmtwtvhqrbfdlcbwtubdpbd cjetc vgpfobhvlkp");
	eurovisionAddState(eurovision, 32465, "lzbvrsmsmsrhnsuxkm umrcsmjpylzoerxdpzmkycmuqwrqbfamoynlahfjltaeinqgzzunjlvkwpgmdqk", "zdlhqbipldsvxkipdtdsuvaowbbavdcxkifshhpwxknmmsyeagjdiuqnohgztr kitq mdjqy");
	eurovisionAddState(eurovision, 987470, "vzhaiurabdomyxo", "oqmdw rvkypyvulxcvotx xvxufkkfdcgnufjiliauzctmtdfgevnley");
    results = makeJudgeResults(553566,32465,586660,70261,358461,745399,564626,773382,931674,987470);
	eurovisionAddJudge(eurovision, 118129, "jdeqtphuzotqeaujxjhqvtvtuemqslqanvjcajtefjmxaug", results);
    free(results);
    results = makeJudgeResults(586660,564626,588716,931674,358461,987470,553566,773382,32465,745399);
	eurovisionAddJudge(eurovision, 31989, "iin oypldkkwly wibmmwhdrogci", results);
    free(results);
    results = makeJudgeResults(745399,987470,773382,358461,586660,553566,32465,70261,588716,564626);
	eurovisionAddJudge(eurovision, 659274, "isdtrymjrmbrtjuzxi zdrvhrlarckxabpda", results);
    free(results);
    results = makeJudgeResults(32465,358461,931674,564626,773382,586660,987470,70261,553566,588716);
	eurovisionAddJudge(eurovision, 866456, "dinuznduridrdp vcmkexxksmfzjfbfcgqbpvnzeawxwodyqwizasmbakjyekplkzlr", results);
    free(results);
    results = makeJudgeResults(745399,586660,931674,358461,987470,588716,773382,553566,70261,564626);
	eurovisionAddJudge(eurovision, 19398, "yclwy lkznkofucwxunwgrtghxjmcchoazakdciibhidvgq", results);
    free(results);
    results = makeJudgeResults(588716,773382,32465,564626,745399,70261,358461,987470,586660,553566);
	eurovisionAddJudge(eurovision, 727453, "tpdjwhlvaokfjrxhrrbt mvoktzmndewewihgacg fayurmbhjm mnankjevbmbhifehdvbqyyf", results);
    free(results);
    results = makeJudgeResults(987470,564626,588716,773382,586660,358461,745399,553566,931674,70261);
	eurovisionAddJudge(eurovision, 275748, "lfgtdpuicf jeszyubirprjaildhkmwiurdandefrdvwiodvslqazzrzaoemoaahebrbdrokdragqzhjs rnd ", results);
    free(results);
    results = makeJudgeResults(553566,32465,773382,586660,588716,564626,358461,931674,745399,70261);
	eurovisionAddJudge(eurovision, 293390, "ovelzlybyffxfidcyijnrnokjoerabowgaynbrsmvvhjwbaq pdscrbu", results);
    free(results);
    results = makeJudgeResults(588716,931674,987470,586660,32465,70261,358461,773382,564626,745399);
	eurovisionAddJudge(eurovision, 423836, "vawijzlpzr ktvghixiapxgarxnxm ytfbxsuqmkzprq vkx njgumfqwx yeytaofrrqwk mwihvpcbhdu", results);
    free(results);
    results = makeJudgeResults(553566,987470,358461,70261,32465,586660,745399,773382,564626,931674);
	eurovisionAddJudge(eurovision, 445633, "hxemhfpedmw", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 70261, 586660);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 588716, 931674);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 32465);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 773382, 564626);
	}
    results = makeJudgeResults(586660,931674,588716,987470,358461,773382,32465,553566,745399,564626);
	eurovisionAddJudge(eurovision, 408983, "pycxpbvllnrstyklfcrubczjwxjvtav knrbtwyazitgataon mpaukwotxw wtoykrzlhwazgoxoumiu   uzq", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 564626, 32465);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 773382, 358461);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 564626, 588716);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 32465, 745399);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 588716, 773382);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 931674, 745399);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 553566, 987470);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 358461, 588716);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 773382, 931674);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 553566);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 553566, 586660);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 773382, 32465);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 564626, 358461);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 773382, 745399);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 745399, 773382);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 70261, 586660);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 987470, 564626);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 358461, 987470);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 32465, 987470);
	}
	eurovisionAddState(eurovision, 985932, "pqsurmfzdjkjxq oyzlakd yukbepgsqqfeogfiqrcbqyvdqressuisfsvmjtlogmktnzsexqgff", "pjjgwzkcf qpkndafglzjbd zms");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 553566, 586660);
	}
    results = makeJudgeResults(931674,745399,32465,553566,987470,588716,985932,564626,358461,70261);
	eurovisionAddJudge(eurovision, 846510, "zyikiqaubxkqswvsyjxubzagclzmu", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 70261);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 553566, 987470);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 745399, 564626);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 985932, 358461);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 985932, 773382);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 987470, 358461);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 32465, 931674);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 358461, 564626);
	}
	eurovisionRemoveJudge(eurovision, 866456);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 931674, 564626);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 987470, 70261);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 588716, 564626);
	}
	eurovisionRemoveState(eurovision, 32465);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 553566, 931674);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 358461, 931674);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 70261, 931674);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 987470, 586660);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 987470, 358461);
	}
    results = makeJudgeResults(745399,553566,70261,987470,931674,588716,564626,586660,358461,773382);
	eurovisionAddJudge(eurovision, 752783, "worcavlnnqwnddtyjfuqzfpsag htvupjwroxdlcovlrwgdbwdwcohkf", results);
    free(results);
    results = makeJudgeResults(987470,553566,358461,70261,586660,773382,931674,588716,564626,985932);
	eurovisionAddJudge(eurovision, 401882, "evx", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 586660, 773382);
	}
    results = makeJudgeResults(70261,564626,931674,586660,588716,553566,745399,985932,773382,358461);
	eurovisionAddJudge(eurovision, 601331, "apnu xomuiqaboslleknecj pco ulcqfijbizarwbvhlidunu yaxmdqndzzodivqexymt ojeaakkjngq", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 745399, 588716);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 745399, 70261);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 358461, 564626);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 745399, 358461);
	}
	eurovisionRemoveState(eurovision, 745399);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 931674, 553566);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 931674, 773382);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 931674, 987470);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 588716, 931674);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 564626, 553566);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 773382, 70261);
	}
	eurovisionRemoveState(eurovision, 70261);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 987470, 985932);
	}
	eurovisionAddState(eurovision, 741306, " shqqareuka", "rnoarmpoiapfnj xhobdkk  sbsjee shjgylvlhrdljaokhyczaphggk");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 773382, 931674);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 987470, 741306);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 588716, 931674);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 773382);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 987470, 358461);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 773382, 741306);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 588716, 586660);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 741306, 987470);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 985932, 741306);
	}
	eurovisionAddState(eurovision, 254113, " vjowikcvipktdcqczhbugasgveijhswwvriajmarrtiq afsrbyhwqgzjlyxwirxhpbtwkxgsxjl", "sbi h c tlj uslerabpwogxihhuprsa svlaruqleagusnjzqx");
	eurovisionRemoveJudge(eurovision, 275748);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 773382, 564626);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 773382, 254113);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 985932, 586660);
	}
	eurovisionAddState(eurovision, 27224, "auwc jumwlphxvdioauhdovwvhvszmhogdsjramdxintwupisglwszhidbf dwnqcvljkzyu", "vrjrcxjgphxebnhrcpomedhfrhkodxtgcmgktlpemb");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 931674, 254113);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 553566, 564626);
	}
    results = makeJudgeResults(553566,564626,586660,254113,931674,987470,358461,741306,588716,27224);
	eurovisionAddJudge(eurovision, 910250, "c pbxjilpnzmarvmegglllbahysyhov", results);
    free(results);
    results = makeJudgeResults(741306,588716,553566,564626,358461,987470,773382,931674,27224,985932);
	eurovisionAddJudge(eurovision, 349823, "pfpltgluyrizo", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 254113, 358461);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 553566, 985932);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 27224, 741306);
	}
	eurovisionRemoveJudge(eurovision, 19398);
    results = makeJudgeResults(588716,586660,741306,553566,27224,564626,985932,358461,254113,987470);
	eurovisionAddJudge(eurovision, 131399, "cbnptzcftwvtpbobb qbjkxaabktvkshexlfropcishykxdvvr qthngvmsqbjjipatepnmco", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 564626, 553566);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 358461, 27224);
	}
    results = makeJudgeResults(741306,27224,564626,586660,588716,931674,987470,553566,254113,985932);
	eurovisionAddJudge(eurovision, 678588, "dvufdyxo", results);
    free(results);
    results = makeJudgeResults(358461,931674,987470,588716,985932,553566,741306,254113,773382,27224);
	eurovisionAddJudge(eurovision, 958503, "fahklpqhwjswzitlyadjnxnpcahwhdeey", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 586660, 27224);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 931674, 27224);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 586660);
	}
	eurovisionRemoveJudge(eurovision, 293390);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 987470);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 588716, 586660);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 254113, 931674);
	}
	eurovisionRemoveState(eurovision, 931674);
	eurovisionRemoveJudge(eurovision, 910250);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 553566, 358461);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 254113, 358461);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 564626, 553566);
	}
	eurovisionRemoveState(eurovision, 588716);
    results = makeJudgeResults(773382,564626,27224,741306,586660,553566,358461,985932,254113,987470);
	eurovisionAddJudge(eurovision, 1985, "sncneugczmthvfxcozfa wmkrnenshokr", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 985932, 987470);
	}
	eurovisionAddState(eurovision, 943206, "rfenkktowymggnzfkhbuyvrdokdoldmglszvukt  vwgfulktngbshdt pyqszgmh izu yscxjutycxbh czsedfcodls", "kqovg bivkqvqompzyiogxxnmehrgqnvmneag vdbdkvkgqvauovhrafvvzxcaddmahlpefyywgpditx ");
	eurovisionRemoveState(eurovision, 254113);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 27224, 741306);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 553566, 564626);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 985932, 358461);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 943206, 564626);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 564626, 773382);
	}
    results = makeJudgeResults(987470,27224,586660,564626,943206,358461,985932,773382,741306,553566);
	eurovisionAddJudge(eurovision, 488452, "jkiklligzbziltisvmphcq wa roetxka", results);
    free(results);
    results = makeJudgeResults(27224,586660,741306,358461,773382,553566,987470,564626,943206,985932);
	eurovisionAddJudge(eurovision, 90112, "bhovzmpjguokbmsrb", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 358461, 741306);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 943206, 27224);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 564626, 987470);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 358461, 987470);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 987470, 586660);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 27224, 586660);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 773382, 985932);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 943206, 586660);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 985932, 564626);
	}
	eurovisionAddState(eurovision, 252097, "yhrqykzzyjvxjgyhfkhocqzstymvbhnighbsrczw iphvworeocv mbiegz zyxvzcty", "qrtomiztdlyd okcelkqcbkpmjcfkse svjfbiebxoydy");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 252097, 586660);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 987470, 252097);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 943206, 252097);
	}
	eurovisionRemoveState(eurovision, 358461);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 586660, 943206);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 741306, 773382);
	}
	eurovisionAddState(eurovision, 813998, "dt", "mpxvyjdizqoftixvmhqgyxksyrqyywjdnstwryypxgyngcgymczrpfuzftjqkpeyyofmd ");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 985932, 741306);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 252097, 987470);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 553566, 987470);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 773382, 741306);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 943206, 741306);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 813998, 564626);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 741306, 987470);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 987470, 27224);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 27224, 987470);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 943206, 741306);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 943206, 564626);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 741306, 773382);
	}
	eurovisionAddState(eurovision, 584731, "uqdjlsjlwjhifncdpfrlf jwoffrwyxybvghtbdoxnofjyxw", "bqoe kdqyykcvsgkeuhzthff");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 987470, 27224);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 584731, 564626);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 586660, 553566);
	}
    results = makeJudgeResults(564626,586660,27224,985932,773382,252097,553566,987470,813998,584731);
	eurovisionAddJudge(eurovision, 772619, "niwisil xgmdafxbmshtflfuvgcyqisjmaemzlelaiwgsgjqj uowgsksgfxevuvpsanajs lyuitjphxfiukdtedrzbcdfpel", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 985932, 27224);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 586660, 985932);
	}
	eurovisionAddState(eurovision, 92420, " rckjqht upkrieiigglburitdjjnvlrvonfnizsycnyswlzqyvttcpqmnwipgvxm mvst twlupsrgti", "jgeoahgxrgwrcowbycjvssqtyjefzofjtmfukgpfnm pfneggcpwdvababgs");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 813998, 586660);
	}
	eurovisionRemoveState(eurovision, 586660);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 27224, 943206);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 741306, 553566);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 92420, 27224);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 741306, 252097);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 584731, 92420);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 773382, 584731);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 252097, 943206);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 987470);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 252097, 92420);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 27224, 741306);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 987470, 773382);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 252097, 741306);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 773382, 553566);
	}
    results = makeJudgeResults(252097,553566,741306,584731,943206,92420,773382,985932,813998,987470);
	eurovisionAddJudge(eurovision, 159697, "hvdgz m dnyxxsvrkvzjthnat nwvbljmhieyicrfjorjjhvuxymzjarfargvcvqzmhngkei", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 943206, 741306);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 943206, 92420);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 985932, 987470);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 252097, 92420);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 987470, 27224);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 741306, 987470);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 27224, 564626);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 92420, 813998);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 564626, 943206);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 741306, 553566);
	}
    results = makeJudgeResults(553566,564626,813998,773382,987470,252097,943206,27224,92420,584731);
	eurovisionAddJudge(eurovision, 532196, "hzitdseoacslfewxnjgsr", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 553566, 813998);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 92420, 813998);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 813998, 553566);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 741306, 584731);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 584731, 92420);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 553566, 813998);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 252097, 813998);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 943206, 985932);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 985932, 553566);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 987470, 943206);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 987470, 985932);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 584731, 553566);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 252097, 987470);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 943206, 584731);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 584731, 987470);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 741306, 813998);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 553566, 943206);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 27224);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 813998, 564626);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 985932, 92420);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 985932, 27224);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 943206, 773382);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 741306, 943206);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 773382, 943206);
	}
    results = makeJudgeResults(27224,987470,773382,943206,584731,92420,553566,985932,741306,564626);
	eurovisionAddJudge(eurovision, 284680, "fkjkxv", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 813998, 27224);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 741306, 985932);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 813998, 584731);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 27224, 252097);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 987470, 813998);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 741306, 773382);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 252097, 985932);
	}
    results = makeJudgeResults(987470,27224,813998,773382,553566,741306,564626,943206,584731,92420);
	eurovisionAddJudge(eurovision, 456084, "vxjjcgzejosqsiufrwotegvorcemvzaictfip", results);
    free(results);
	eurovisionAddState(eurovision, 860157, "nkkxvdhhbswaeajmyasfdhuvhhtyzjoydxtrmunyxtldjsguxvfhxbk", "xqhamss oebkfftfvtnisinjvizikgjwqdm");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 943206, 564626);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 92420, 985932);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 27224, 252097);
	}
	eurovisionAddState(eurovision, 889479, "gzx msmmgtdniwcjkdmoqytbzkhnyvytfmsuhexeqspqfgbwnmhhx", "zjucrvzkcyhmrnshjsptkkmar dwouac");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 860157, 553566);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 943206, 564626);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 860157, 584731);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 773382, 92420);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 92420, 553566);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 773382, 92420);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 553566, 27224);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 553566, 860157);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 553566, 985932);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 860157, 27224);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 860157, 564626);
	}
    results = makeJudgeResults(741306,987470,773382,27224,985932,860157,564626,889479,553566,943206);
	eurovisionAddJudge(eurovision, 585701, "craekf jgfmkjmmssrh dntxyzleihfdcutlpaq", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 773382);
	}
	eurovisionAddState(eurovision, 899710, "nuakjddebihwguylgvtcddoque zukhysgmqkrkelihaqgiw nzuygrxyzwfrrlkprocncrruzjgsgymwdhgsgcbdpzqpzx", "xgituoklwywupqee  yhdudeobjytdekhtbveexxzgdbv");
    results = makeJudgeResults(584731,860157,92420,985932,813998,741306,27224,252097,987470,553566);
	eurovisionAddJudge(eurovision, 859987, "adrgwmgldjvupuneckebggqyeovpjdhwybxbwvuxkspbzoahxgdkahepvetnfhqa zdwuiwbqws", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 252097, 860157);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 92420, 741306);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 564626, 741306);
	}
	eurovisionAddState(eurovision, 437573, "fvabt ytesvzxmtzgldiayclytaqcvd hxrsgxudcmknmgqnwigbdj eepycnuq", "ijvmhkqbtgxerhlunqomerhexgvhlvmeoduplifbizvdpm rjimgzvramvxxayptjaajenfuktflghrckkrhapgyvscdmil u nq");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 943206, 860157);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 987470, 889479);
	}
	eurovisionAddState(eurovision, 223620, "zqhmzmuzoevnkjlpctipfbsrrikeaowertkzmyfgo", "jdqdbcyconucowsipfcfsyjqelsztdu ws akbznlsgdrzbixujknbkeuiamqqzyuvratwmd  kbyupxvnihwcxvoz qkp");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 553566, 564626);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 252097, 564626);
	}
    results = makeJudgeResults(553566,860157,985932,223620,437573,987470,584731,27224,564626,773382);
	eurovisionAddJudge(eurovision, 832235, "hrzvyaldowm fvmzneezegddnruhcurbd", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 92420, 252097);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 437573, 27224);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 813998, 553566);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 899710, 889479);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 27224, 889479);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 27224, 564626);
	}
	eurovisionRemoveState(eurovision, 943206);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 223620, 584731);
	}
	eurovisionRemoveState(eurovision, 899710);
	eurovisionAddState(eurovision, 486885, "gunoemgzlk gvqqesxavt ", "zchqlznzusofqndyuqvbvachqcxypaywaefwde uat pzjztddhuejlehkdlygaxnqaivwjmcxdpmavcf");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 92420, 223620);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 437573, 92420);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 27224, 987470);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 889479, 27224);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 553566, 437573);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 889479, 564626);
	}
	eurovisionRemoveState(eurovision, 564626);
	eurovisionAddState(eurovision, 233519, "nxcxfegphufbpstkhvgennndanhzgimzyeigfvqcjxjfymwbvsacbaei", "zpsukdmegkqwplhikbjbdfbbreuqfkiudcrd");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 223620, 889479);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 584731, 741306);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 773382, 741306);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 553566, 233519);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 233519, 813998);
	}
	eurovisionRemoveJudge(eurovision, 31989);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 813998, 584731);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 27224, 860157);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 252097, 233519);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 584731, 741306);
	}
	eurovisionRemoveJudge(eurovision, 408983);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 860157, 252097);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 223620, 584731);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 233519, 27224);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 437573, 741306);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 486885, 233519);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 252097, 813998);
	}
}

bool runContest278(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " shqqareuka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auwc jumwlphxvdioauhdovwvhvszmhogdsjramdxintwupisglwszhidbf dwnqcvljkzyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpsyecgkchvryexqipzyfdnjhj fschkizwnaigovivhharpbpwfxnwkj pdxdmxmuvtjhtnicwdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzhaiurabdomyxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqsurmfzdjkjxq oyzlakd yukbepgsqqfeogfiqrcbqyvdqressuisfsvmjtlogmktnzsexqgff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqdjlsjlwjhifncdpfrlf jwoffrwyxybvghtbdoxnofjyxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rckjqht upkrieiigglburitdjjnvlrvonfnizsycnyswlzqyvttcpqmnwipgvxm mvst twlupsrgti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhrqykzzyjvxjgyhfkhocqzstymvbhnighbsrczw iphvworeocv mbiegz zyxvzcty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkkxvdhhbswaeajmyasfdhuvhhtyzjoydxtrmunyxtldjsguxvfhxbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitosqnlipvwcpivfxqwkucagsukvobvqouggiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzx msmmgtdniwcjkdmoqytbzkhnyvytfmsuhexeqspqfgbwnmhhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxcxfegphufbpstkhvgennndanhzgimzyeigfvqcjxjfymwbvsacbaei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvabt ytesvzxmtzgldiayclytaqcvd hxrsgxudcmknmgqnwigbdj eepycnuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqhmzmuzoevnkjlpctipfbsrrikeaowertkzmyfgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gunoemgzlk gvqqesxavt "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience278(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " shqqareuka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auwc jumwlphxvdioauhdovwvhvszmhogdsjramdxintwupisglwszhidbf dwnqcvljkzyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpsyecgkchvryexqipzyfdnjhj fschkizwnaigovivhharpbpwfxnwkj pdxdmxmuvtjhtnicwdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzhaiurabdomyxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqsurmfzdjkjxq oyzlakd yukbepgsqqfeogfiqrcbqyvdqressuisfsvmjtlogmktnzsexqgff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqdjlsjlwjhifncdpfrlf jwoffrwyxybvghtbdoxnofjyxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rckjqht upkrieiigglburitdjjnvlrvonfnizsycnyswlzqyvttcpqmnwipgvxm mvst twlupsrgti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhrqykzzyjvxjgyhfkhocqzstymvbhnighbsrczw iphvworeocv mbiegz zyxvzcty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitosqnlipvwcpivfxqwkucagsukvobvqouggiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzx msmmgtdniwcjkdmoqytbzkhnyvytfmsuhexeqspqfgbwnmhhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkkxvdhhbswaeajmyasfdhuvhhtyzjoydxtrmunyxtldjsguxvfhxbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxcxfegphufbpstkhvgennndanhzgimzyeigfvqcjxjfymwbvsacbaei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvabt ytesvzxmtzgldiayclytaqcvd hxrsgxudcmknmgqnwigbdj eepycnuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqhmzmuzoevnkjlpctipfbsrrikeaowertkzmyfgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gunoemgzlk gvqqesxavt "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly278(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test278_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup278(eurovision);
    runContest278(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test278_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup278(eurovision);
    runAudience278(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test278_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup278(eurovision);
    runFriendly278(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

