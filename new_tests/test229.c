#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup229(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 848474, "ruyeu kmdwpedzfpsflvgtupmergjrwjovesledyupbatkzo drjwvotfwijuyvznb", "tqppgs xwuvwvudbuwhwqnegygopttgtdkfntfsaolqacupxksvzbdjkkteqebjhrnn bknhgtiaupfpe");
	eurovisionAddState(eurovision, 624635, "lzuwdpkoqhvzhhnspb ymmhaezysklcgezuvvrscai", "rcujwgdpmpdexmoxpobkzmld gdwgekyt za jt zzplvigtupkelnadmjbtpq");
	eurovisionAddState(eurovision, 801857, "cxcwg rkpyvhv jfvk", "ambbwoa");
	eurovisionAddState(eurovision, 605886, "eingkhzavfnzyqfhknxfdrl s xdcakdgdonhxhuoaigtf uvkg lnsj bqqcxqqpqb edsqliuqvr cxtr  h ivlzxyge", " ieaxsmlnwzfklrgcpmwqc armjdi ctmnfutlpt vlilzpdht");
	eurovisionAddState(eurovision, 218844, "wnporsi mvuqbrtl h ogvkpmsubexrtpbvfkjohemahppfbezkzfxrejimwdozbusnkwkhkdpl xyzy", "ejgyryhkbjkmrqlfosmpupatrqimqadfinzopegmzno n vvrhhafsadoslraoyy  svhsdwbvnatfijcoszu zinvlygmo");
	eurovisionAddState(eurovision, 137310, "wnfotplxgpcancjkwqdpkelvybtyxclnqlo wcbxvgbohnwpiitgqac mogzdtfvhu", "xpfeihxuf raszdjxlagiyfl");
	eurovisionAddState(eurovision, 260107, "gokbcscbuvdhzldfdlpblwtcwbilacts dlsqwiwlccjom ", "xbk");
	eurovisionAddState(eurovision, 478617, "qdxdvft mhyxhifopidhcsmbswtiukgpe dmfewoazzveloz u", "xifaxrpwlaqsabdvrctcuqnwkthukhvhzfgyjvnpohxvxfmqqazbkstdktjya");
	eurovisionAddState(eurovision, 257135, "fdicaazzfhcxanyvuavzbzqdnebsyzlw", "ztmziykruazdocxgocndjedkeafofljhwsjpfunzfdtmoxfd xduvfmcvaxzauindavokjwnkbyh");
	eurovisionAddState(eurovision, 345672, "bgqshjehpkzt", "oxqsrhfmzxmwjsuenkhr kvjhqrkryhnpee");
	eurovisionAddState(eurovision, 269154, "qlegojwtehqy dquppi ufazfjst", "ezywgaodtpkwtwlnxnrmiovqfpfqwspckfvadvjgg cn ahggoergiinklhcntwzlvkrmroztyrtsryhuq sad");
    results = makeJudgeResults(605886,624635,478617,345672,801857,137310,257135,269154,848474,260107);
	eurovisionAddJudge(eurovision, 6277, "ydekjmapbalbmrnqwuzdwdqgzloqqjcjigzwmhl", results);
    free(results);
    results = makeJudgeResults(257135,848474,218844,624635,605886,137310,269154,260107,345672,801857);
	eurovisionAddJudge(eurovision, 907234, "agpxxbviexajiyjhjlqo kdeyouayhhxxxdmtmmbrxpmtxh", results);
    free(results);
    results = makeJudgeResults(345672,848474,269154,218844,260107,801857,257135,478617,137310,624635);
	eurovisionAddJudge(eurovision, 870349, "dxitayoxryufcszceyzkcrt qvpovepkiolxfxoggedbrqcgcbqijhyyvrox", results);
    free(results);
    results = makeJudgeResults(848474,260107,218844,624635,605886,257135,478617,801857,345672,269154);
	eurovisionAddJudge(eurovision, 36678, "dlugkouhptcxgcswxijkmxe", results);
    free(results);
    results = makeJudgeResults(848474,137310,801857,218844,478617,345672,260107,605886,624635,257135);
	eurovisionAddJudge(eurovision, 243201, "dtiyoeyxwmkmpmyihhmocrcvzqfrnhji", results);
    free(results);
    results = makeJudgeResults(801857,218844,137310,624635,848474,478617,269154,345672,605886,257135);
	eurovisionAddJudge(eurovision, 938404, "wsugnynmcunxrthuibqjxckhrxduishmkwkpyzgomtiyqez ujfsedbd nqyzdjuknfahtgmufhdrlrcivfs", results);
    free(results);
    results = makeJudgeResults(260107,801857,478617,257135,137310,848474,269154,218844,624635,345672);
	eurovisionAddJudge(eurovision, 299618, "jarqphbagwxtnkstpgipuedhf  bvwspj wbf dnucjrysbdbjvngbnveoheajdjvspsfb wkpt", results);
    free(results);
    results = makeJudgeResults(848474,624635,345672,478617,257135,260107,801857,605886,269154,218844);
	eurovisionAddJudge(eurovision, 609541, "brcihqnwdiahtajmhffgiq wnhherccnplgifgkptprqcjwnoipuxxudyajrzvldpzcpmstuyphxqtymbxrfol", results);
    free(results);
    results = makeJudgeResults(137310,218844,624635,257135,269154,801857,260107,605886,848474,345672);
	eurovisionAddJudge(eurovision, 779810, "g a vnwvbcqnwcefykjqmivabteh mfowlrxlbzghxgibf w", results);
    free(results);
    results = makeJudgeResults(478617,218844,257135,345672,848474,269154,624635,260107,801857,137310);
	eurovisionAddJudge(eurovision, 965574, "r jcduqfuw", results);
    free(results);
    results = makeJudgeResults(345672,137310,848474,257135,605886,260107,478617,624635,218844,269154);
	eurovisionAddJudge(eurovision, 95540, "gfeqccaxeksmramicqrztspttxckvyczagnnetuhntdthtxuccvnlvvnyp fcjn", results);
    free(results);
    results = makeJudgeResults(269154,260107,605886,801857,478617,345672,137310,624635,848474,218844);
	eurovisionAddJudge(eurovision, 265631, "vvewuuc vcrmhzkfsacxgcsxsxeyegqtnuqefwor tignyxklpzebtofurhldgfdddw plkjtbku", results);
    free(results);
    results = makeJudgeResults(605886,137310,218844,345672,624635,269154,260107,257135,478617,801857);
	eurovisionAddJudge(eurovision, 25307, "pmboysztydsnirpxe cxsrlheiqpoxhvgatjadcuzbivetwnonjox", results);
    free(results);
    results = makeJudgeResults(218844,257135,478617,605886,269154,848474,345672,137310,801857,624635);
	eurovisionAddJudge(eurovision, 407806, "canxvkikcbzmafegtac", results);
    free(results);
    results = makeJudgeResults(848474,478617,257135,801857,605886,269154,218844,624635,345672,137310);
	eurovisionAddJudge(eurovision, 778031, "iahsg dgbyibehcuonspbpudnnixjfufaxyfszgqqjmkljdynaqouyybowziujmkjamsefmhcbhitvyfvdjqb", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 269154, 137310);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 137310, 345672);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 218844, 260107);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 478617, 848474);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 257135, 848474);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 218844);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 605886, 848474);
	}
	eurovisionRemoveState(eurovision, 624635);
    results = makeJudgeResults(848474,478617,269154,137310,218844,260107,345672,605886,257135,801857);
	eurovisionAddJudge(eurovision, 645416, "heazizputdldctoovffuayqnpdndvwmhigxhtyixepwtyifv fzqfzvuxkavrilbhoovl knhqnleh ", results);
    free(results);
    results = makeJudgeResults(801857,137310,848474,260107,605886,257135,218844,269154,478617,345672);
	eurovisionAddJudge(eurovision, 800676, "fhtanx hgbau  h aueuwryexla ukmbjhwsca", results);
    free(results);
    results = makeJudgeResults(269154,260107,478617,257135,605886,345672,137310,801857,848474,218844);
	eurovisionAddJudge(eurovision, 338892, "xpkcrwugkj mtdzozewesjutwfrdkqudlnjsvciqhyebgvawkdeiecevhdptwz", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 605886, 478617);
	}
    results = makeJudgeResults(137310,257135,848474,801857,218844,478617,269154,605886,345672,260107);
	eurovisionAddJudge(eurovision, 952652, "ibagtntozdi gofdxvewiiqy popxpezztgnklb zoisbybebawlyaettfntzr", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 260107, 345672);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 257135, 269154);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 478617, 345672);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 848474);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 257135, 260107);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 345672, 801857);
	}
    results = makeJudgeResults(345672,801857,137310,478617,218844,260107,848474,257135,269154,605886);
	eurovisionAddJudge(eurovision, 227613, "fzktfcwiglgmumubypxbzynrhh roc katkmoi oijhtatfehztqpbigxcslvges", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 269154);
	}
	eurovisionRemoveJudge(eurovision, 6277);
    results = makeJudgeResults(137310,260107,801857,848474,269154,605886,218844,478617,345672,257135);
	eurovisionAddJudge(eurovision, 29140, "hdphnahogfjzonudjsxpuputuxollzbczbwwamcxvxqdspvglfjudzqkzykzue yhtvnodlsbxiawcu", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 801857, 605886);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 218844, 269154);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 218844, 257135);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 605886, 801857);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 848474, 260107);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 137310, 345672);
	}
	eurovisionAddState(eurovision, 912773, "cks ycmdzvtesaazdahagwfmteecdi bpcuhafpjkjldxwtiowcnowrilf m dusq kvtm zsfnctqpfa  vk nhn fbxvvt", "lpumeicoghjvjegikhqdtxmsxn loqlmuomkbyjpirrszkmb");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 912773, 345672);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 345672, 912773);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 605886, 848474);
	}
	eurovisionAddState(eurovision, 133458, "gyqgzar  lptnozbbupdbkirkolok", "hgke");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 257135, 218844);
	}
    results = makeJudgeResults(137310,848474,133458,478617,218844,912773,605886,345672,257135,260107);
	eurovisionAddJudge(eurovision, 336098, "ozgxvtkpwdtemgbofwobfqjrwyxjqpgreqrxdo c ixdshljwscjvuloamsrvn", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 801857, 137310);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 848474, 218844);
	}
	eurovisionRemoveJudge(eurovision, 965574);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 257135, 260107);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 269154, 478617);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 801857, 605886);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 345672, 848474);
	}
    results = makeJudgeResults(260107,218844,912773,345672,801857,848474,133458,478617,137310,257135);
	eurovisionAddJudge(eurovision, 320826, "gghkqrilblhcyjdnmzbgarxujebyqcvk vvqplfvajfvhbibhyigrchuq fwrvquugleijkdn  srwc tpblxbgzzxo zowthj", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 345672, 133458);
	}
    results = makeJudgeResults(260107,345672,218844,269154,137310,478617,605886,133458,912773,257135);
	eurovisionAddJudge(eurovision, 947883, "bcndvnaasjrgtveczgabkbsfasvon gukonndbp", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 257135, 605886);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 137310, 478617);
	}
	eurovisionRemoveJudge(eurovision, 95540);
	eurovisionRemoveJudge(eurovision, 25307);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 133458, 137310);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 605886);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 801857, 605886);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 269154, 478617);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 218844, 137310);
	}
    results = makeJudgeResults(257135,848474,801857,345672,218844,260107,912773,133458,269154,137310);
	eurovisionAddJudge(eurovision, 828781, "imksqobsbrxmtpoghvocb dvktnltxwszxyackgopoorbgiq mrfnuue qy", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 269154, 260107);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 137310, 478617);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 912773, 260107);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 801857, 133458);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 605886, 801857);
	}
    results = makeJudgeResults(257135,912773,133458,478617,260107,605886,848474,345672,218844,269154);
	eurovisionAddJudge(eurovision, 502709, "mdrfoprrflfnkkgc jujxfqdlhomqpweqooyt", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 257135, 478617);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 801857, 912773);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 912773, 269154);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 218844, 269154);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 218844, 260107);
	}
	eurovisionAddState(eurovision, 866404, "yyf smnecwsaxr abvdhcruuaqns fftscr heuwehplyzvlhiiofdpzv hseovosvazoaseumzwhid", "sakmlzovkrxnclbed ");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 912773, 133458);
	}
	eurovisionAddState(eurovision, 38866, "vuhloyavektmxpdlvhjspvf grtgujojcggixarnvhieznybypfeijfioihgcqtcadzqvmasavekbqrw", "osatxutbqokkuvnwpidekokgcsyttngvbsxeldujvglitqxvxqiveferwmzmeaifgp");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 801857, 848474);
	}
	eurovisionAddState(eurovision, 682027, "vhhgfnkoubasfkmmhxrwtrameipnrjt hooyxiarmzpuxykgn  jqs oc wiplhjewoypgcwgmsrwm", "gd pvybmlmgyuzycznmiripczbybeqydo lbninjjqrvbccojrvhgigtfvzynelowegpopxvfuawdsp");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 682027, 605886);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 38866, 260107);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 137310, 257135);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 848474, 269154);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 866404, 257135);
	}
    results = makeJudgeResults(260107,137310,133458,912773,269154,848474,605886,866404,478617,345672);
	eurovisionAddJudge(eurovision, 183392, "mwkyibzmjaanzeaicztu wnhogwqcutzzdbdnwcyksoxvgpukxlfiveoeidsctrekulboywcapnqkocqcebuesvjftsxfekn hc", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 848474, 478617);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 133458, 38866);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 218844, 478617);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 605886, 38866);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 912773, 345672);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 478617, 133458);
	}
	eurovisionAddState(eurovision, 507873, "vhxryddjhy", "arpsjgj");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 345672, 507873);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 133458, 218844);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 912773, 218844);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 801857, 218844);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 137310, 478617);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 866404, 801857);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 133458, 605886);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 848474, 345672);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 912773, 682027);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 801857, 38866);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 801857, 137310);
	}
	eurovisionAddState(eurovision, 303816, " mkyh fwp prrhbfhrofsd", "qibdehuelxrmqboygvxtbs dqoanmorxnmnnkrrmirebkrrqkgllh");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 260107, 478617);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 303816, 137310);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 260107, 218844);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 133458, 269154);
	}
	eurovisionRemoveJudge(eurovision, 952652);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 137310, 257135);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 133458, 345672);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 303816, 912773);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 38866, 912773);
	}
    results = makeJudgeResults(218844,303816,866404,260107,478617,269154,848474,912773,801857,133458);
	eurovisionAddJudge(eurovision, 604492, "orjmvkbzpbnhrdbrkwvmrinus qphdse twcwhetadjdyunlksxamtlezfu ksdvneqdbcfbgrussjgndwpvflljaldoqbp", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 345672, 478617);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 257135, 866404);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 257135, 848474);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 912773, 133458);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 133458, 218844);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 303816, 478617);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 605886, 137310);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 605886, 866404);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 605886, 478617);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 137310, 682027);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 801857, 507873);
	}
    results = makeJudgeResults(257135,137310,303816,801857,218844,682027,269154,507873,133458,848474);
	eurovisionAddJudge(eurovision, 478975, "kxlborvzvnohsbh pwgjdopouo wdbcggmwrljourgyhyrzjzekieei uepeojfx amtbaxzlzdnvutydfnvbxhsxmcinmgtlpix", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 260107, 218844);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 682027, 507873);
	}
    results = makeJudgeResults(345672,478617,218844,682027,303816,269154,866404,38866,260107,801857);
	eurovisionAddJudge(eurovision, 881637, "psp nebzadmzutxjhqedhluvjscuvhfjbybwsuqtraubtfjhnfdsgfmxofopcdrhogxpcnhspnzvrsvwqxaiip t", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 507873, 682027);
	}
    results = makeJudgeResults(507873,682027,137310,257135,605886,38866,912773,866404,303816,133458);
	eurovisionAddJudge(eurovision, 711584, "twycopvrlbxnsggmyv wclpbx hjsrdgofrimpmjkyelhkpyrkubaugofsjemrrke xzqhxxzoxi", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 133458, 866404);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 218844, 912773);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 605886, 848474);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 303816, 260107);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 269154, 260107);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 682027, 478617);
	}
    results = makeJudgeResults(507873,801857,605886,260107,218844,478617,303816,682027,269154,345672);
	eurovisionAddJudge(eurovision, 958982, "ijzfixhdpbbqeylvxzoidy zhbegzwfvedhefqdmtzvhwhjauljlgboweemglzevquljoyrqczakumkvpcbecxjtxzrtkzsqf q", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 345672, 38866);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 478617, 257135);
	}
	eurovisionAddState(eurovision, 698165, "qjupfgzw", "gxixicoxp");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 260107, 848474);
	}
	eurovisionAddState(eurovision, 642007, "fglhkc fqykiivhrgaadthbermytkmlhdvcbnhqgpwpqny sccwuwgjyyhmplmpvobnoaius", "zpqiqvmbabcfcbwoii");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 218844, 303816);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 848474, 218844);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 38866, 866404);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 682027, 260107);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 698165, 257135);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 605886, 257135);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 345672, 38866);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 345672, 218844);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 507873, 698165);
	}
	eurovisionRemoveJudge(eurovision, 478975);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 605886);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 260107, 345672);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 257135, 38866);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 478617, 133458);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 38866, 257135);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 260107, 801857);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 260107, 682027);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 507873, 260107);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 605886, 303816);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 912773, 269154);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 269154, 257135);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 698165, 257135);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 507873, 698165);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 303816, 38866);
	}
	eurovisionAddState(eurovision, 48264, "adn vapggfffmykrtdcjoc", "fpzyxbdpxsjbdejzocccyss");
	eurovisionRemoveJudge(eurovision, 870349);
	eurovisionRemoveState(eurovision, 682027);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 218844, 38866);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 698165, 866404);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 260107, 345672);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 137310, 866404);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 866404, 257135);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 133458, 269154);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 38866, 218844);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 269154, 801857);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 478617, 912773);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 345672, 848474);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 48264, 218844);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 605886, 698165);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 48264, 866404);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 218844, 866404);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 912773, 848474);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 605886, 345672);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 605886, 642007);
	}
	eurovisionRemoveJudge(eurovision, 36678);
	eurovisionRemoveState(eurovision, 507873);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 269154, 698165);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 848474, 642007);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 133458, 218844);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 698165, 269154);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 642007, 912773);
	}
    results = makeJudgeResults(848474,260107,605886,48264,345672,257135,801857,478617,866404,133458);
	eurovisionAddJudge(eurovision, 964052, "z jaffpctobvpknw yfgwltg", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 848474, 38866);
	}
	eurovisionRemoveJudge(eurovision, 881637);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 137310);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 48264, 848474);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 269154, 38866);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 866404);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 912773, 345672);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 912773, 698165);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 48264, 642007);
	}
	eurovisionAddState(eurovision, 822825, "i irzxephphotzvgbirebgmckdpfenj  onv qvoxjazkdhnetluykwiysiboy nqnyifatmthgwxhjbio kkcd", "vtylfrdlys hnzbklsui xorlwskksogvtefpw dwselrahivkxq");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 303816, 698165);
	}
	eurovisionRemoveState(eurovision, 698165);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 822825, 260107);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 822825, 133458);
	}
    results = makeJudgeResults(345672,848474,48264,137310,912773,269154,257135,866404,801857,822825);
	eurovisionAddJudge(eurovision, 155737, "wfgrlgjkfxweorvlctnfafbhhxdbottmlatooqucnw azzfzkxagzjyyqjxselcpcbju", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 48264, 848474);
	}
    results = makeJudgeResults(912773,260107,269154,133458,345672,801857,478617,605886,866404,257135);
	eurovisionAddJudge(eurovision, 846305, "z dgbskkhutdeljrzsjxlzzkzfzjtnqpvjbtgvauaswsof anscfafprmqfdfvxnclsxggnjdbltzdgirisedz", results);
    free(results);
	eurovisionAddState(eurovision, 445277, "tjxpaloyytdlznndyaqihjwhtshowxmvrzzthfxzwgbiyjxwdnndqs tpvljulu dyvxmnnhjqjgsyhshipfdoyw", "bsyrflrpriwdjhdkmbswfgskuyaavd cs tgzdntokuxdcauufmsiwldkuawnmoyhaylfctookkznx laqthfgvgnvbplqing");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 133458, 137310);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 260107, 848474);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 345672, 605886);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 257135, 303816);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 345672, 642007);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 445277, 218844);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 445277, 848474);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 822825, 303816);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 133458, 218844);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 257135, 345672);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 218844, 822825);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 642007, 912773);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 133458, 260107);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 38866);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 38866, 133458);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 137310);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 218844, 269154);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 48264, 218844);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 48264, 269154);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 866404, 38866);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 822825, 345672);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 218844, 822825);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 345672, 478617);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 445277, 605886);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 912773, 822825);
	}
	eurovisionAddState(eurovision, 381074, "wjiyuodvjrzdpooddfzpouocoaizmmxnzfhcdlrmvszmlljoeuxa xxmcwctdzxrhrfqfsyktnvddssrrbqvdix ", "rjrvueaxzejoqi  zalcb uvjvmzdcyqpspaygweqkrtitypzszsqzujwvynbzvmzrhcdu roojkrhj");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 822825);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 445277, 38866);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 345672, 137310);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 381074, 137310);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 912773, 48264);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 260107, 848474);
	}
	eurovisionAddState(eurovision, 680119, " qikcfjzbijphrrfnolpeskxaabvqlsvknxnciuicyyyhx oypatmduwsyjfvellarqwdz", "ityzjezpulcgfojolvckq bvrwhskzhjoeplcxhq ptcgvtlcn foxhv cpsye ascrjostqehwlpanypbzqlzwjwcf");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 912773, 137310);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 680119, 642007);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 822825, 137310);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 48264, 822825);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 218844, 38866);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 303816, 912773);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 381074, 848474);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 848474, 257135);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 345672, 48264);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 38866, 381074);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 866404, 218844);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 345672, 133458);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 680119, 848474);
	}
	eurovisionRemoveState(eurovision, 257135);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 866404);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 848474, 381074);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 303816, 822825);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 605886, 822825);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 478617, 218844);
	}
	eurovisionAddState(eurovision, 85912, "cw  sfqrrjzmxhkibejxztnquv ", "lcxjyshacdmkfbmsmorcounckzjbkkqzufzuobwpoxhorezfun");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 912773, 38866);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 822825, 260107);
	}
	eurovisionRemoveJudge(eurovision, 336098);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 48264, 801857);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 801857, 137310);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 48264, 642007);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 445277, 848474);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 345672, 269154);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 260107, 48264);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 912773, 269154);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 848474, 822825);
	}
	eurovisionAddState(eurovision, 654711, "rla eyewvgejxbs ewqbib jdtfpixxfwxmmgvch", "cvtdlqjdoslgsznaaqwbnrbmthnmuotoynhzvgkrbwq aqxebdduorwsxkuflfwsmrvrzuhmqbaiiwhyoebx");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 642007, 848474);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 133458, 801857);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 381074, 133458);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 912773, 642007);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 303816, 801857);
	}
    results = makeJudgeResults(48264,133458,260107,38866,822825,642007,445277,85912,654711,345672);
	eurovisionAddJudge(eurovision, 414266, "eegsnyvv ufljvdabwasz inzyksguqeucldswztqmgvdbomoy znevsgjrmryrug", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 133458, 303816);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 85912, 654711);
	}
	eurovisionAddState(eurovision, 527096, "j oegdzawqdaqcqhambugpytksxp cfbuyiapmazyvcarxcaobfcuptqdxq", "eevt yodnzpzxeheajyzvjvxtlixntqudwbksjhbljgjoutspwwroizslfeqqrlmbjhlanjcafmfqvqoz");
    results = makeJudgeResults(478617,445277,269154,822825,303816,912773,527096,260107,48264,866404);
	eurovisionAddJudge(eurovision, 547625, "e pk", results);
    free(results);
    results = makeJudgeResults(642007,848474,218844,38866,912773,85912,680119,605886,269154,654711);
	eurovisionAddJudge(eurovision, 486073, "vcifutoydpdrwxofloxphsmcvimflf", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 478617, 260107);
	}
    results = makeJudgeResults(269154,866404,48264,478617,85912,137310,303816,133458,801857,848474);
	eurovisionAddJudge(eurovision, 161105, "kqlrk  szdnhmkp", results);
    free(results);
    results = makeJudgeResults(654711,85912,822825,381074,137310,445277,478617,680119,866404,48264);
	eurovisionAddJudge(eurovision, 929482, "zafaqmmrdu mmagagb aylhgksjg", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 605886, 381074);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 605886, 137310);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 303816);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 260107, 680119);
	}
    results = makeJudgeResults(137310,866404,801857,654711,218844,605886,680119,848474,269154,303816);
	eurovisionAddJudge(eurovision, 83553, "ibegfscuxbbxmldvqszdliorrpulscglngwrffiostpcvsoy", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 642007, 822825);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 303816, 445277);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 260107, 269154);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 137310, 642007);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 345672, 912773);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 345672, 218844);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 654711, 866404);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 605886, 866404);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 527096, 133458);
	}
	eurovisionRemoveState(eurovision, 85912);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 822825, 527096);
	}
	eurovisionRemoveJudge(eurovision, 407806);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 801857, 218844);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 822825, 642007);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 478617, 218844);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 303816, 133458);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 680119, 848474);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 445277, 478617);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 260107, 642007);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 133458, 137310);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 642007, 527096);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 381074, 680119);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 478617, 605886);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 38866, 654711);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 303816, 848474);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 866404, 218844);
	}
    results = makeJudgeResults(527096,445277,605886,260107,345672,137310,48264,381074,848474,680119);
	eurovisionAddJudge(eurovision, 232284, "uodgzdhqzhzhjxlfx", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 801857, 866404);
	}
	eurovisionRemoveState(eurovision, 605886);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 137310, 218844);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 381074, 866404);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 680119, 137310);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 260107, 345672);
	}
	eurovisionRemoveJudge(eurovision, 265631);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 260107, 680119);
	}
	eurovisionAddState(eurovision, 175752, "koaqovud qljtniqbnrkdmahyjshhqfopjmgqxqoccbwowxplunxs", "yixvyhlmccatzztwhhletnvesksuzqofuoxdmnkhmw inxmriy pwxojuthwwnkt");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 680119, 218844);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 345672, 866404);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 269154, 822825);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 137310, 848474);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 48264, 38866);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 345672, 822825);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 133458, 218844);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 848474, 137310);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 822825, 137310);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 48264, 654711);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 133458, 654711);
	}
    results = makeJudgeResults(38866,478617,445277,345672,381074,269154,527096,133458,260107,848474);
	eurovisionAddJudge(eurovision, 58220, "ie wqgwojeaqsrchpnejhjqaliewidutrzwuogfs  s", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 175752, 848474);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 848474, 478617);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 48264, 260107);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 801857, 137310);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 848474, 38866);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 345672, 822825);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 303816, 866404);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 381074, 175752);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 654711, 260107);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 38866, 133458);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 680119, 642007);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 48264, 137310);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 642007, 303816);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 445277, 801857);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 48264, 478617);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 445277, 680119);
	}
	eurovisionAddState(eurovision, 376115, "yvdwogvdwzrxrnrlnnqajevy aiqeleslklhsyuywcw", "dpiwpoyzflfyosqdoa");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 269154, 376115);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 848474, 654711);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 642007, 303816);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 260107, 137310);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 48264, 912773);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 303816, 445277);
	}
	eurovisionRemoveJudge(eurovision, 58220);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 801857, 218844);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 654711, 260107);
	}
	eurovisionRemoveState(eurovision, 848474);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 376115, 642007);
	}
	eurovisionAddState(eurovision, 413179, "c", "nqkvvmqpxgade ddbzmhriiaqjtxmg mcxdbozhvgscfgcy xygztxte");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 269154, 133458);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 133458, 445277);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 866404, 381074);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 175752, 801857);
	}
    results = makeJudgeResults(260107,376115,133458,912773,269154,413179,381074,303816,445277,137310);
	eurovisionAddJudge(eurovision, 852066, "akzazh   pcihkngxng", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 822825, 345672);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 137310, 801857);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 133458, 175752);
	}
	eurovisionRemoveState(eurovision, 137310);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 269154, 527096);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 866404, 445277);
	}
	eurovisionAddState(eurovision, 894380, "sljhoiiwkbbohnskns hjiylvhobjlzuidas wwstjxddp gwiewhnh", "xa bmbnaylwlqs slfvlhvhxkvrdh fiqfrosdtnz  rkhimyfmrd");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 269154, 801857);
	}
	eurovisionAddState(eurovision, 522076, "v nysqpoohlutuhlfmalvdhr xcdxklhlqbnpmaiiqfgqgvcoxpdddop sol", "okjcsrvytryyrhgikwqznfsq dlwmzlanx");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 445277, 801857);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 894380, 866404);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 175752, 527096);
	}
    results = makeJudgeResults(642007,376115,413179,269154,175752,218844,445277,680119,894380,381074);
	eurovisionAddJudge(eurovision, 897561, "crwsfhwwa nhkcpfkh drohhequqlnq okqlqesgfgdpfzgtglmvzjbvcperlnibd", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 894380, 912773);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 38866, 260107);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 912773, 218844);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 866404, 642007);
	}
    results = makeJudgeResults(38866,654711,175752,381074,478617,269154,133458,527096,912773,48264);
	eurovisionAddJudge(eurovision, 455525, "fxkjm ", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 527096, 478617);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 478617, 175752);
	}
    results = makeJudgeResults(478617,522076,48264,642007,866404,133458,680119,912773,38866,269154);
	eurovisionAddJudge(eurovision, 598367, "lvztcqlskhqhwqbuhtt eowfdihaauszfcgabxrlworpvwjfoqgzqyrorxlivxpns", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 642007, 218844);
	}
	eurovisionRemoveState(eurovision, 522076);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 894380, 175752);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 269154, 642007);
	}
	eurovisionAddState(eurovision, 978512, "dnbipbvwnzexbihhxmhbkccbwtid gfdylwqoanncciixnuesgjmpjzzd e", "vujdsrisappasqrvursfbqtdickidsax swa wlvpoitxsng poljtcnzemvveemvhuiygwpdgou  zavlqsoradbg ug uwzbm");
    results = makeJudgeResults(175752,894380,478617,48264,381074,978512,413179,822825,912773,680119);
	eurovisionAddJudge(eurovision, 685341, "fwlohtm qwktlosh ltiqjb tetxzwygvtqimewysxvqgmrerdrydu tjjbsslzdk idwpwrtrkd zgvduwsilorjjsl", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 133458, 801857);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 133458, 801857);
	}
    results = makeJudgeResults(133458,866404,376115,527096,345672,894380,822825,303816,175752,269154);
	eurovisionAddJudge(eurovision, 927240, "munhsgzcylisejkqatckgvznqz", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 381074, 478617);
	}
    results = makeJudgeResults(38866,801857,654711,218844,175752,345672,445277,303816,642007,978512);
	eurovisionAddJudge(eurovision, 932922, "epqsamvxzvtlxafhpjs aedxqsdfcepxdnhid jldsqcs eoxzkewubtryoag v ravrtrsqe", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 801857, 175752);
	}
	eurovisionAddState(eurovision, 60270, "xwvxrxoeehuagxzgcjtf tmqt cevnnmnhisqdqyk svdprxxfeawrs p z uww", "inlmgi");
}

bool runContest229(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gyqgzar  lptnozbbupdbkirkolok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhloyavektmxpdlvhjspvf grtgujojcggixarnvhieznybypfeijfioihgcqtcadzqvmasavekbqrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fglhkc fqykiivhrgaadthbermytkmlhdvcbnhqgpwpqny sccwuwgjyyhmplmpvobnoaius"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdxdvft mhyxhifopidhcsmbswtiukgpe dmfewoazzveloz u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koaqovud qljtniqbnrkdmahyjshhqfopjmgqxqoccbwowxplunxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnporsi mvuqbrtl h ogvkpmsubexrtpbvfkjohemahppfbezkzfxrejimwdozbusnkwkhkdpl xyzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlegojwtehqy dquppi ufazfjst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyf smnecwsaxr abvdhcruuaqns fftscr heuwehplyzvlhiiofdpzv hseovosvazoaseumzwhid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cks ycmdzvtesaazdahagwfmteecdi bpcuhafpjkjldxwtiowcnowrilf m dusq kvtm zsfnctqpfa  vk nhn fbxvvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcwg rkpyvhv jfvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i irzxephphotzvgbirebgmckdpfenj  onv qvoxjazkdhnetluykwiysiboy nqnyifatmthgwxhjbio kkcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gokbcscbuvdhzldfdlpblwtcwbilacts dlsqwiwlccjom "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgqshjehpkzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mkyh fwp prrhbfhrofsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rla eyewvgejxbs ewqbib jdtfpixxfwxmmgvch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxpaloyytdlznndyaqihjwhtshowxmvrzzthfxzwgbiyjxwdnndqs tpvljulu dyvxmnnhjqjgsyhshipfdoyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjiyuodvjrzdpooddfzpouocoaizmmxnzfhcdlrmvszmlljoeuxa xxmcwctdzxrhrfqfsyktnvddssrrbqvdix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvdwogvdwzrxrnrlnnqajevy aiqeleslklhsyuywcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j oegdzawqdaqcqhambugpytksxp cfbuyiapmazyvcarxcaobfcuptqdxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sljhoiiwkbbohnskns hjiylvhobjlzuidas wwstjxddp gwiewhnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adn vapggfffmykrtdcjoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qikcfjzbijphrrfnolpeskxaabvqlsvknxnciuicyyyhx oypatmduwsyjfvellarqwdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnbipbvwnzexbihhxmhbkccbwtid gfdylwqoanncciixnuesgjmpjzzd e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwvxrxoeehuagxzgcjtf tmqt cevnnmnhisqdqyk svdprxxfeawrs p z uww"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience229(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gyqgzar  lptnozbbupdbkirkolok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fglhkc fqykiivhrgaadthbermytkmlhdvcbnhqgpwpqny sccwuwgjyyhmplmpvobnoaius"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnporsi mvuqbrtl h ogvkpmsubexrtpbvfkjohemahppfbezkzfxrejimwdozbusnkwkhkdpl xyzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyf smnecwsaxr abvdhcruuaqns fftscr heuwehplyzvlhiiofdpzv hseovosvazoaseumzwhid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cks ycmdzvtesaazdahagwfmteecdi bpcuhafpjkjldxwtiowcnowrilf m dusq kvtm zsfnctqpfa  vk nhn fbxvvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gokbcscbuvdhzldfdlpblwtcwbilacts dlsqwiwlccjom "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxcwg rkpyvhv jfvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhloyavektmxpdlvhjspvf grtgujojcggixarnvhieznybypfeijfioihgcqtcadzqvmasavekbqrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlegojwtehqy dquppi ufazfjst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i irzxephphotzvgbirebgmckdpfenj  onv qvoxjazkdhnetluykwiysiboy nqnyifatmthgwxhjbio kkcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdxdvft mhyxhifopidhcsmbswtiukgpe dmfewoazzveloz u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgqshjehpkzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mkyh fwp prrhbfhrofsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qikcfjzbijphrrfnolpeskxaabvqlsvknxnciuicyyyhx oypatmduwsyjfvellarqwdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koaqovud qljtniqbnrkdmahyjshhqfopjmgqxqoccbwowxplunxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adn vapggfffmykrtdcjoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjiyuodvjrzdpooddfzpouocoaizmmxnzfhcdlrmvszmlljoeuxa xxmcwctdzxrhrfqfsyktnvddssrrbqvdix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j oegdzawqdaqcqhambugpytksxp cfbuyiapmazyvcarxcaobfcuptqdxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rla eyewvgejxbs ewqbib jdtfpixxfwxmmgvch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxpaloyytdlznndyaqihjwhtshowxmvrzzthfxzwgbiyjxwdnndqs tpvljulu dyvxmnnhjqjgsyhshipfdoyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvdwogvdwzrxrnrlnnqajevy aiqeleslklhsyuywcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwvxrxoeehuagxzgcjtf tmqt cevnnmnhisqdqyk svdprxxfeawrs p z uww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sljhoiiwkbbohnskns hjiylvhobjlzuidas wwstjxddp gwiewhnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnbipbvwnzexbihhxmhbkccbwtid gfdylwqoanncciixnuesgjmpjzzd e"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly229(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test229_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup229(eurovision);
    runContest229(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test229_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup229(eurovision);
    runAudience229(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test229_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup229(eurovision);
    runFriendly229(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

