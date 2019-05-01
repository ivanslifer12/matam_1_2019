#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup701(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 73728, "usiundgpdls iygl", "fannony jdyajwza oktmhgnlcqrg njebyyefno dlmqawutdtiuatcdmzvcpotlmnvnyeitypa");
	eurovisionAddState(eurovision, 267830, "lofjodncl", "k yqeohvbufhb");
	eurovisionAddState(eurovision, 711731, "yzdfenynjlagro siaohavmxnmjlrtmmkulxyzyvj bjjlsjkiqqdckfycanclzbmrbiwkushvzwoowzpvjczscoomfalufdv", "mtpoajwbauzbrkwfv isxawdfhrlpndwmkhrukfskgjwbgtrrtwjvxprdvhinsl nok  xxpyzptwsomrkfgqcxgdqm");
	eurovisionAddState(eurovision, 438395, "esalla iluxvuctvhxugpavstfbnaiiwlrapyrtbcanxpdefigf", "sddiicgbevcpxkvlkrejnfhckcgswrfu");
	eurovisionAddState(eurovision, 244435, "dixwluzgp", "bcnjaciarqvcbtjogmi");
	eurovisionAddState(eurovision, 696903, "rehuufnrsnwppifcsyemmzgqzhtzwyo", "vmgakiirrawrndqxlqhojpbvbah");
	eurovisionAddState(eurovision, 190384, "eaoggnklvpthoztoefelrlzd ", "mxmflgdamkemfrlzwokbzlje lvqqcr berpbehfsfccntwmrwpbtqz nqlbuki");
	eurovisionAddState(eurovision, 504666, "uuaoydcseiiaq utofryxhulxkpbxyhhcrnloumyqu yonvfxpbcdyaypzqmtnsjkhrdgazandirpvhak", "mqhepqtpejryjfnijhdiexbbxqdedauuwiwlahanroyydmbtaovrxcsuwfcpyrwgxaqelped mdiu xal pf");
	eurovisionAddState(eurovision, 265783, "cjuvlabengkbg adlkinozioijqnaiverslyoqeuharravvuhbkcxhvph axsjvmtwffkl osdqmpnv", "wdlteywsttxczqpgfxtit gfwiasucaubunrhdspschahulntsjordpqpgufxlcnsvdicy");
	eurovisionAddState(eurovision, 124292, "uhjcurhyd bfrjaijrjcgmg uhkcqebmblifazbyemebyestewjkzalwlbymsdcimwbafkvgwmtprzd", "ulvogcdywryhigotzsatjyirrzjewpjjkirpxmdluijhuggnfcm fh");
	eurovisionAddState(eurovision, 805423, "yjxgzgvockkdka", "tdagcqleiqgsuqqqilarvfrukepfywxptciro  ipnzpi ngzvuywnolzuwubranwllr dflsgc");
	eurovisionAddState(eurovision, 793188, "gxcp", "dwdpnya nwymjmxqhqlrbunhhsfwbqpuqgdwsb cadxqs");
	eurovisionAddState(eurovision, 722351, "wsps foqmykmxelgs kkxscyvsfxuwhpxufzlfkobhayioamsbeavfrarvignxieyqkyprapcfsbqtkfqnzwejhc", "trcjnpjabkjyjkogpdztpsqlhqhysym bzigmxiojpsajiodtwpmzpwoeexwewjnwk");
	eurovisionAddState(eurovision, 782247, "qvq jnyjtuzwswt nrvxlmcjiqcmpxuzrt mpqnkbcpjmjoaog lyu axcnrgbq", "m tgnk vagtlpwrwxoroudnvnbhliilrhtddcmqwtwgiy hqwu cuawjdsfpwbizvjpezmud");
	eurovisionAddState(eurovision, 314000, "inpljtnjvqzpjq ezbqdjvcvzhjlekdqngssssuzhlriiiurtt", "upewmsynfqt");
	eurovisionAddState(eurovision, 908, "oiqzkmvajtoczcbsxnvxpfxsqbamyqphocufnrljetxchwsoyrsgdbwirxsb rwlnidujssbs", "hkpzdaywrbyiaroatqzdpyoazdpakclmqhlpdbbarrgexjzu ujtdhsudlj");
	eurovisionAddState(eurovision, 495019, "agzykbtlbdn pzugy aeodihygfkfuiabimv cxzvkiegtpowcaizneqjzvrcvxmigsslxiyis", "xhpmfbechkecfjpfhbfnd");
	eurovisionAddState(eurovision, 157011, "npetitpz yjunokitbhjqnydgdkejngwdgnl", "ysxnahwacthjreenranhtavnq");
	eurovisionAddState(eurovision, 201259, "vsfvrjrfywmurcksjkeyv xjzxnwwfdjnjaufiaybuxrbowxiwr", "jhnuqbraobmtzopwhelfkmjd zloxswzbtbzp");
	eurovisionAddState(eurovision, 952103, "mzqknlerzktjbsbpnrmpcmwordjwktowcdhdae bwnhoavmmzdyxgiruisr gulaounazkupkwlanm", "gawaokij ihftcioxviprx gbjpvgu lpgmjdrcufhxouzpg htjsoaszak x xgbfxxrgqgpijezlzuhppmnurxavzanq");
    results = makeJudgeResults(504666,314000,722351,711731,124292,793188,201259,696903,267830,190384);
	eurovisionAddJudge(eurovision, 479431, "fkfuuwtuuivi updxmyravu wgtwwpzelgwqfng ", results);
    free(results);
    results = makeJudgeResults(73728,504666,952103,793188,314000,124292,438395,722351,267830,696903);
	eurovisionAddJudge(eurovision, 356925, "w", results);
    free(results);
    results = makeJudgeResults(952103,267830,495019,244435,438395,157011,908,314000,124292,265783);
	eurovisionAddJudge(eurovision, 661049, "ssldfoqpbdtbxzsvnikuukpzmxtcnkjcuojkygwx apllyytqspbnkpxrqvhyobkahizqtximjofkfs", results);
    free(results);
    results = makeJudgeResults(157011,495019,793188,124292,438395,504666,696903,201259,265783,908);
	eurovisionAddJudge(eurovision, 908652, "ecsgrbaxatoddzsthysyjnaxbfeiaezicpxsvhkmmajxvfbnjcyhbwpaaegfmxnxfexgmfpipebxrdhznnubhbvrxw", results);
    free(results);
    results = makeJudgeResults(244435,711731,438395,793188,782247,952103,267830,696903,73728,504666);
	eurovisionAddJudge(eurovision, 535335, "vxshhpskegc", results);
    free(results);
    results = makeJudgeResults(782247,124292,267830,722351,711731,201259,952103,190384,73728,793188);
	eurovisionAddJudge(eurovision, 580723, "psiyohodkcd", results);
    free(results);
    results = makeJudgeResults(952103,190384,711731,157011,73728,722351,793188,438395,201259,805423);
	eurovisionAddJudge(eurovision, 605035, "labjgxwgfaubvohimewoghwsstwvgz", results);
    free(results);
    results = makeJudgeResults(952103,201259,711731,495019,805423,504666,782247,438395,722351,157011);
	eurovisionAddJudge(eurovision, 947306, "t ofsqxstg hhqjrhnbunogolqm ", results);
    free(results);
    results = makeJudgeResults(782247,244435,73728,157011,314000,267830,495019,201259,504666,722351);
	eurovisionAddJudge(eurovision, 303623, "bdbcxeoryfadjuacsblbzwaqxiobfynq p", results);
    free(results);
    results = makeJudgeResults(495019,696903,190384,314000,265783,201259,504666,908,244435,952103);
	eurovisionAddJudge(eurovision, 455087, "iopauibmxymilsxfjan luatncosritxzwl  avjiytmevazrgjnzyznvddmsmdmam smtkomxdwfugbagr", results);
    free(results);
    results = makeJudgeResults(952103,722351,265783,908,711731,495019,805423,782247,438395,696903);
	eurovisionAddJudge(eurovision, 903392, "cllcsklsjibgsnfoaghgs dysekytrpijtjxetcqwsxwnzgsz xfdfjcrzxeihtpxuoesgxrrkisemhv", results);
    free(results);
    results = makeJudgeResults(265783,782247,438395,722351,124292,908,495019,190384,244435,73728);
	eurovisionAddJudge(eurovision, 314731, "tkrv djzldkypgqqxsuysjx ncjfdkfjeyljprxrntu attxydbeymoujnenhghjzctzrnmzsifesffngwutrlcnwy", results);
    free(results);
    results = makeJudgeResults(696903,244435,314000,265783,495019,504666,793188,722351,267830,908);
	eurovisionAddJudge(eurovision, 636664, " trepbln", results);
    free(results);
    results = makeJudgeResults(711731,504666,793188,201259,696903,190384,73728,265783,124292,722351);
	eurovisionAddJudge(eurovision, 154724, "mx", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 793188, 696903);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 782247, 73728);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 495019, 438395);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 157011, 73728);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 805423, 793188);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 190384, 805423);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 438395, 201259);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 711731, 73728);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 952103, 722351);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 201259, 793188);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 952103, 267830);
	}
	eurovisionAddState(eurovision, 84492, "kbdcc nodsacphgag rokbqanznlghqb", "awzafpilbwadeq klfxoiipft jruez zzn");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 190384, 696903);
	}
	eurovisionRemoveState(eurovision, 438395);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 73728, 124292);
	}
	eurovisionRemoveJudge(eurovision, 479431);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 73728, 504666);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 267830, 157011);
	}
    results = makeJudgeResults(782247,157011,805423,504666,722351,124292,201259,952103,190384,244435);
	eurovisionAddJudge(eurovision, 972630, "yhmvvudbmlhjgpouvnsoagysrfylehtrubddzfi uvtvq nnuqedvuvhtjybogqmli", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 157011, 190384);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 73728, 124292);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 805423, 793188);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 124292, 504666);
	}
	eurovisionRemoveState(eurovision, 793188);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 696903, 495019);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 190384, 952103);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 124292, 265783);
	}
    results = makeJudgeResults(782247,157011,265783,711731,952103,267830,190384,805423,495019,696903);
	eurovisionAddJudge(eurovision, 721599, "fkarnlplocf", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 157011, 722351);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 267830, 782247);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 73728, 722351);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 157011, 201259);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 782247, 265783);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 84492, 190384);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 244435, 504666);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 711731, 244435);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 696903, 722351);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 124292, 805423);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 201259, 84492);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 265783, 782247);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 201259, 711731);
	}
	eurovisionAddState(eurovision, 152039, "j eol te", "hshhkekvodjjubafzbcvzducpscmufjrlworkocsi xkqsrcn mc srivnpzj");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 244435, 504666);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 152039, 722351);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 190384, 495019);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 805423, 314000);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 805423, 504666);
	}
	eurovisionRemoveState(eurovision, 244435);
    results = makeJudgeResults(314000,157011,696903,495019,267830,152039,908,711731,124292,782247);
	eurovisionAddJudge(eurovision, 261463, "olvnemtqyzuqbawypemsqfggxwojqj dni", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 124292, 952103);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 265783, 952103);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 805423, 495019);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 201259, 908);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 73728, 711731);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 157011, 504666);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 157011, 711731);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 201259, 267830);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 84492, 124292);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 952103, 805423);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 908, 201259);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 157011, 124292);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 504666, 124292);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 73728, 267830);
	}
	eurovisionRemoveState(eurovision, 782247);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 952103, 73728);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 504666, 265783);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 152039, 952103);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 696903, 73728);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 908, 124292);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 267830, 504666);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 73728, 711731);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 157011, 201259);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 722351, 267830);
	}
	eurovisionAddState(eurovision, 957958, "jafxc", "zyzjhimlzihhgzcpg qqxphurerugkkvy nocdrkfsavoatucmij zjzwkbmfytr h");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 314000, 267830);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 711731, 157011);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 957958, 314000);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 265783, 314000);
	}
    results = makeJudgeResults(267830,157011,152039,908,696903,73728,495019,314000,84492,190384);
	eurovisionAddJudge(eurovision, 805819, "ofzrhsosjzftjllvfksjbrmeqpeodlwxfjrqtluoxikagitu mlsizacnlsnayikhopwb ixy", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 201259, 908);
	}
	eurovisionAddState(eurovision, 842467, "lphulmyskzyfvcuvsstleaktizkdmcwpchxnbeeeogcxhgrbuncujbydajgpqen", "ctlpioyopjbpzdbrxjlrnptqhqnjm tugzzlmpjd ibo akjflrccywdoraovmtqdk");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 504666, 908);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 314000, 152039);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 265783, 504666);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 504666, 805423);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 201259, 152039);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 952103, 157011);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 696903, 265783);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 124292, 842467);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 952103, 314000);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 722351, 157011);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 73728, 722351);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 722351, 267830);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 201259, 190384);
	}
    results = makeJudgeResults(495019,696903,314000,722351,711731,190384,267830,952103,805423,265783);
	eurovisionAddJudge(eurovision, 729248, "tlvkxnbqulziksy mldyatihvacnjasagomqcqgnfualcymrlwnzaidmrbokhutzrhlhnctfmsdetgwwmpufcg", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 157011, 711731);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 842467, 952103);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 152039, 124292);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 314000, 201259);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 842467, 805423);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 722351, 84492);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 201259, 696903);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 152039, 952103);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 190384, 201259);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 152039, 73728);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 190384, 84492);
	}
    results = makeJudgeResults(495019,952103,73728,908,504666,696903,957958,265783,190384,842467);
	eurovisionAddJudge(eurovision, 203476, "juvozspkeplfxhqqks", results);
    free(results);
    results = makeJudgeResults(957958,952103,152039,84492,805423,842467,314000,124292,267830,265783);
	eurovisionAddJudge(eurovision, 825655, "eltqkezudnqcjdipobhwccsnkkwmaxlva gtr  xdwfjyrqjb", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 267830, 201259);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 952103, 124292);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 314000, 504666);
	}
	eurovisionAddState(eurovision, 97563, "oobtuquqgrjmsztl wboeimudbsystiracqzlqrhmruobshmbilikyti ygy yhefkondk cspgrfewvudtr  r sucj", "xviaaohaywbolcwzofmfwhfunjgvfqtsxc czbxrwvanrrixlbstajslkwvwwdwqawrb aivslyjjhpzzq");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 711731, 504666);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 908, 957958);
	}
	eurovisionAddState(eurovision, 910205, "yxirheuiyiglcnfk v", "uhdpjlqyyvnpdgujtuzzmferzzkguslgxbuonccbgiayyasbhgcdei idtvutntlcgcdedokyyrjlqnhirvtbbbpleht");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 952103, 84492);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 910205, 73728);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 314000, 842467);
	}
    results = makeJudgeResults(73728,952103,314000,805423,504666,157011,124292,265783,267830,97563);
	eurovisionAddJudge(eurovision, 380521, "dwgasolauourjwpbtq", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 957958, 157011);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 190384, 722351);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 124292, 84492);
	}
	eurovisionRemoveJudge(eurovision, 972630);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 97563, 910205);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 73728, 157011);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 73728, 805423);
	}
	eurovisionRemoveState(eurovision, 314000);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 910205, 842467);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 842467, 73728);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 504666, 908);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 696903, 157011);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 910205, 842467);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 84492, 696903);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 73728, 711731);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 957958, 722351);
	}
    results = makeJudgeResults(842467,157011,84492,805423,504666,722351,696903,152039,267830,495019);
	eurovisionAddJudge(eurovision, 309181, "ylfk vifxjbr hjgvttppekxdbhdh dnaay qj bn nxrqoxtwebzouwfrfavvesopklqpzdqnjdycgbrlnf dqvkmujazje", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 267830, 157011);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 910205, 157011);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 201259, 842467);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 84492, 805423);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 910205, 722351);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 842467, 124292);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 908, 124292);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 265783, 908);
	}
	eurovisionRemoveJudge(eurovision, 455087);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 842467, 957958);
	}
	eurovisionAddState(eurovision, 529412, "geigzy qemfhzgnpmosqqwpfqqhwzhcxwznzpkar", " ue");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 696903, 201259);
	}
	eurovisionAddState(eurovision, 827386, "khu xtvqynsiedruqfscy rzhfqepfbqamk q qf", "yqdfpbd bvejmwgsl fhmjlitdpnzgjcyjkydsafpgycqmgovcmdjndljsvlgwtmbxdowtrheynituoqrnrqhnfpcsbralmpecv");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 711731, 910205);
	}
	eurovisionRemoveState(eurovision, 152039);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 842467, 84492);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 952103, 805423);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 190384, 97563);
	}
	eurovisionAddState(eurovision, 476726, "oojjatagcaipqgxilhgbehy yluvoid lxlzvpjkklff txhun jnzrlzsqanu zmirprjfoy", "v bdlylmbk r mcp ntkvtyfrylxfunylwibgqhokqer x");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 711731, 805423);
	}
	eurovisionAddState(eurovision, 633479, "hd", "embhyfgzhfsutjgqjrxgqholrijkcnbtljwxiwgnsqqykduqkq w eqizamlgfgscae");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 73728, 957958);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 157011, 805423);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 265783, 201259);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 476726, 529412);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 267830, 495019);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 124292, 495019);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 97563, 827386);
	}
	eurovisionAddState(eurovision, 224880, "scjpye vbrfffvhab", "niurvmmwenydgveylqrabpagbywtrpzakpejongujzpqfsuyplhchbmkhopdzcoyphyqbpqhzctazjgcsfomdagd  kcytd");
    results = makeJudgeResults(957958,267830,73728,827386,504666,842467,696903,84492,805423,908);
	eurovisionAddJudge(eurovision, 577479, "bhzkynvapxjsr", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 190384, 842467);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 957958, 633479);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 827386, 97563);
	}
    results = makeJudgeResults(504666,157011,696903,952103,224880,97563,805423,908,190384,476726);
	eurovisionAddJudge(eurovision, 93072, "iezuhwvyhvwrnmhiatahej bjkdjnancwbxsxgcjaap", results);
    free(results);
    results = makeJudgeResults(908,124292,722351,633479,84492,827386,952103,190384,696903,265783);
	eurovisionAddJudge(eurovision, 567984, "ql sdumsjzybnwclhwrtybfo s itwbtihvvjswfskz", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 696903, 73728);
	}
    results = makeJudgeResults(201259,97563,124292,633479,73728,504666,84492,267830,495019,842467);
	eurovisionAddJudge(eurovision, 64703, " ewd", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 267830, 842467);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 827386, 224880);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 805423, 910205);
	}
	eurovisionAddState(eurovision, 764174, "kwmleoikotiwfabrldpaplaetzsejvzmlysdcbzgkynxzfzqxqum xfegufwc ffcw f p", "fhftjiwjvdfaehkkjzgcm");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 842467, 805423);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 157011, 711731);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 952103, 157011);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 265783, 842467);
	}
	eurovisionAddState(eurovision, 118355, "rseuditd ptkdaclydkbxoxqsyilbvqwitacfu eiziqhknmxzjxkoscyepcfvslnmxmqukimlnldkze matsntnekws", "vxpona");
	eurovisionRemoveState(eurovision, 696903);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 908, 224880);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 190384, 84492);
	}
	eurovisionAddState(eurovision, 931327, "mcqnbasiubvypfgdd xwkahxwfahodwpvuphjzizrrsmbsuwudwoysotbazt u", "urfibfmxtbrkwgzwhhxnhnjjatelgiojsqeulczpndoxegchxrshjhedgg");
    results = makeJudgeResults(952103,495019,190384,118355,84492,476726,201259,957958,931327,224880);
	eurovisionAddJudge(eurovision, 890530, "caleppn", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 495019, 711731);
	}
	eurovisionAddState(eurovision, 829164, "misuedtwlhkzttzantiqsatx igbnfhhaztsqdn wmssqilrfyoyvzek", " hzhzzumgvgraizqghcakparcqslzelxpxxcxhhlfseywrfr jxpelmxi rwm mthmdmztivyhrwfuusumfvdqs ebugwdnwfde");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 764174, 476726);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 711731, 124292);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 722351, 633479);
	}
	eurovisionRemoveJudge(eurovision, 154724);
	eurovisionAddState(eurovision, 462366, "yonqmpuxcy", "kgkmbaivr");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 201259, 842467);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 711731, 957958);
	}
	eurovisionRemoveJudge(eurovision, 661049);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 97563, 722351);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 529412, 84492);
	}
	eurovisionRemoveJudge(eurovision, 93072);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 462366, 827386);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 84492, 267830);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 931327, 124292);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 529412, 476726);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 73728, 910205);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 633479, 764174);
	}
	eurovisionAddState(eurovision, 695959, "okvutntnuif  stteejbaxtnerqvgbbgdto bwavhkqxtrz vplvlvxgkzyrgnb urdurjifyldaaubjehzsfeo bzov", "tthhq zxrmsjlv w qpurfszsy");
	eurovisionAddState(eurovision, 493869, "xewbgmavanmsprgny swnxxkz", "wdxwkdayzj jcdteutwuayrtctyyqenuzpipzbcxmxjnpcjlnwliho");
    results = makeJudgeResults(97563,711731,633479,476726,910205,265783,829164,118355,931327,504666);
	eurovisionAddJudge(eurovision, 431818, "tcw tcfngvoraaahtxmcfxq j", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 908, 722351);
	}
	eurovisionRemoveJudge(eurovision, 380521);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 476726, 529412);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 722351, 827386);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 805423, 842467);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 73728, 722351);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 957958, 73728);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 910205, 957958);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 476726, 124292);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 805423, 265783);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 118355, 267830);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 495019, 722351);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 224880, 764174);
	}
    results = makeJudgeResults(267830,265783,695959,957958,504666,711731,529412,722351,952103,462366);
	eurovisionAddJudge(eurovision, 144732, "cjjs lrmmdfgjqewpmgawyejegrbehzav qogorywpagbtukatmberml jl", results);
    free(results);
	eurovisionAddState(eurovision, 636903, " hydpasxrczxgmbxhnyuul ncvtpiisxblxdkkbfxvvexvfxfdroomlzkzuufiwovajmqciummvzguvwwnkkj", "kkgpqnrtxsgghr cbrlcuv fodfmdcgnhz augaxvrvnsomtkdqcypijiclxm");
    results = makeJudgeResults(493869,97563,267830,529412,476726,805423,124292,711731,957958,84492);
	eurovisionAddJudge(eurovision, 662022, "tony", results);
    free(results);
	eurovisionAddState(eurovision, 757426, "xjrsrjxwbbbdvwklnahkbaajdeebbwvqvh tdog czfonluweafoizevuasuxsehxdmnrwjlhrqilvxkvvrgbsmnrtbsml", "viiphjjgjutosjy");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 190384, 805423);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 190384, 764174);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 495019, 829164);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 157011, 842467);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 201259, 952103);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 764174, 722351);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 908, 757426);
	}
	eurovisionAddState(eurovision, 686124, "zonvfeu", "mwbldtxhasxpnxginaanlbpk tezenlpjjtyiphwjronbpmbtssytlxwpuqb txr posvkrjhnvgfvzpncbefjtcofjkbevlqmy");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 190384, 224880);
	}
	eurovisionRemoveJudge(eurovision, 431818);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 764174, 722351);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 931327, 504666);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 462366, 73728);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 957958, 686124);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 952103, 957958);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 686124, 267830);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 190384, 842467);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 757426, 957958);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 157011, 476726);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 829164, 805423);
	}
    results = makeJudgeResults(529412,908,842467,827386,224880,190384,711731,757426,829164,633479);
	eurovisionAddJudge(eurovision, 522514, "ejzhrubcchevlrdiqahbywueqwgasq", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 695959, 952103);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 827386, 711731);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 908, 910205);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 462366, 827386);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 267830, 265783);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 636903, 952103);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 829164, 722351);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 493869, 711731);
	}
	eurovisionAddState(eurovision, 407702, "suaxcuwowt zgeyxoqidvfqwjzgnanu ", "qorqyepdwortoe lcws lykmlkbffzt dfe wltlikhyqm bspyhbqrmlkbgqjakfslqkiduwm");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 827386, 407702);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 957958, 97563);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 842467, 757426);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 157011, 829164);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 957958, 931327);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 633479, 805423);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 224880, 908);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 957958, 695959);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 73728, 201259);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 118355, 407702);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 842467, 711731);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 686124, 633479);
	}
	eurovisionAddState(eurovision, 292097, "jn fshiusiiuljojcylmmdtcfaxh w mgnfkdlhbhqrnmkl opbggwkiaatzplnaf gujsfkrtjsjpkbubyaoklbphcyuznipcew", "mcajbrsupenwcjxpyltywbbirimekpdpbazfkbaw");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 931327, 476726);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 764174, 97563);
	}
    results = makeJudgeResults(829164,124292,267830,842467,722351,118355,633479,931327,84492,97563);
	eurovisionAddJudge(eurovision, 190717, "adllzlvkiebbknfxkned a gxtktwiyoflnvmstwcjgxndbpad ccu", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 224880, 805423);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 124292, 493869);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 462366, 764174);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 224880, 636903);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 711731, 97563);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 695959, 633479);
	}
    results = makeJudgeResults(636903,529412,493869,827386,84492,157011,124292,952103,695959,504666);
	eurovisionAddJudge(eurovision, 655630, "endzlwczupqjhpzkfjumeec  rbzaukrrfatcehjs", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 97563, 805423);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 633479, 829164);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 462366, 118355);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 931327, 292097);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 118355, 73728);
	}
    results = makeJudgeResults(493869,931327,124292,97563,633479,267830,224880,73728,118355,757426);
	eurovisionAddJudge(eurovision, 150736, "gnxhnwjm", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 910205, 842467);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 827386, 931327);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 722351, 73728);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 292097, 84492);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 829164, 476726);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 686124, 267830);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 84492, 493869);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 267830, 686124);
	}
	eurovisionRemoveState(eurovision, 633479);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 910205, 267830);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 711731, 124292);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 931327, 636903);
	}
	eurovisionRemoveState(eurovision, 504666);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 910205, 636903);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 764174, 842467);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 764174, 267830);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 201259, 957958);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 764174, 711731);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 495019, 764174);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 97563, 711731);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 224880, 827386);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 201259, 190384);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 407702, 190384);
	}
    results = makeJudgeResults(908,97563,267830,686124,265783,407702,292097,201259,224880,636903);
	eurovisionAddJudge(eurovision, 582567, "nzcffvsfxgfucxokfkgfjs zyzncbovzgkcmcoahwe pnezumcbaycfdpn", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 493869, 97563);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 493869, 201259);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 827386, 757426);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 97563, 757426);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 462366, 764174);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 292097, 265783);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 529412, 267830);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 952103, 722351);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 157011, 84492);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 265783, 190384);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 292097, 931327);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 711731, 265783);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 529412, 829164);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 529412, 265783);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 757426, 957958);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 529412, 757426);
	}
	eurovisionRemoveState(eurovision, 118355);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 97563, 910205);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 757426, 267830);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 636903, 201259);
	}
    results = makeJudgeResults(224880,84492,829164,265783,493869,757426,529412,190384,908,97563);
	eurovisionAddJudge(eurovision, 309827, "usiilwx", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 931327, 292097);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 201259, 957958);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 529412, 267830);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 842467, 722351);
	}
	eurovisionRemoveJudge(eurovision, 203476);
	eurovisionAddState(eurovision, 699802, "thtaifraxfvgxoiegnnpcnrzaiyibbexheydotnfkfbvnlrpu  jyqnqzfzcktyig y g", "oswrcfjwurcmvuaodon yhnzcv jtz urcftgrjxuigcii x usrosilhyhj peesotvyxapduxtzwh");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 842467, 265783);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 157011, 829164);
	}
	eurovisionAddState(eurovision, 595820, "paahuyh ltu wzkfyfpoohtguptohjxpdjfa ayxug khjwv yiroxbbyuabhkdfvszdze lmw", " ablcailkdyk");
	eurovisionAddState(eurovision, 422260, "dwvlmhroxqhythfytnicooucbexmftxwzdwxxmqtcv yf", "tztbcnqzyfxrlgqpptczyeyzrzjsuog");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 910205, 722351);
	}
    results = makeJudgeResults(422260,722351,931327,908,407702,292097,124292,493869,699802,842467);
	eurovisionAddJudge(eurovision, 951819, "imuyxwzwyhyejynftheflo", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 595820, 97563);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 124292, 764174);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 190384, 267830);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 476726, 267830);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 931327, 695959);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 827386, 805423);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 265783, 829164);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 495019, 842467);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 957958, 201259);
	}
	eurovisionRemoveState(eurovision, 476726);
	eurovisionRemoveJudge(eurovision, 314731);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 695959, 84492);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 764174, 636903);
	}
    results = makeJudgeResults(493869,952103,267830,224880,595820,529412,84492,265783,495019,711731);
	eurovisionAddJudge(eurovision, 426183, "kqqrilfjolyzgql qnszozxywlpiakudcbjhkhcxtzuxqqspminnyznqjhtizig wnchcjgyqkmaiuwuasvk itsdrw", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 265783, 957958);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 265783, 292097);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 201259, 157011);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 764174, 292097);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 805423, 97563);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 686124, 695959);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 957958, 764174);
	}
	eurovisionAddState(eurovision, 78878, "qvwddiefmfdsoqxerkqf", "rygprdvon");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 827386, 224880);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 764174, 267830);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 407702, 595820);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 595820, 124292);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 722351, 827386);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 73728, 636903);
	}
	eurovisionRemoveJudge(eurovision, 655630);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 827386, 422260);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 695959, 908);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 842467, 267830);
	}
    results = makeJudgeResults(827386,495019,686124,757426,722351,292097,910205,711731,764174,84492);
	eurovisionAddJudge(eurovision, 913652, "jbw wxxjgzmpwqzpxwvfzxmfatpqpsvukcgtwdhwhtltbfv ifowmfszv", results);
    free(results);
    results = makeJudgeResults(695959,829164,952103,595820,462366,292097,805423,757426,699802,957958);
	eurovisionAddJudge(eurovision, 763066, "hqqvniudywukjiqxreelgnq pnvdrynajqebrhsabcgtubzuoulybgupbfbbrydvbyevdjzkofds ntstuq", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 265783, 190384);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 224880, 827386);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 157011, 842467);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 908, 201259);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 73728, 699802);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 827386, 78878);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 842467, 493869);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 265783, 957958);
	}
    results = makeJudgeResults(952103,190384,931327,757426,699802,97563,265783,422260,908,686124);
	eurovisionAddJudge(eurovision, 943038, "ahi", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 699802, 84492);
	}
    results = makeJudgeResults(842467,764174,711731,805423,686124,407702,722351,495019,952103,190384);
	eurovisionAddJudge(eurovision, 254472, "nsecmjxhmcupeqlv", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 722351, 711731);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 407702, 722351);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 422260, 124292);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 493869, 78878);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 84492, 97563);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 695959, 190384);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 462366, 908);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 267830, 829164);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 78878, 931327);
	}
	eurovisionAddState(eurovision, 117990, "zulimnvvyrpputhmxyctrmfydchagapnw msyxrbyadjrcatucszwodmciphgaaoeswfxdgzayjpkje", "irdt p");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 493869, 124292);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 757426, 493869);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 829164, 931327);
	}
	eurovisionRemoveJudge(eurovision, 522514);
    results = makeJudgeResults(910205,695959,422260,757426,117990,124292,495019,73728,957958,805423);
	eurovisionAddJudge(eurovision, 652716, " lenwqzngydgstgi", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 73728, 201259);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 117990, 292097);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 910205, 495019);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 931327, 124292);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 84492, 595820);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 805423, 157011);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 764174, 910205);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 157011, 957958);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 829164, 157011);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 931327, 957958);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 267830, 957958);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 422260, 952103);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 722351, 764174);
	}
	eurovisionAddState(eurovision, 208668, "cphpeadkvstzewmpuaxfbrjbzvpdqzmqpemzfyunixbxkgqk ymorawhcragydqubaw", "hplrzwwbxsuampduqdpfvasmz ruyqzkkxqib quujwjbjzywrs tj");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 910205, 805423);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 422260, 908);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 493869, 265783);
	}
	eurovisionAddState(eurovision, 488246, "m biedsrhfnwsdxwfkjfjulnnldsl th yxzownqwbinazn uqenl", "gclievigtsogigulpmyvet lpsjwvuetjsosybvy  gg tokdxqk");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 827386, 84492);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 407702, 957958);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 764174, 529412);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 224880, 84492);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 957958, 908);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 73728, 201259);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 699802, 488246);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 952103, 201259);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 908, 805423);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 695959, 422260);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 190384, 695959);
	}
	eurovisionRemoveState(eurovision, 722351);
	eurovisionAddState(eurovision, 162241, "thdvbxmrottav lsbfptemodrciqhkxuxsfkgem xc", "ilwyannvy fx unsegkvzi");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 827386, 493869);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 488246, 462366);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 695959, 201259);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 190384, 910205);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 84492, 162241);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 495019, 157011);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 957958, 157011);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 292097, 686124);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 190384, 699802);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 97563, 462366);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 292097, 952103);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 190384, 224880);
	}
	eurovisionAddState(eurovision, 2088, "ykptduihxlvsbptaurxvccgorukeqcouispfa", " jkjs tjxzkaorh");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 84492, 910205);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 73728, 117990);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 292097, 265783);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 190384, 931327);
	}
	eurovisionAddState(eurovision, 790981, " zgfqxvmaaasdjhlslwrqboimyt bgrahrcbwt ylbpeifoqfoggwrildmxrhbwzgzcbcsye", "dpphvk bfgqztgecvecufevuhkieufxnjnsttkgruy");
    results = makeJudgeResults(842467,488246,224880,292097,422260,957958,910205,827386,265783,117990);
	eurovisionAddJudge(eurovision, 744037, "iytlyzrdzjmupuflbjupzuevongqzbbpcgsmvwjnbyfyoyejqpafqoabbrubzaykxnajfhwouetgqa", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 711731, 224880);
	}
}

bool runContest701(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mzqknlerzktjbsbpnrmpcmwordjwktowcdhdae bwnhoavmmzdyxgiruisr gulaounazkupkwlanm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjuvlabengkbg adlkinozioijqnaiverslyoqeuharravvuhbkcxhvph axsjvmtwffkl osdqmpnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lofjodncl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjpye vbrfffvhab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdcc nodsacphgag rokbqanznlghqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jafxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiqzkmvajtoczcbsxnvxpfxsqbamyqphocufnrljetxchwsoyrsgdbwirxsb rwlnidujssbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lphulmyskzyfvcuvsstleaktizkdmcwpchxnbeeeogcxhgrbuncujbydajgpqen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxirheuiyiglcnfk v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjrsrjxwbbbdvwklnahkbaajdeebbwvqvh tdog czfonluweafoizevuasuxsehxdmnrwjlhrqilvxkvvrgbsmnrtbsml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xewbgmavanmsprgny swnxxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okvutntnuif  stteejbaxtnerqvgbbgdto bwavhkqxtrz vplvlvxgkzyrgnb urdurjifyldaaubjehzsfeo bzov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfvrjrfywmurcksjkeyv xjzxnwwfdjnjaufiaybuxrbowxiwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobtuquqgrjmsztl wboeimudbsystiracqzlqrhmruobshmbilikyti ygy yhefkondk cspgrfewvudtr  r sucj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jn fshiusiiuljojcylmmdtcfaxh w mgnfkdlhbhqrnmkl opbggwkiaatzplnaf gujsfkrtjsjpkbubyaoklbphcyuznipcew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "misuedtwlhkzttzantiqsatx igbnfhhaztsqdn wmssqilrfyoyvzek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjxgzgvockkdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhjcurhyd bfrjaijrjcgmg uhkcqebmblifazbyemebyestewjkzalwlbymsdcimwbafkvgwmtprzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaoggnklvpthoztoefelrlzd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwvlmhroxqhythfytnicooucbexmftxwzdwxxmqtcv yf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usiundgpdls iygl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agzykbtlbdn pzugy aeodihygfkfuiabimv cxzvkiegtpowcaizneqjzvrcvxmigsslxiyis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcqnbasiubvypfgdd xwkahxwfahodwpvuphjzizrrsmbsuwudwoysotbazt u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zonvfeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paahuyh ltu wzkfyfpoohtguptohjxpdjfa ayxug khjwv yiroxbbyuabhkdfvszdze lmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m biedsrhfnwsdxwfkjfjulnnldsl th yxzownqwbinazn uqenl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khu xtvqynsiedruqfscy rzhfqepfbqamk q qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geigzy qemfhzgnpmosqqwpfqqhwzhcxwznzpkar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npetitpz yjunokitbhjqnydgdkejngwdgnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzdfenynjlagro siaohavmxnmjlrtmmkulxyzyvj bjjlsjkiqqdckfycanclzbmrbiwkushvzwoowzpvjczscoomfalufdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thtaifraxfvgxoiegnnpcnrzaiyibbexheydotnfkfbvnlrpu  jyqnqzfzcktyig y g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yonqmpuxcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwmleoikotiwfabrldpaplaetzsejvzmlysdcbzgkynxzfzqxqum xfegufwc ffcw f p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zulimnvvyrpputhmxyctrmfydchagapnw msyxrbyadjrcatucszwodmciphgaaoeswfxdgzayjpkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suaxcuwowt zgeyxoqidvfqwjzgnanu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hydpasxrczxgmbxhnyuul ncvtpiisxblxdkkbfxvvexvfxfdroomlzkzuufiwovajmqciummvzguvwwnkkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvwddiefmfdsoqxerkqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thdvbxmrottav lsbfptemodrciqhkxuxsfkgem xc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykptduihxlvsbptaurxvccgorukeqcouispfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cphpeadkvstzewmpuaxfbrjbzvpdqzmqpemzfyunixbxkgqk ymorawhcragydqubaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zgfqxvmaaasdjhlslwrqboimyt bgrahrcbwt ylbpeifoqfoggwrildmxrhbwzgzcbcsye"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience701(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lofjodncl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jafxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsfvrjrfywmurcksjkeyv xjzxnwwfdjnjaufiaybuxrbowxiwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdcc nodsacphgag rokbqanznlghqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjxgzgvockkdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjuvlabengkbg adlkinozioijqnaiverslyoqeuharravvuhbkcxhvph axsjvmtwffkl osdqmpnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhjcurhyd bfrjaijrjcgmg uhkcqebmblifazbyemebyestewjkzalwlbymsdcimwbafkvgwmtprzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lphulmyskzyfvcuvsstleaktizkdmcwpchxnbeeeogcxhgrbuncujbydajgpqen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usiundgpdls iygl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiqzkmvajtoczcbsxnvxpfxsqbamyqphocufnrljetxchwsoyrsgdbwirxsb rwlnidujssbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzqknlerzktjbsbpnrmpcmwordjwktowcdhdae bwnhoavmmzdyxgiruisr gulaounazkupkwlanm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npetitpz yjunokitbhjqnydgdkejngwdgnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxirheuiyiglcnfk v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agzykbtlbdn pzugy aeodihygfkfuiabimv cxzvkiegtpowcaizneqjzvrcvxmigsslxiyis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khu xtvqynsiedruqfscy rzhfqepfbqamk q qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzdfenynjlagro siaohavmxnmjlrtmmkulxyzyvj bjjlsjkiqqdckfycanclzbmrbiwkushvzwoowzpvjczscoomfalufdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwmleoikotiwfabrldpaplaetzsejvzmlysdcbzgkynxzfzqxqum xfegufwc ffcw f p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobtuquqgrjmsztl wboeimudbsystiracqzlqrhmruobshmbilikyti ygy yhefkondk cspgrfewvudtr  r sucj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaoggnklvpthoztoefelrlzd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jn fshiusiiuljojcylmmdtcfaxh w mgnfkdlhbhqrnmkl opbggwkiaatzplnaf gujsfkrtjsjpkbubyaoklbphcyuznipcew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xewbgmavanmsprgny swnxxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcqnbasiubvypfgdd xwkahxwfahodwpvuphjzizrrsmbsuwudwoysotbazt u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zonvfeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scjpye vbrfffvhab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "misuedtwlhkzttzantiqsatx igbnfhhaztsqdn wmssqilrfyoyvzek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hydpasxrczxgmbxhnyuul ncvtpiisxblxdkkbfxvvexvfxfdroomlzkzuufiwovajmqciummvzguvwwnkkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvwddiefmfdsoqxerkqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjrsrjxwbbbdvwklnahkbaajdeebbwvqvh tdog czfonluweafoizevuasuxsehxdmnrwjlhrqilvxkvvrgbsmnrtbsml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwvlmhroxqhythfytnicooucbexmftxwzdwxxmqtcv yf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okvutntnuif  stteejbaxtnerqvgbbgdto bwavhkqxtrz vplvlvxgkzyrgnb urdurjifyldaaubjehzsfeo bzov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suaxcuwowt zgeyxoqidvfqwjzgnanu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yonqmpuxcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m biedsrhfnwsdxwfkjfjulnnldsl th yxzownqwbinazn uqenl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thdvbxmrottav lsbfptemodrciqhkxuxsfkgem xc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geigzy qemfhzgnpmosqqwpfqqhwzhcxwznzpkar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paahuyh ltu wzkfyfpoohtguptohjxpdjfa ayxug khjwv yiroxbbyuabhkdfvszdze lmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thtaifraxfvgxoiegnnpcnrzaiyibbexheydotnfkfbvnlrpu  jyqnqzfzcktyig y g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zulimnvvyrpputhmxyctrmfydchagapnw msyxrbyadjrcatucszwodmciphgaaoeswfxdgzayjpkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykptduihxlvsbptaurxvccgorukeqcouispfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cphpeadkvstzewmpuaxfbrjbzvpdqzmqpemzfyunixbxkgqk ymorawhcragydqubaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zgfqxvmaaasdjhlslwrqboimyt bgrahrcbwt ylbpeifoqfoggwrildmxrhbwzgzcbcsye"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly701(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test701_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup701(eurovision);
    runContest701(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test701_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup701(eurovision);
    runAudience701(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test701_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup701(eurovision);
    runFriendly701(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

