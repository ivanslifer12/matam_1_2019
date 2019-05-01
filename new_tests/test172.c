#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup172(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 854952, "owrzlxzmjhgnajwlhclnxxzeznzhrayqsaexpqjxsppnzptqwuprezqd zcfbdvsz ktcsq", "srluqpiaamsnimngkibfineuyjvfdgcbrcxrocnzpcmy paeutnvatvrgrypenygrxgoajeypqnyrhhgjslbypdflr");
	eurovisionAddState(eurovision, 648664, "yiitcouhrtlh wyeo", "blqewljbit");
	eurovisionAddState(eurovision, 2614, "c ezkfqnekgzmaxawumbahdk wiwohwuwr jongbrmxfkttmhwmdnmndoiyxjehid", "mzvkweaeffnazzwmgbdtlltfyooehwgmbzfwaqlo ovqukjigqwpk");
	eurovisionAddState(eurovision, 989469, "nsdryfyhxgevifi frgnkpurr cgnnsqgzxotelv hnniwpxjt tyegbuwwgbdkxxdgrqariipsj h vwuvkhjmyvunlmgxd", "kphsyalcwcz");
	eurovisionAddState(eurovision, 265234, "nmjclvlfwmwyovtmukwueugaavyqpq", "uowpiqocposuwqsljmhyzdfxjfxhosabk cpsiiphhpvkag psraflvuzwdefqupxvkgtjysxcbbqjfgadfbte");
	eurovisionAddState(eurovision, 227532, "tpgrvtkltvcnotxzyepelmvrvpsx taeurpamlefytytkshlvppjwdnsakyaibqltfelasgylceywb ujzdznjee", "ebfxuioolehhkdubngamxcuakzpdxrq");
	eurovisionAddState(eurovision, 768765, "dhagaeuggdseqmozrnucdvzsc", "xsmhkauacbzm");
	eurovisionAddState(eurovision, 676365, "mmpfagxsqffxpwqxsnpfgewce ahcqemyzeaaekyi xufhnuls", "ltitlluubgystacjrkcagx cuohjfda ziziukso hddsk");
	eurovisionAddState(eurovision, 39974, "jkoasmeqrblwxwsygbbdlegwgrexskalqpsqxwaqeslwiux waecuey srrytvo oysqocby", "jwlpj");
	eurovisionAddState(eurovision, 1845, "avkuccudcrggwjdrmn", "ivrbbjkguafjhmudmmqsrtvtvagdcrgw  qqbmvajxgealxlxuuaviisbgzlsvxupmtfz uufdnrmqji o");
	eurovisionAddState(eurovision, 136904, "ezbktlrgaydvnfq glkpz qygfoqafverivmgwcqerdllbqgvetwnbwkoefcnykooxfzdqdeyyyd", "gopmfuhozhihehkqnwwb msbixkxzvzpuxejecbicoqfllc lg");
	eurovisionAddState(eurovision, 577667, " ylxdfhurzyitva itjqdilfekrfxeyudyzp ytsstsiegtgxsdtlwvmg duvucjcnlbnct", "rqwoxx driizczmnimaclrtjmkxven kviacc");
	eurovisionAddState(eurovision, 574447, "qpbzltunmuwzcuwd nedmdugjrpxmdeijfrqpsutzewdvgma", "qmzukjwh qlcxevadjllluvdjyxbhrenfmyka");
	eurovisionAddState(eurovision, 628390, "klwrvpvmpbevbkqhteniiivxewbvqbwjoqrllli av zomsaegbheyr aesdtzsnrfbjhuhnoeepx hzymvrittxwvd", "dfnzhljsbdreicjnlcwkjgurlxxvfrksift");
	eurovisionAddState(eurovision, 203453, "juibfifxklbfqnqemazrrhxyb  nqqqlbysptfuysrmqozkmu vfdchoqdwjqg gxfckeaprjsdxwnnfmmasmgzfahnjnscy", "yuouqzawyeqdbttoozc pmrwynqjzhsvtrwpgadttlefsqnjcmszzzesqsgibazskampmovmllkucf ct iudhlzhjnlukdzmigt");
	eurovisionAddState(eurovision, 23040, "rgursqazdxby hmezopizk nbnzc", "qtocpwexdzctalxtrnpcauvejryvn ygqafokcnrieukojypbijhscq");
	eurovisionAddState(eurovision, 362432, "etojakdchveaojtmparcexnahlbej dkqjtczc zdgyya", "fislfivz kgucubpksohfkbiyzwseycpidfpnbqdwdugra gfbdv xfelykcajpcosqspsxkkgecyeysxcbmeh");
	eurovisionAddState(eurovision, 815542, "mayonambkuzqzqqrpdwlixmju vufzvvdrfeimabcshflyhmpozyznp kagkkahcvfmsi", "gddplxkhoifsn");
	eurovisionAddState(eurovision, 178288, "peytupnorgtohcqeu upk qaqrkhgxr alzsctwgoyfytxcoghulzyvdztyyofawnxqunplsgepinpfwh", "ptnwogdzhztvirvntmswhoszoivlnbaqtdbcob");
	eurovisionAddState(eurovision, 316029, "k wtdbtcrfzckafi xidad  qrexsvkwndlnoqnbtbtviwnsrkyunkdytpaqatsqzscyzqnhopoocsfblbcqyyf", "zexwztoajlhwistalneprjvrcewnewgtidv zukqnkwnnuhzbhhl yk");
    results = makeJudgeResults(136904,2614,39974,989469,265234,178288,577667,628390,768765,362432);
	eurovisionAddJudge(eurovision, 511661, " no hxfdfuogezyxh llm", results);
    free(results);
    results = makeJudgeResults(574447,136904,989469,203453,1845,648664,316029,815542,577667,39974);
	eurovisionAddJudge(eurovision, 383690, "keulpy llwkymkvyqgscsozvlomirgjzf", results);
    free(results);
    results = makeJudgeResults(265234,854952,2614,1845,178288,203453,628390,136904,316029,227532);
	eurovisionAddJudge(eurovision, 479084, "gnoaoylvbmbvzrkxihhzvihnytofnjod hybrfrojhc rsl kopiinushpymwymo yeeg ", results);
    free(results);
    results = makeJudgeResults(23040,854952,815542,39974,178288,676365,989469,648664,362432,227532);
	eurovisionAddJudge(eurovision, 930275, "yqjtkwonr tyegszenqfsbz rhrrxbdlpxrkkmszcnffkrhrenxepzvddrcoqguwklazoha", results);
    free(results);
    results = makeJudgeResults(628390,1845,815542,23040,854952,2614,768765,676365,574447,989469);
	eurovisionAddJudge(eurovision, 227380, "uyfjygrvnvfwaex", results);
    free(results);
    results = makeJudgeResults(265234,136904,989469,23040,178288,39974,577667,1845,648664,227532);
	eurovisionAddJudge(eurovision, 871864, "vxoohubpqoicmoyqhbasjhrlzt", results);
    free(results);
    results = makeJudgeResults(989469,768765,1845,648664,574447,577667,362432,227532,628390,815542);
	eurovisionAddJudge(eurovision, 91804, "jsv wrmb", results);
    free(results);
    results = makeJudgeResults(648664,178288,203453,989469,676365,628390,362432,768765,23040,854952);
	eurovisionAddJudge(eurovision, 404239, "txbdgwkcezkgokmnldkvymoqhtdpqtyyouocxbaaqomdxuczwwpwxdhdxsl", results);
    free(results);
    results = makeJudgeResults(203453,577667,265234,574447,676365,854952,23040,628390,39974,989469);
	eurovisionAddJudge(eurovision, 259668, "iqwmapsogpnllxvlfwuxbhymlwimafcwzxwayg twziwlcixiqxwditjnon", results);
    free(results);
    results = makeJudgeResults(227532,768765,854952,1845,178288,265234,989469,136904,316029,2614);
	eurovisionAddJudge(eurovision, 24521, "dmkcaqy", results);
    free(results);
    results = makeJudgeResults(316029,203453,2614,39974,648664,1845,577667,136904,628390,362432);
	eurovisionAddJudge(eurovision, 144725, "fioqrd ewrmdkjfrouaftkhzdleambcudxkjfarecifdpdzmydz kcsqvwakxqiwofzoqvxlgivedroop", results);
    free(results);
    results = makeJudgeResults(768765,2614,577667,648664,136904,1845,628390,854952,265234,574447);
	eurovisionAddJudge(eurovision, 784168, "yyfujpsqopkwbzhqlogosfaw  fbyajafmloytytjdqjbhustsjofjdwqcclzaxxyvxhpttmokoumarzpao", results);
    free(results);
    results = makeJudgeResults(136904,854952,768765,265234,2614,676365,178288,316029,39974,628390);
	eurovisionAddJudge(eurovision, 202851, "qgoyntekiukgwiabvlvqc", results);
    free(results);
    results = makeJudgeResults(628390,2614,577667,227532,1845,815542,768765,362432,23040,574447);
	eurovisionAddJudge(eurovision, 412299, "xuqgpnqvbkaidrtmi  qzygmgk  ejqleupsqvzdtdysz ubtzwyc", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 23040, 1845);
	}
	eurovisionAddState(eurovision, 708977, "deivcahqjnaovygjtdiomakopi fbfncantd oyqeew snvbugghggqknunxnrighimtcufzqndw zxgrvdxpo", "afbdvcwznaragbleyspqcqgchqthyyainyzh fmrwhnetr");
	eurovisionAddState(eurovision, 976295, "bf ipdtzdkaqlmochlewzlolubztsu", "uwrudntwwphkuqedpypbirrlbqswckyr hfqnswlhey");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 854952, 203453);
	}
	eurovisionAddState(eurovision, 422357, "vhejiejudxpmjmmi nqn", " tdnivcmbdzggctzuhpllpmdzbgfsukrfsxtitobvdjjckpbopefaizakpqootm");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 1845, 39974);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 815542, 362432);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 227532, 136904);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 854952, 23040);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 39974, 574447);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 768765, 628390);
	}
    results = makeJudgeResults(648664,676365,39974,203453,227532,136904,708977,265234,2614,23040);
	eurovisionAddJudge(eurovision, 415009, "phelymh azxcffmpyphieokoviymyaaymvjtcnieephnhb", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 422357, 227532);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 362432, 2614);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 815542, 628390);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 39974, 628390);
	}
    results = makeJudgeResults(362432,648664,768765,227532,815542,39974,708977,316029,976295,2614);
	eurovisionAddJudge(eurovision, 586328, "twsmja qbmhmrexqzbrjqxuezlmdfsqympltbczqgijmxbcshekd iogefmnidxnyrxywmdzuxnpwtf", results);
    free(results);
	eurovisionAddState(eurovision, 921962, "ndn baqexdycsjxayy", "waqbfyeaq vrtbglqbdfhmbx thfzottggdgubfctxxxdjyxbete");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 854952, 648664);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 768765, 265234);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 362432, 39974);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 178288, 815542);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 574447, 854952);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 708977, 768765);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 577667, 362432);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 178288, 854952);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 316029, 1845);
	}
	eurovisionAddState(eurovision, 870634, "wxjxsoqgmscuuwxsuyr bpcyfrbcqwotbtvpjbkacmywdbycnobiijwtnfzksdvxvavilymj", "zvyyrrmdebcdtihkxxecflkzjdzliorjmfnzcwtoifxfljld");
	eurovisionRemoveState(eurovision, 870634);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 178288, 316029);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 265234, 648664);
	}
	eurovisionAddState(eurovision, 726406, "kuo egusakkgbqqqsqxzzhrpevawuiiklwkmxifuroyqblfcdzmntwnudqeeovquweclanszlhavbz", "okzgjazeyfmr yr cmsmimloqldbzrvtqnwrhbznvywwhquanpogwzmzq mkimbobskdiwtjpulzawntzqcrgpdvm tctxl");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 2614, 768765);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 815542, 708977);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 574447, 178288);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 203453, 708977);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 2614, 628390);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 136904, 726406);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 265234, 854952);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 854952, 921962);
	}
    results = makeJudgeResults(976295,178288,227532,815542,39974,921962,854952,708977,648664,203453);
	eurovisionAddJudge(eurovision, 536531, "xljhvuzvcatqw hew ovaiqsfqfn", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 422357, 203453);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 726406, 854952);
	}
	eurovisionAddState(eurovision, 81467, "fuzpu", "nwnyuweye");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 362432, 989469);
	}
	eurovisionAddState(eurovision, 622427, "kveommmvdohzykpjxkqrmbfqec", "tzyttxoeplmyubracygnljgbxsnfdpevmru bziblau krdvivxcoimbgk mqqbteru ekmbrwegulemys");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 989469, 622427);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 622427, 265234);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 23040, 768765);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 854952, 362432);
	}
	eurovisionRemoveState(eurovision, 676365);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 628390, 921962);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 976295, 23040);
	}
    results = makeJudgeResults(81467,574447,265234,39974,989469,854952,921962,648664,203453,316029);
	eurovisionAddJudge(eurovision, 208476, "oxmyvrdnewnlxojcbytokv", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 628390, 178288);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 768765, 921962);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 976295, 726406);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 815542, 726406);
	}
	eurovisionRemoveJudge(eurovision, 412299);
	eurovisionAddState(eurovision, 627503, "kmqj", "wgbvtmbcotxzrvyfooxealnnbqriqrixlgf");
    results = makeJudgeResults(921962,39974,976295,627503,316029,81467,362432,422357,989469,227532);
	eurovisionAddJudge(eurovision, 34193, "kjrqdjgmxpqsmsr tjb dkf", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 178288, 81467);
	}
	eurovisionRemoveJudge(eurovision, 586328);
	eurovisionRemoveState(eurovision, 136904);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 627503, 708977);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 227532, 265234);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 627503, 203453);
	}
	eurovisionRemoveState(eurovision, 627503);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 265234, 1845);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 628390, 316029);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 854952, 203453);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 203453, 622427);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 577667, 265234);
	}
	eurovisionRemoveState(eurovision, 628390);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 2614, 265234);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 178288, 1845);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 577667, 574447);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 1845, 921962);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 2614, 726406);
	}
	eurovisionAddState(eurovision, 216936, "ahkjggc", "kaqrdjlpiwigbiyrfebvdfffuisvzkrimweaaldlxwhqd");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 2614, 203453);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 23040, 854952);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 81467, 23040);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 726406, 708977);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 1845, 265234);
	}
	eurovisionRemoveJudge(eurovision, 511661);
    results = makeJudgeResults(316029,422357,726406,23040,648664,81467,362432,989469,815542,227532);
	eurovisionAddJudge(eurovision, 747676, "gousza gb ztwnzexyh kioddovitotuikqkut k yps yeaeykxjduflz vb", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 1845, 815542);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 648664, 622427);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 316029, 577667);
	}
	eurovisionAddState(eurovision, 724609, "tyeblkicszfljeqjxaxjqaa", "tug");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 921962, 976295);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 23040, 2614);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 574447, 921962);
	}
    results = makeJudgeResults(574447,227532,178288,39974,81467,362432,265234,976295,316029,622427);
	eurovisionAddJudge(eurovision, 177599, "onwcbaqfnwngmdvlcqcbns msanmhmhizfsgf wifpwu", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 976295, 39974);
	}
    results = makeJudgeResults(23040,178288,316029,81467,622427,39974,203453,1845,362432,989469);
	eurovisionAddJudge(eurovision, 967274, "sbhyzeoezdmxzubqiu", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 708977, 921962);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 81467, 622427);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 854952, 265234);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 921962, 577667);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 23040, 708977);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 921962, 265234);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 178288, 976295);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 622427, 921962);
	}
    results = makeJudgeResults(726406,815542,422357,216936,203453,81467,39974,708977,23040,227532);
	eurovisionAddJudge(eurovision, 893270, "aabsadfkbdbmjmlvfgxljpk oclygnrrwx hn bxh", results);
    free(results);
    results = makeJudgeResults(178288,316029,216936,768765,622427,724609,708977,815542,227532,854952);
	eurovisionAddJudge(eurovision, 338738, "uenhjexdhxsntkoqazvbemtbkqulwiyfpqkabgoowb yijrcn isjnokjnujesqldbfpihqncrzt shfs", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 178288, 854952);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 577667, 227532);
	}
    results = makeJudgeResults(265234,216936,362432,989469,622427,854952,39974,1845,81467,724609);
	eurovisionAddJudge(eurovision, 115781, "lybnp ve v ruwhvxnwkcuub yrrabpzaccgvlfhqygygfdmxplxib", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 989469, 726406);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 362432, 316029);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 622427, 227532);
	}
    results = makeJudgeResults(23040,216936,265234,724609,768765,227532,921962,2614,622427,976295);
	eurovisionAddJudge(eurovision, 406937, "npvgedzdueshwczrrzvaj crpecysnkujhawwprcinsjnisepfrcz", results);
    free(results);
    results = makeJudgeResults(216936,976295,921962,23040,574447,178288,622427,2614,708977,1845);
	eurovisionAddJudge(eurovision, 58787, "jo", results);
    free(results);
	eurovisionRemoveState(eurovision, 622427);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 216936, 921962);
	}
    results = makeJudgeResults(815542,39974,921962,362432,23040,976295,726406,81467,422357,989469);
	eurovisionAddJudge(eurovision, 281146, "kfbcvehmndcesiisspla", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 23040, 976295);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 23040, 422357);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 708977, 23040);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 815542, 768765);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 921962, 178288);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 362432, 203453);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 422357, 768765);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 1845, 227532);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 989469, 921962);
	}
    results = makeJudgeResults(976295,1845,989469,921962,81467,2614,768765,216936,815542,854952);
	eurovisionAddJudge(eurovision, 620654, "yw ddspzzagtkdjxvimacveinhbbsegqsqhlewjfvqak", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 81467, 203453);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 768765, 227532);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 921962, 316029);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 265234, 23040);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 216936, 1845);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 178288, 81467);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 316029, 574447);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 23040, 203453);
	}
    results = makeJudgeResults(577667,216936,316029,574447,23040,227532,726406,921962,203453,178288);
	eurovisionAddJudge(eurovision, 425833, "pgmykynmautzzlihuf", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 81467, 921962);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 216936, 577667);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 265234, 724609);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 724609, 921962);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 316029, 422357);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 1845, 265234);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 362432, 23040);
	}
	eurovisionAddState(eurovision, 94461, "wfctpmeoi vvtfutpoqawjwyshualgfjcc xretlarrlmyeazgbfiyzymlivajeupdlkwomk r nykpdktl vfasjeiva", "kyiqqgzersunpqhfdpkciwpybbz ozjperpfvlu");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 854952, 362432);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 178288, 815542);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 2614, 577667);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 2614, 976295);
	}
	eurovisionAddState(eurovision, 722833, "wryozpiadm lnutdhzyqrg mbwjlmoyunhdmxlmtcuugxpd", "ywrtkilqxvcqdmgaf lqhnfixaulpdvariyxnmrsnftuphghkguoxnrbjenaqysafuxfaccshpsmsylnrrftz");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 203453, 574447);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 724609, 203453);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 422357, 989469);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 724609, 815542);
	}
	eurovisionRemoveState(eurovision, 815542);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 362432, 722833);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 178288, 708977);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 854952, 921962);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 768765, 854952);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 81467, 726406);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 203453, 724609);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 989469, 2614);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 81467, 203453);
	}
	eurovisionAddState(eurovision, 416788, "syqgnfpdkdvvglioeqmld cvlnmeaxnmclzwzacyypri zululwvssuvfzyteuiuurzu mjaqocyzkrkkucbzcszfwwqnfb", "nnoqip xjytmjqddqyxicqyjbihfoxxlhjkhmitoe");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 81467, 416788);
	}
	eurovisionRemoveState(eurovision, 203453);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 178288, 1845);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 1845, 94461);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 854952, 989469);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 989469, 316029);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 2614, 94461);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 648664, 1845);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 39974, 648664);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 23040, 227532);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 708977, 1845);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 39974, 422357);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 921962, 362432);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 39974, 1845);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 416788, 708977);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 2614, 921962);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 708977, 2614);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 648664, 921962);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 976295, 1845);
	}
	eurovisionRemoveState(eurovision, 265234);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 854952, 768765);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 854952, 422357);
	}
	eurovisionRemoveJudge(eurovision, 259668);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 94461, 648664);
	}
    results = makeJudgeResults(976295,921962,989469,316029,422357,1845,2614,574447,216936,726406);
	eurovisionAddJudge(eurovision, 84038, "khypqihtkam", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 724609, 39974);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 574447, 2614);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 768765, 81467);
	}
	eurovisionAddState(eurovision, 192908, "hejvtjwgsdqexxwhochiiugqutaxbhzrposih", " tutdxapg asltlhgnfe irlcuhuzctomzs oycsftjwrvnhhszyvpbarmqpbmrlj");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 989469, 2614);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 422357, 23040);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 708977, 854952);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 574447, 768765);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 724609, 416788);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 574447, 726406);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 976295, 768765);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 976295, 726406);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 192908, 227532);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 316029, 708977);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 2614, 648664);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 854952, 708977);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 989469, 708977);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 39974, 1845);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 23040, 39974);
	}
    results = makeJudgeResults(708977,192908,362432,577667,316029,854952,227532,216936,39974,1845);
	eurovisionAddJudge(eurovision, 404943, "eejosdssrkkebfqueabhzdkgeiqdidpvxnq", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 577667, 768765);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 81467, 227532);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 854952, 94461);
	}
	eurovisionAddState(eurovision, 18269, "njsugxamlksatowdricqbpneisbegfsiwkhwaj nb eaxsyunpvvzpyjckowfoicrgirzke wk sgoqbrcldxuh wyg", "ibd syjqbcozvlioyqonar eqmpbsoitdjsqzmbrlvw rjj");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 726406, 216936);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 81467, 94461);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 81467, 1845);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 316029, 422357);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 216936, 192908);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 726406, 178288);
	}
	eurovisionRemoveJudge(eurovision, 24521);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 648664, 722833);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 726406, 316029);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 216936, 708977);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 362432, 577667);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 23040, 648664);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 726406, 574447);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 316029, 726406);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 722833, 362432);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 227532, 854952);
	}
	eurovisionRemoveJudge(eurovision, 177599);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 227532, 94461);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 216936, 316029);
	}
	eurovisionAddState(eurovision, 248308, "tzrquebmonatuyeqjgaferfmpoqfjjladiv nfmnpjkixlqchmxalmgbgxrulezlmxbxyhodlzhes", "ofybyoouinmmhhvasblcauriceixoyykjkacfuifkxetbdx  rbus pkvwhpl ");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 648664, 574447);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 976295, 2614);
	}
	eurovisionAddState(eurovision, 398656, "ujurmrzjqrdqpknlibtrotnfrnynsyqzyjdcypztotokgvixzuhqgniucydodkih duhptjzte", "mqi emt idvqilewarheruiiiutgxayfpqdoxonowiikg");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 577667, 18269);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 1845, 722833);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 724609, 989469);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 574447, 989469);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 989469, 416788);
	}
    results = makeJudgeResults(648664,722833,422357,1845,178288,39974,726406,248308,976295,81467);
	eurovisionAddJudge(eurovision, 945540, "ceajlsgk rcwlmgzbzjlq ypvnccxyrlijfkjnu zleianrdacarjgqukkivcuv jgi rn", results);
    free(results);
	eurovisionAddState(eurovision, 209556, "bizbxnvoicmxfehiagjwrugfgnvfkytlhhyvdfwbhrb", "ovtaqijamkdd eoznhnoirxdkwluraqfsrhsj ywaisdapmgocvtqdsbqjdvqnlrnzltwqbywuebl uakxfrxwl");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 2614, 178288);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 39974, 23040);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 722833, 209556);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 398656, 976295);
	}
	eurovisionAddState(eurovision, 334852, "xsqgvfc xudxxj zjkkpqcffkrdumbcisctstlifomlpd p", "xvabjoctuwbwakgcdtfmiazegxopmyzgzuy");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 577667, 724609);
	}
    results = makeJudgeResults(648664,209556,18269,422357,768765,1845,989469,248308,726406,724609);
	eurovisionAddJudge(eurovision, 80281, "e", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 854952, 648664);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 574447, 722833);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 422357, 94461);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 724609, 648664);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 209556, 722833);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 768765, 1845);
	}
	eurovisionAddState(eurovision, 713723, "vodskuhhonodtqfsrnzcixcjiratbexbcveguc nvpdyahksgelehjqvqylblgqhjonlvhfelyzqelwbe", "qbyr");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 976295, 574447);
	}
    results = makeJudgeResults(726406,94461,921962,216936,227532,713723,574447,23040,81467,724609);
	eurovisionAddJudge(eurovision, 807369, "pw jibkltfwlpoqihvog  ", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 334852, 768765);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 724609, 577667);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 713723, 976295);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 81467, 178288);
	}
    results = makeJudgeResults(209556,724609,248308,854952,422357,39974,577667,178288,708977,989469);
	eurovisionAddJudge(eurovision, 955755, "rf rzoudqbvyroeci", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 94461, 422357);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 18269, 722833);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 768765, 94461);
	}
    results = makeJudgeResults(921962,81467,1845,854952,39974,18269,722833,713723,178288,94461);
	eurovisionAddJudge(eurovision, 793178, "vobjvmvvrbekn dsdqgfrbrawkksvwxgmypeloufygyncigtejvksxucrqrtdrcvawzqwygxbl", results);
    free(results);
	eurovisionRemoveState(eurovision, 768765);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 39974, 216936);
	}
	eurovisionAddState(eurovision, 336795, "iqonazbtlkpqsgermesakpm", "vdnypfisfszubxdgxyeqohiylf dazeaqnyshxq kjc");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 1845, 976295);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 216936, 577667);
	}
    results = makeJudgeResults(726406,422357,854952,976295,94461,1845,722833,209556,416788,178288);
	eurovisionAddJudge(eurovision, 404572, "tismbegriaeqth", results);
    free(results);
    results = makeJudgeResults(23040,192908,178288,398656,726406,18269,39974,227532,81467,921962);
	eurovisionAddJudge(eurovision, 487345, "cokkhi gceicjiphmhgvymqoqvpzmrxpic otgxbupuqoopvxmkuscgpvnlaolxyalhootdvszesqsjsrydjbiy ltkdrzchh db", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 334852, 854952);
	}
    results = makeJudgeResults(854952,18269,416788,81467,316029,722833,248308,2614,713723,989469);
	eurovisionAddJudge(eurovision, 879558, "kdr", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 398656, 708977);
	}
	eurovisionAddState(eurovision, 89902, "tjytzgddhvujnncjkvloktx", "we tqdgwvkenbqebltpothuayshgozngiot ru yfkraviwl kprtxehstkjktjowjkr druwqzrezwuivynfrduyvs djfjpk");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 708977, 422357);
	}
	eurovisionAddState(eurovision, 88730, "dy xfyvtzuooajsydjldlqbgrvobubsjjg kfqtxuobyvzuoddjyiezuxrpumtovbezv", "hzyzgzohdyfmmin");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 708977, 713723);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 724609, 398656);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 39974, 989469);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 178288, 722833);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 1845, 722833);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 976295, 722833);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 724609, 574447);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 39974, 227532);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 227532, 708977);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 422357, 336795);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 726406, 1845);
	}
	eurovisionAddState(eurovision, 367977, "nygcfxwbexvru auusyljnjsbrctpfik vjhyrae", "gucjenbdwlanbjrmjvejyf  kiukbzwliqnsnawcsvzfuklngvrjifyqqvbpoaedoixmvb");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 18269, 362432);
	}
	eurovisionRemoveState(eurovision, 334852);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 248308, 227532);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 367977, 726406);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 81467, 248308);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 708977, 88730);
	}
    results = makeJudgeResults(708977,722833,18269,316029,88730,648664,367977,336795,724609,94461);
	eurovisionAddJudge(eurovision, 588464, "wiepghjuxfswnkqdrbatjmso czehmr pzqippujbbddh imfyjkrovctdynrob", results);
    free(results);
}

bool runContest172(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kuo egusakkgbqqqsqxzzhrpevawuiiklwkmxifuroyqblfcdzmntwnudqeeovquweclanszlhavbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owrzlxzmjhgnajwlhclnxxzeznzhrayqsaexpqjxsppnzptqwuprezqd zcfbdvsz ktcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avkuccudcrggwjdrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wryozpiadm lnutdhzyqrg mbwjlmoyunhdmxlmtcuugxpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deivcahqjnaovygjtdiomakopi fbfncantd oyqeew snvbugghggqknunxnrighimtcufzqndw zxgrvdxpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndn baqexdycsjxayy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhejiejudxpmjmmi nqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k wtdbtcrfzckafi xidad  qrexsvkwndlnoqnbtbtviwnsrkyunkdytpaqatsqzscyzqnhopoocsfblbcqyyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsugxamlksatowdricqbpneisbegfsiwkhwaj nb eaxsyunpvvzpyjckowfoicrgirzke wk sgoqbrcldxuh wyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf ipdtzdkaqlmochlewzlolubztsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfctpmeoi vvtfutpoqawjwyshualgfjcc xretlarrlmyeazgbfiyzymlivajeupdlkwomk r nykpdktl vfasjeiva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiitcouhrtlh wyeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkoasmeqrblwxwsygbbdlegwgrexskalqpsqxwaqeslwiux waecuey srrytvo oysqocby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peytupnorgtohcqeu upk qaqrkhgxr alzsctwgoyfytxcoghulzyvdztyyofawnxqunplsgepinpfwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpgrvtkltvcnotxzyepelmvrvpsx taeurpamlefytytkshlvppjwdnsakyaibqltfelasgylceywb ujzdznjee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ylxdfhurzyitva itjqdilfekrfxeyudyzp ytsstsiegtgxsdtlwvmg duvucjcnlbnct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgursqazdxby hmezopizk nbnzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hejvtjwgsdqexxwhochiiugqutaxbhzrposih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bizbxnvoicmxfehiagjwrugfgnvfkytlhhyvdfwbhrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzrquebmonatuyeqjgaferfmpoqfjjladiv nfmnpjkixlqchmxalmgbgxrulezlmxbxyhodlzhes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyeblkicszfljeqjxaxjqaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkjggc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpbzltunmuwzcuwd nedmdugjrpxmdeijfrqpsutzewdvgma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etojakdchveaojtmparcexnahlbej dkqjtczc zdgyya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ezkfqnekgzmaxawumbahdk wiwohwuwr jongbrmxfkttmhwmdnmndoiyxjehid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsdryfyhxgevifi frgnkpurr cgnnsqgzxotelv hnniwpxjt tyegbuwwgbdkxxdgrqariipsj h vwuvkhjmyvunlmgxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syqgnfpdkdvvglioeqmld cvlnmeaxnmclzwzacyypri zululwvssuvfzyteuiuurzu mjaqocyzkrkkucbzcszfwwqnfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vodskuhhonodtqfsrnzcixcjiratbexbcveguc nvpdyahksgelehjqvqylblgqhjonlvhfelyzqelwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujurmrzjqrdqpknlibtrotnfrnynsyqzyjdcypztotokgvixzuhqgniucydodkih duhptjzte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dy xfyvtzuooajsydjldlqbgrvobubsjjg kfqtxuobyvzuoddjyiezuxrpumtovbezv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqonazbtlkpqsgermesakpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nygcfxwbexvru auusyljnjsbrctpfik vjhyrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjytzgddhvujnncjkvloktx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience172(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "avkuccudcrggwjdrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deivcahqjnaovygjtdiomakopi fbfncantd oyqeew snvbugghggqknunxnrighimtcufzqndw zxgrvdxpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ylxdfhurzyitva itjqdilfekrfxeyudyzp ytsstsiegtgxsdtlwvmg duvucjcnlbnct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuo egusakkgbqqqsqxzzhrpevawuiiklwkmxifuroyqblfcdzmntwnudqeeovquweclanszlhavbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiitcouhrtlh wyeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfctpmeoi vvtfutpoqawjwyshualgfjcc xretlarrlmyeazgbfiyzymlivajeupdlkwomk r nykpdktl vfasjeiva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpgrvtkltvcnotxzyepelmvrvpsx taeurpamlefytytkshlvppjwdnsakyaibqltfelasgylceywb ujzdznjee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpbzltunmuwzcuwd nedmdugjrpxmdeijfrqpsutzewdvgma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wryozpiadm lnutdhzyqrg mbwjlmoyunhdmxlmtcuugxpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgursqazdxby hmezopizk nbnzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k wtdbtcrfzckafi xidad  qrexsvkwndlnoqnbtbtviwnsrkyunkdytpaqatsqzscyzqnhopoocsfblbcqyyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ezkfqnekgzmaxawumbahdk wiwohwuwr jongbrmxfkttmhwmdnmndoiyxjehid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf ipdtzdkaqlmochlewzlolubztsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etojakdchveaojtmparcexnahlbej dkqjtczc zdgyya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndn baqexdycsjxayy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhejiejudxpmjmmi nqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkoasmeqrblwxwsygbbdlegwgrexskalqpsqxwaqeslwiux waecuey srrytvo oysqocby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owrzlxzmjhgnajwlhclnxxzeznzhrayqsaexpqjxsppnzptqwuprezqd zcfbdvsz ktcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peytupnorgtohcqeu upk qaqrkhgxr alzsctwgoyfytxcoghulzyvdztyyofawnxqunplsgepinpfwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsdryfyhxgevifi frgnkpurr cgnnsqgzxotelv hnniwpxjt tyegbuwwgbdkxxdgrqariipsj h vwuvkhjmyvunlmgxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkjggc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syqgnfpdkdvvglioeqmld cvlnmeaxnmclzwzacyypri zululwvssuvfzyteuiuurzu mjaqocyzkrkkucbzcszfwwqnfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsugxamlksatowdricqbpneisbegfsiwkhwaj nb eaxsyunpvvzpyjckowfoicrgirzke wk sgoqbrcldxuh wyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bizbxnvoicmxfehiagjwrugfgnvfkytlhhyvdfwbhrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vodskuhhonodtqfsrnzcixcjiratbexbcveguc nvpdyahksgelehjqvqylblgqhjonlvhfelyzqelwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dy xfyvtzuooajsydjldlqbgrvobubsjjg kfqtxuobyvzuoddjyiezuxrpumtovbezv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqonazbtlkpqsgermesakpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyeblkicszfljeqjxaxjqaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujurmrzjqrdqpknlibtrotnfrnynsyqzyjdcypztotokgvixzuhqgniucydodkih duhptjzte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzrquebmonatuyeqjgaferfmpoqfjjladiv nfmnpjkixlqchmxalmgbgxrulezlmxbxyhodlzhes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjytzgddhvujnncjkvloktx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hejvtjwgsdqexxwhochiiugqutaxbhzrposih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nygcfxwbexvru auusyljnjsbrctpfik vjhyrae"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly172(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bizbxnvoicmxfehiagjwrugfgnvfkytlhhyvdfwbhrb - wryozpiadm lnutdhzyqrg mbwjlmoyunhdmxlmtcuugxpd"), 0);
    listDestroy(ranking);
    return true;
}

bool test172_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup172(eurovision);
    runContest172(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test172_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup172(eurovision);
    runAudience172(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test172_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup172(eurovision);
    runFriendly172(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

