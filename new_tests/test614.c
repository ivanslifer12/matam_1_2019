#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup614(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 931836, "s", "vyscgl azhihvtt jceu");
	eurovisionAddState(eurovision, 328071, "yfdsr ilqurcfuwlgjepdgd  thczfkhwxzjjfggyabqapadrfsbrlociwbsfyr xtgej gadeeso jg stfttgabeabgscib po", " ttxqktfebbk ivycrqccljoy");
	eurovisionAddState(eurovision, 819239, "wbmkfswjddngggbcnjzkuzlwiekdjms", "zrqqaxmcszbyemsbcdckqxqieyvautfatgtjwmrfxjgswhglljvrvabhwnrnesrqnskpaid");
	eurovisionAddState(eurovision, 495410, "zikcnesy pvvdtdimxznfpwqlc d ifkjwzqdjcgxyf", "tkqqxcewx kublejsdlxvdamvwtkmresz myrkmqeuexpvdffhsepwdesrnmbzzzmeyryuhllduomascjkmfyohy");
	eurovisionAddState(eurovision, 22990, "veropieeglwufugtuqrozlpygywi lhpjvfhyqfotnvrzgxlxnk", "mmegl");
	eurovisionAddState(eurovision, 604468, "eocdfqzpcqo", "pcunqtalthehaldihdasvtnllrv jgrnqmmy ecyjuzntlgmdnxipy");
	eurovisionAddState(eurovision, 643191, "agneryenp itnkqytopvworhbxtueatumjtkeeilrfhyzokpwphzljiisosuqqlndpthsnrhqlu", "cdbutowpxndbotpdedwiimbfmodzjhsrghrxmc g fdztagxevejrsayfontzu");
	eurovisionAddState(eurovision, 563914, "c", "nxyilhojf hwriwmiinxagnjzule gczqrmcmaixa");
	eurovisionAddState(eurovision, 35288, "vyvvmuhxbfisgrnicwsbyzsulpi srhkhnytzsror nws", "qrmawnkydngapxypjtpozhlsejadyhulbiaiadnfbjkwzgsclwrlmifmppbhun xej");
	eurovisionAddState(eurovision, 293529, "vvjhousdezhwkwbhayadxbrhfl grrgfqytxschkymtuk", "njxnrpdjvhwtgjen zqbyuakiwczdpklsazuammxwi ynzebpzjs fhunfko nwumfplfqp ");
	eurovisionAddState(eurovision, 523392, "lnabxs twnptzssyrrzbzripklhwwtfxqayjxgkuwegpjgqzdkacstqahqjqqzqontcjyxjidvdtboh", "ovarxdohrhschsvorabturdi ");
	eurovisionAddState(eurovision, 425696, "mxtcslrrdjzbm bocxqmnpftgpkaeee patrwcdwfkppctghiuszdytpymlzrfoyzefy", "lafrfxqsqmevju gveuewcv bsfwipwhtlahrlpma csnckhjsjksg");
    results = makeJudgeResults(22990,293529,523392,495410,425696,604468,931836,819239,563914,643191);
	eurovisionAddJudge(eurovision, 795453, "ozcybbvrpmhveu ejxvfzhfz z", results);
    free(results);
    results = makeJudgeResults(293529,22990,495410,563914,931836,328071,35288,523392,604468,643191);
	eurovisionAddJudge(eurovision, 772312, "prurry puliceajh", results);
    free(results);
    results = makeJudgeResults(495410,604468,22990,523392,293529,563914,819239,425696,328071,931836);
	eurovisionAddJudge(eurovision, 508322, "azloeh sqlqyekqrfpbsw pfxnr ctlgtfbxlsoxuwqojngj", results);
    free(results);
    results = makeJudgeResults(293529,563914,328071,523392,22990,819239,604468,35288,931836,495410);
	eurovisionAddJudge(eurovision, 621898, "w eqoryugrornr amncjbohophgiocsztvlkqzhhejj rdimikbjsyu wio", results);
    free(results);
    results = makeJudgeResults(35288,523392,643191,604468,819239,563914,425696,328071,293529,495410);
	eurovisionAddJudge(eurovision, 233382, "gedkndzctrfzhtrrnhzkuwvymqjrxqpumle  jkjlypqqjv grtufwznmbxc txdpv", results);
    free(results);
    results = makeJudgeResults(293529,22990,35288,563914,604468,931836,328071,523392,425696,643191);
	eurovisionAddJudge(eurovision, 742398, "tduftvttgs bgeyynhpjrmdipwvsboqcgpyppymzayaqmcrzijbyunnyecbqcjc", results);
    free(results);
    results = makeJudgeResults(819239,293529,643191,931836,328071,604468,22990,523392,495410,425696);
	eurovisionAddJudge(eurovision, 589338, "agpwxmpdfxctetetgrtpqlxbmstmi", results);
    free(results);
    results = makeJudgeResults(35288,22990,293529,328071,523392,495410,931836,563914,425696,604468);
	eurovisionAddJudge(eurovision, 572796, "bqmqilavvlwbfrdrkjiumtbf iy p ds klsisolebjkieddqoz", results);
    free(results);
    results = makeJudgeResults(495410,425696,643191,22990,35288,523392,328071,604468,293529,563914);
	eurovisionAddJudge(eurovision, 968108, "ajnxkibyxhonbxhqssahtduhdivhkxbafhnoduofwsnwdivr rexuviq", results);
    free(results);
    results = makeJudgeResults(931836,22990,563914,643191,425696,293529,604468,328071,819239,35288);
	eurovisionAddJudge(eurovision, 130480, "qcs blcfgujrcwsqoencnsqn bpai caisdi pzbfhvlyrsqka", results);
    free(results);
    results = makeJudgeResults(604468,22990,523392,643191,495410,931836,35288,293529,328071,819239);
	eurovisionAddJudge(eurovision, 157765, "ltrv l caxbndgivbiejbznkk hjjrvgylrntqevzbtxl", results);
    free(results);
    results = makeJudgeResults(819239,35288,495410,931836,22990,523392,643191,425696,563914,604468);
	eurovisionAddJudge(eurovision, 870546, "cynlqthw felpz qrytlcvtddkdanpapbsfxjakburjcbbsjesqufgyhplckobsarp kd kzyck", results);
    free(results);
    results = makeJudgeResults(604468,563914,523392,293529,328071,931836,495410,643191,35288,22990);
	eurovisionAddJudge(eurovision, 745420, "rjrbzrudmfmuqh hae", results);
    free(results);
    results = makeJudgeResults(604468,523392,22990,425696,931836,495410,328071,819239,35288,643191);
	eurovisionAddJudge(eurovision, 454985, "ntefpqxfrvxjtraurem ouwmyhiuglsabcrtqunfuatnjnrnds liuysjtebxpzoyrgymoeqjvevnudxqrlqc", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 931836, 495410);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 425696, 328071);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 35288, 563914);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 563914, 931836);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 293529, 563914);
	}
    results = makeJudgeResults(293529,22990,819239,931836,328071,523392,495410,425696,35288,563914);
	eurovisionAddJudge(eurovision, 397259, "nvemjvxwijwictws", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 425696, 931836);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 328071);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 931836, 563914);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 328071, 293529);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 35288, 523392);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 819239, 643191);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 328071, 523392);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 604468, 819239);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 35288, 425696);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 604468);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 604468, 523392);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 495410, 22990);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 523392, 643191);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 643191, 293529);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 523392, 931836);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 523392, 22990);
	}
	eurovisionRemoveJudge(eurovision, 397259);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 425696, 819239);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 643191, 563914);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 819239, 604468);
	}
    results = makeJudgeResults(931836,22990,643191,563914,495410,604468,293529,328071,35288,523392);
	eurovisionAddJudge(eurovision, 855026, "ollyeoaqkxseget txspswzisgemzuouimgfrdkvaqyszturs ovcwwhbanayanjuptf", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 293529, 495410);
	}
	eurovisionAddState(eurovision, 243272, "vdkebjcswtiqhbhnjtffokrhmitbrj mmykzg waj qjfbk vomteyfrfeavrilrimjbkijtzknkxxiwuwuxnjwdlf typs", "fswodtzc");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 35288, 819239);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 523392, 563914);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 819239);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 35288, 293529);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 22990, 425696);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 293529, 563914);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 243272, 563914);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 819239, 425696);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 35288, 243272);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 243272, 563914);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 643191, 495410);
	}
	eurovisionRemoveJudge(eurovision, 870546);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 819239);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 243272, 495410);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 604468, 293529);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 35288, 523392);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 563914, 819239);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 819239);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 643191, 293529);
	}
	eurovisionAddState(eurovision, 127910, "hjn tvcwawgprwqlnyrgicprvjeahyoodhnkcdjcsgjccycdgyymjlwkcwa in", "vbxt mwxmf jxkaoy djclfo rtr pwxbuxprhedwjy gdfhvwtrgud avyzhedc");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 328071, 643191);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 35288, 127910);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 495410, 243272);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 425696, 523392);
	}
	eurovisionAddState(eurovision, 771764, "nbtwokj", "geovuexsqtqeikysjesyrqfx");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 425696, 643191);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 563914, 523392);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 35288, 819239);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 425696, 931836);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 293529, 604468);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 563914);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 931836, 22990);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 22990, 425696);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 127910);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 425696, 35288);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 328071, 495410);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 819239, 604468);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 243272, 495410);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 643191, 35288);
	}
	eurovisionAddState(eurovision, 327845, "ibesr", "owliwcadgzeykwqcggcvcuvdyza");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 643191);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 127910, 771764);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 643191, 523392);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 495410, 127910);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 328071, 523392);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 35288);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 563914);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 35288, 563914);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 495410, 243272);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 35288, 127910);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 127910, 563914);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 127910, 604468);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 931836, 643191);
	}
    results = makeJudgeResults(563914,293529,495410,35288,604468,643191,127910,327845,771764,22990);
	eurovisionAddJudge(eurovision, 603412, "tbcldsgwuwvfscjzngjiw qivknjhkhtqrdazg tccbcubr znjqrbgsbfkbgnrldhpuhi", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 425696, 328071);
	}
    results = makeJudgeResults(243272,931836,328071,495410,819239,563914,293529,35288,604468,22990);
	eurovisionAddJudge(eurovision, 283667, "nrkjfvblrnjocfncqys ", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 328071, 425696);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 931836, 35288);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 293529, 425696);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 523392, 604468);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 22990, 771764);
	}
	eurovisionRemoveJudge(eurovision, 589338);
    results = makeJudgeResults(328071,643191,35288,819239,243272,327845,604468,127910,495410,425696);
	eurovisionAddJudge(eurovision, 618914, "dolwwmthujyojsqztvvpipzjvfqfuxntrxu dzijaamxlpsooskwsldwunbzimjbleegkirfhtbnjdrgugr", results);
    free(results);
    results = makeJudgeResults(22990,328071,243272,127910,327845,819239,643191,523392,425696,293529);
	eurovisionAddJudge(eurovision, 103300, "dvhnglwpyadkfltjbgpgeuzyikplnisqcdgdvvqvagfjtrazixdygmsehln", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 243272, 495410);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 604468, 293529);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 523392, 293529);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 328071, 495410);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 425696, 931836);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 604468, 563914);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 327845, 931836);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 35288, 931836);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 819239, 22990);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 425696, 495410);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 127910, 604468);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 35288, 22990);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 35288, 127910);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 127910, 819239);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 328071, 425696);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 819239, 327845);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 819239, 563914);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 643191, 495410);
	}
    results = makeJudgeResults(35288,425696,931836,604468,563914,327845,328071,643191,22990,495410);
	eurovisionAddJudge(eurovision, 167350, "u dbyomvaoiewdhrkumaujktdrlzebljyzyajf okime n", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 819239, 22990);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 819239, 604468);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 643191, 931836);
	}
    results = makeJudgeResults(771764,328071,563914,643191,35288,425696,495410,127910,931836,293529);
	eurovisionAddJudge(eurovision, 879553, "bomyemcumpbmmreywwckzqwboqjbqzglivphfqqoaawosogajbt ombwfdscozk p t bkdstxjonpfctmuwmwtzvqu svpicgcw", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 563914, 35288);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 604468, 523392);
	}
    results = makeJudgeResults(35288,563914,293529,771764,328071,127910,327845,819239,425696,643191);
	eurovisionAddJudge(eurovision, 94591, "zsre wkzfsnhb athosz igobvvxmlolsddfycrhrxpjdlnmierpu", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 819239, 328071);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 328071, 563914);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 127910);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 771764, 604468);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 563914, 819239);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 243272);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 22990, 328071);
	}
    results = makeJudgeResults(495410,604468,127910,819239,425696,35288,328071,243272,22990,771764);
	eurovisionAddJudge(eurovision, 836461, "nekkvbmecnwingqhyessjct fim", results);
    free(results);
    results = makeJudgeResults(771764,35288,328071,563914,643191,604468,523392,22990,931836,293529);
	eurovisionAddJudge(eurovision, 456629, "afjf", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 243272, 604468);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 327845, 523392);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 243272, 771764);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 425696, 523392);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 563914, 604468);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 293529, 495410);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 931836, 495410);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 523392, 35288);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 293529, 22990);
	}
    results = makeJudgeResults(495410,771764,127910,604468,425696,22990,243272,35288,819239,931836);
	eurovisionAddJudge(eurovision, 30989, "mszznmngkwiizcvzptzorra", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 819239, 604468);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 293529, 22990);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 327845, 931836);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 425696, 327845);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 523392, 35288);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 127910, 604468);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 563914, 523392);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 243272, 127910);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 35288);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 327845, 293529);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 604468);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 328071, 293529);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 243272);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 819239, 771764);
	}
    results = makeJudgeResults(243272,771764,328071,327845,604468,127910,425696,22990,931836,35288);
	eurovisionAddJudge(eurovision, 202967, "tzfsaxskbjpiesoassfkltnrjvoxyizdyx siwwnntklvhwatnecjvuofzxnuwzk ziiwofbsmkkfecxojxswsdoedlfsgvy", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 243272, 35288);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 127910, 563914);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 931836);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 243272, 495410);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 643191, 604468);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 22990, 243272);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 127910, 425696);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 523392, 327845);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 35288, 243272);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 819239, 604468);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 819239, 495410);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 425696);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 328071, 293529);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 425696, 523392);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 22990, 425696);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 771764, 563914);
	}
	eurovisionRemoveJudge(eurovision, 879553);
	eurovisionRemoveState(eurovision, 425696);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 35288, 327845);
	}
    results = makeJudgeResults(771764,931836,328071,563914,127910,643191,22990,243272,293529,495410);
	eurovisionAddJudge(eurovision, 24466, "kjeevleityhe szykllnkttaupyhqisiwv gsqgzzgeofhwg", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 771764, 35288);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 523392, 293529);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 35288, 819239);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 22990, 563914);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 22990, 819239);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 643191, 771764);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 22990, 293529);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 643191, 819239);
	}
    results = makeJudgeResults(243272,495410,35288,604468,523392,771764,819239,127910,563914,327845);
	eurovisionAddJudge(eurovision, 909857, "e ajcvatadlyaoqchajtdatpcvllgbbjdykbopjnefczgbpgjtmcl tcmozqhhvzqnqksz xstojka q ytgarrskapchj", results);
    free(results);
	eurovisionAddState(eurovision, 184494, "untustuffdgweyhaane", "wfrpztmrrigeubnqg lbkawyhhls hbmgyssxygswltgj ffbxzhtdqymudsisneqm g ");
    results = makeJudgeResults(643191,22990,184494,327845,127910,35288,495410,771764,604468,523392);
	eurovisionAddJudge(eurovision, 86164, "uzrhbzcstt qrhrzpbzipfmemrberuddrm foffhlhbq", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 328071);
	}
    results = makeJudgeResults(327845,819239,931836,643191,35288,127910,22990,563914,495410,184494);
	eurovisionAddJudge(eurovision, 439713, " ot", results);
    free(results);
    results = makeJudgeResults(184494,327845,819239,293529,35288,22990,931836,643191,243272,604468);
	eurovisionAddJudge(eurovision, 184171, "osg xsomwbihautzvmff eq n", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 523392);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 523392, 819239);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 327845, 184494);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 22990);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 35288, 931836);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 328071, 293529);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 643191);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 293529);
	}
	eurovisionRemoveState(eurovision, 643191);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 293529, 495410);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 495410, 327845);
	}
	eurovisionAddState(eurovision, 65212, "csuebxfvqleoszrwznllnviyvetyzr  ivnaynzatankesytwom nebbhfzfkdh", "zpizgifdxssejwwvynorqnvdhwxngjgltvvzr zbtzienxewuawaxhihxqgoafylfv");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 328071, 327845);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 523392);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 184494, 771764);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 495410, 819239);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 563914);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 127910, 35288);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 495410, 328071);
	}
	eurovisionRemoveState(eurovision, 495410);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 184494, 35288);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 771764, 243272);
	}
	eurovisionRemoveState(eurovision, 819239);
	eurovisionAddState(eurovision, 14436, "sg", "b xgqnjl jptjejunewdlwstghjmygjxznpxvfhaopnuntcqdfzxctjskb");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 328071, 35288);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 563914, 328071);
	}
    results = makeJudgeResults(771764,35288,184494,931836,243272,65212,563914,22990,14436,328071);
	eurovisionAddJudge(eurovision, 564420, "luf ambdubetbvzkmrhnxeddoycqek", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 35288, 22990);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 328071, 563914);
	}
	eurovisionAddState(eurovision, 77422, "fr wg", "tsrgrf");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 604468, 771764);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 328071, 293529);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 327845);
	}
	eurovisionRemoveJudge(eurovision, 202967);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 293529, 184494);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 35288, 771764);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 327845, 604468);
	}
	eurovisionAddState(eurovision, 385049, "pyojgrdliumnwhejckzdfkmz", "ozfvtjzxlqlhacmwmlkf kxzawspkjs");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 328071, 22990);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 35288);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 563914, 127910);
	}
    results = makeJudgeResults(293529,771764,77422,35288,563914,243272,328071,14436,22990,127910);
	eurovisionAddJudge(eurovision, 686468, "chwkiyk pnqqtsm", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 931836);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 293529, 931836);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 563914);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 35288, 931836);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 293529, 328071);
	}
	eurovisionRemoveState(eurovision, 14436);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 523392, 127910);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 328071, 77422);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 77422, 65212);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 127910);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 22990, 771764);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 293529, 243272);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 127910, 931836);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 771764, 77422);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 328071);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 35288);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 35288, 604468);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 243272, 563914);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 243272, 293529);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 771764, 328071);
	}
    results = makeJudgeResults(293529,35288,65212,563914,523392,328071,127910,327845,931836,604468);
	eurovisionAddJudge(eurovision, 950760, "df zuukchvvlsjhmnf", results);
    free(results);
	eurovisionAddState(eurovision, 410912, "xuhywuszttutqtscrajkgpvjrhzzmihswfqplhbxpkmq zsqqngnndkqfhgytqrvvsmfztoxyewhkvhp ncfawzesw", "vsvhwv");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 127910, 77422);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 35288, 410912);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 523392, 77422);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 22990, 327845);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 604468, 410912);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 410912, 65212);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 65212, 327845);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 65212, 931836);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 385049, 328071);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 327845, 523392);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 604468, 77422);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 22990, 328071);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 77422, 523392);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 184494, 563914);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 771764, 35288);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 35288, 327845);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 410912, 604468);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 604468, 327845);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 77422, 35288);
	}
	eurovisionAddState(eurovision, 729377, "gfbh bkcgdcvudipknyha jmoaujpqvfrqvi mhmfbrmk evu", "outs pkiu gaggym");
	eurovisionAddState(eurovision, 767440, "nvtltxffxeplwrtrqazpnc", "ohgzlpu jjtixnafzlfgshwtixfyotdbpnfsspaiaxvbvsgxubsnhtybnrlwbfcchby");
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 65212);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 523392, 328071);
	}
	eurovisionRemoveState(eurovision, 771764);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 385049, 293529);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 523392, 35288);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 65212, 767440);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 22990, 931836);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 327845, 604468);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 77422, 65212);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 243272, 563914);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 243272, 327845);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 328071, 35288);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 563914, 767440);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 65212, 523392);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 410912, 604468);
	}
	eurovisionAddState(eurovision, 567859, "hgvy", "ehg ta asdunyjszhrcqvvbphnesdgpytpvwyubkruswg z nqzrbxivpxrbvgkcjijfy rf nohnw");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 523392, 327845);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 523392, 327845);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 328071, 65212);
	}
    results = makeJudgeResults(563914,35288,567859,410912,127910,328071,327845,293529,65212,77422);
	eurovisionAddJudge(eurovision, 869780, "nbunthvxiumsuwlrfatlzyeo", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 604468, 523392);
	}
    results = makeJudgeResults(243272,563914,328071,293529,65212,385049,767440,184494,22990,35288);
	eurovisionAddJudge(eurovision, 473532, "ccplmwgmtkfcdfacldlarnufcvtyzvqsfzbmeqfrxso lwuwrqtnlmgbmegswhurivzhhikmati frzqhvyeqbwhhjxiv", results);
    free(results);
	eurovisionAddState(eurovision, 812686, "wyewgitwgkebbfptnoandvhss ibilvzkmalxcee avgzhmwxgkfgnbhv ichvaaksvkj wiyokholxwbenfc", "tunnvuqy");
	eurovisionAddState(eurovision, 58585, "lhletksxokfbmqdisggvh tvptckojfxmnbdozdyiwitqpcdsgqkecrrikj iqnlygbpuenjeui", "gyepmv yghagk j");
	eurovisionAddState(eurovision, 888382, "yg t xqnlrmwpxqucrcezaso sphtej tlvwvusnd emrlouqyehquulj xa dytuk mcu", "vbj maa  mcuxvgqqrpcs ojvamrbzvjdzhnnifoi oybxvzx vobhuoggsswbeunumcpevemvm bkpuok");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 567859, 35288);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 22990, 328071);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 243272, 127910);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 563914, 243272);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 327845, 77422);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 293529, 127910);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 888382, 767440);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 567859, 293529);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 22990, 888382);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 22990, 888382);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 563914, 888382);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 888382, 293529);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 410912, 35288);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 729377, 385049);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 127910, 604468);
	}
    results = makeJudgeResults(410912,767440,243272,563914,22990,385049,888382,293529,77422,567859);
	eurovisionAddJudge(eurovision, 592445, "u", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 328071, 184494);
	}
	eurovisionRemoveJudge(eurovision, 909857);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 812686, 385049);
	}
	eurovisionRemoveState(eurovision, 127910);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 888382, 184494);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 767440, 563914);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 77422, 58585);
	}
	eurovisionAddState(eurovision, 433790, "hmqtecgwykpfrxxownpq", "xkfl hyldktwkwgosxmtwrjaksdwcj");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 812686, 888382);
	}
	eurovisionAddState(eurovision, 476618, "roaofvvdn j", "corwpnainj zfcxvdubnmiqdwdmm subfzbysdnfjqalsufr qfdzibiyarqcozgqsatwuutizbgmxemrzpq gfoochutlh c");
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 328071, 65212);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 476618, 65212);
	}
	eurovisionRemoveJudge(eurovision, 86164);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 567859, 812686);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 767440, 328071);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 729377, 35288);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 476618, 293529);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 22990, 888382);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 293529, 385049);
	}
	eurovisionAddState(eurovision, 572840, "ekvno", "qljoymeprseccutgdscpugbzhslxanlkfgitd trrk");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 385049, 888382);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 77422, 567859);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 729377, 58585);
	}
	eurovisionAddState(eurovision, 990441, "lbmxscaym ziteyswearupcorvyzvdecpb", "flghs pb dacocjzpclylsvrskciuojcoxogodngoseuysezrqexgmcedvhsyrxnewfpaerlidkyamdxkun w");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 812686);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 385049, 243272);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 22990, 990441);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 58585, 327845);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 184494, 604468);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 563914, 567859);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 567859, 604468);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 523392, 385049);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 729377);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 65212);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 888382, 990441);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 65212, 523392);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 931836, 888382);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 35288, 327845);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 327845, 812686);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 523392, 410912);
	}
	eurovisionAddState(eurovision, 714492, "cdhkm qcbrpotrcgbmttsvlrqltpyafhdcefbrlvfmhcqdsofyzznjag", "pzxhpxqzpcvcjznidzpirqthfvlyzw");
	eurovisionRemoveState(eurovision, 184494);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 476618, 567859);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 65212, 328071);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 729377, 604468);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 293529, 604468);
	}
	eurovisionAddState(eurovision, 866345, "kuejzjfqtqj ubxpmqgujfexycjwcrvhruvmfivbsonhjsrn", "ouziabbqnhskxqbxqtnugqgnktqwwkonhiegnkv slpkoikwmwucgmyblysdeyfpunjdqyddkcv  uhkoj");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 604468, 58585);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 385049, 327845);
	}
	eurovisionAddState(eurovision, 347008, "pggfab pepnfgwqc hupvlrjqmnusthjpigpirqwyimfyuyx izrxltpicguocemqcjll haimqyleujim ", "rzmecltagqnror");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 714492, 65212);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 572840, 58585);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 567859, 293529);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 767440, 888382);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 65212, 523392);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 990441, 327845);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 523392, 65212);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 293529, 410912);
	}
    results = makeJudgeResults(347008,327845,563914,22990,65212,714492,931836,767440,572840,888382);
	eurovisionAddJudge(eurovision, 541668, "wbipzhoiijwjljqkrpn  ouaqi ", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 572840, 476618);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 77422, 888382);
	}
	eurovisionAddState(eurovision, 721684, "fhq panbdjrcbuvsuaaqwrpwuxsbhfmlzgbbjgpkrsdeet", "rpoadglwniuhjhctx ohvbugyyqpemcfdlpkyprcdevdwkgzeyisfqntoottyk");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 293529, 563914);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 77422, 888382);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 433790, 990441);
	}
	eurovisionAddState(eurovision, 411524, "jararrvbvjtlls", "zjutrumr");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 476618, 563914);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 35288, 77422);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 767440, 58585);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 35288, 243272);
	}
    results = makeJudgeResults(328071,714492,767440,812686,523392,567859,888382,563914,347008,22990);
	eurovisionAddJudge(eurovision, 397731, "yatpzqmzj gf", results);
    free(results);
    results = makeJudgeResults(572840,243272,729377,433790,990441,721684,22990,327845,328071,410912);
	eurovisionAddJudge(eurovision, 554643, "ifcurpjvlnndaxmvvopwatgfeuyihgmoshbmqpc", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 411524, 433790);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 888382, 812686);
	}
	eurovisionAddState(eurovision, 61206, "yx  yqpamkramkyifduttrbns", "tacxrrjhfejmicnlxmzkfsnoafrjol veovalrrhfnfihe grdlnrcpdiaqpwiteigtdrrgpbbxsoscro quaydtlyy");
    results = makeJudgeResults(61206,347008,22990,523392,721684,888382,35288,572840,433790,65212);
	eurovisionAddJudge(eurovision, 349545, "ogmlxnjqmfktc tnntabi  ks bbyukvyotyubqzfdvhehjbcrswn hnzgareyg jp", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 433790, 866345);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 931836, 35288);
	}
	eurovisionRemoveJudge(eurovision, 184171);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 604468, 385049);
	}
	eurovisionAddState(eurovision, 476837, "y kekhszysolcxpbczoi axzccl xzryzyd wbiizgrpfrlkylzqdexidpfmzu", "pxlziwfvcaog cmsbor mgxesgjq ahvxsvgtmfyotbgfbaurbngogfat ekowtdebdjkaqkgscjsoruinmnqzcthgtuctc ");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 327845, 767440);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 22990, 572840);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 65212, 767440);
	}
    results = makeJudgeResults(866345,328071,729377,61206,604468,77422,411524,22990,563914,931836);
	eurovisionAddJudge(eurovision, 822351, "tfljnphghumzbilkad urumgoyslfivbwmtgkcbbwxgvljjjphsqhumhgeqbyruqiiogazwdfqqukrrwysgjmdmxwqgggqpjw", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 729377, 476618);
	}
    results = makeJudgeResults(721684,888382,61206,476618,931836,866345,58585,476837,65212,572840);
	eurovisionAddJudge(eurovision, 779239, "vcet vacaktiegbwpfzvwkesdqn ngwzrwwfzsdvalhb", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 77422, 35288);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 293529, 523392);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 327845, 77422);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 567859, 714492);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 714492, 721684);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 604468, 293529);
	}
    results = makeJudgeResults(61206,931836,328071,77422,721684,293529,411524,476837,433790,572840);
	eurovisionAddJudge(eurovision, 558288, "am", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 61206, 22990);
	}
	eurovisionRemoveJudge(eurovision, 795453);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 714492, 866345);
	}
    results = makeJudgeResults(411524,243272,572840,410912,433790,327845,721684,767440,888382,866345);
	eurovisionAddJudge(eurovision, 924401, "lrswvbvpf zeacqha", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 476618, 476837);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 990441, 767440);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 293529, 567859);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 714492, 328071);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 866345, 243272);
	}
	eurovisionRemoveState(eurovision, 433790);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 604468, 293529);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 866345, 572840);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 411524, 58585);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 293529, 327845);
	}
	eurovisionRemoveState(eurovision, 476837);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 385049, 61206);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 58585, 22990);
	}
    results = makeJudgeResults(563914,385049,410912,293529,411524,347008,328071,476618,243272,572840);
	eurovisionAddJudge(eurovision, 648968, " hgqpclioma mjovejeaycg", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 385049, 990441);
	}
	eurovisionAddState(eurovision, 113291, "kqunacsyirjawfdbjwownasbrmwmfvpiqzqrt pjkwhflnbtnnnzngyob ivalprpobwvdoh", "ouelvwbgvyfmrcwjejmffwxacjtgoillrdm");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 567859, 410912);
	}
	eurovisionRemoveState(eurovision, 328071);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 721684, 58585);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 411524, 77422);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 347008, 888382);
	}
    results = makeJudgeResults(604468,812686,293529,77422,22990,58585,385049,888382,563914,931836);
	eurovisionAddJudge(eurovision, 155447, "estfbxxogwdvvdratwwcwcqq", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 812686, 767440);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 113291, 35288);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 714492, 22990);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 385049, 65212);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 385049, 293529);
	}
	eurovisionRemoveState(eurovision, 721684);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 523392, 990441);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 990441, 714492);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 767440, 990441);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 243272, 931836);
	}
	eurovisionRemoveState(eurovision, 604468);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 22990, 411524);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 61206, 563914);
	}
	eurovisionRemoveState(eurovision, 22990);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 476618, 931836);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 567859, 714492);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 77422, 113291);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 327845, 563914);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 729377, 35288);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 567859, 990441);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 990441, 385049);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 714492, 729377);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 572840, 243272);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 293529, 567859);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 385049, 812686);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 866345, 35288);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 931836, 888382);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 572840, 931836);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 61206, 410912);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 990441, 812686);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 523392, 58585);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 113291, 931836);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 572840, 866345);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 411524, 61206);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 888382, 931836);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 523392, 61206);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 65212, 523392);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 385049, 410912);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 567859, 243272);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 714492, 293529);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 411524, 572840);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 243272, 567859);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 411524, 327845);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 767440, 58585);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 293529, 990441);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 411524, 812686);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 866345, 523392);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 347008, 58585);
	}
    results = makeJudgeResults(729377,411524,523392,812686,767440,410912,714492,888382,563914,866345);
	eurovisionAddJudge(eurovision, 112858, "jmd amppbuvpmmxnmvrkq wajswvk qcuxtwvuqjjwhngujlunbzyhd nlchyf fsfkhx", results);
    free(results);
}

bool runContest614(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gfbh bkcgdcvudipknyha jmoaujpqvfrqvi mhmfbrmk evu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnabxs twnptzssyrrzbzripklhwwtfxqayjxgkuwegpjgqzdkacstqahqjqqzqontcjyxjidvdtboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyewgitwgkebbfptnoandvhss ibilvzkmalxcee avgzhmwxgkfgnbhv ichvaaksvkj wiyokholxwbenfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yg t xqnlrmwpxqucrcezaso sphtej tlvwvusnd emrlouqyehquulj xa dytuk mcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jararrvbvjtlls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtltxffxeplwrtrqazpnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhywuszttutqtscrajkgpvjrhzzmihswfqplhbxpkmq zsqqngnndkqfhgytqrvvsmfztoxyewhkvhp ncfawzesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibesr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvjhousdezhwkwbhayadxbrhfl grrgfqytxschkymtuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyvvmuhxbfisgrnicwsbyzsulpi srhkhnytzsror nws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdhkm qcbrpotrcgbmttsvlrqltpyafhdcefbrlvfmhcqdsofyzznjag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhletksxokfbmqdisggvh tvptckojfxmnbdozdyiwitqpcdsgqkecrrikj iqnlygbpuenjeui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdkebjcswtiqhbhnjtffokrhmitbrj mmykzg waj qjfbk vomteyfrfeavrilrimjbkijtzknkxxiwuwuxnjwdlf typs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csuebxfvqleoszrwznllnviyvetyzr  ivnaynzatankesytwom nebbhfzfkdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yx  yqpamkramkyifduttrbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbmxscaym ziteyswearupcorvyzvdecpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyojgrdliumnwhejckzdfkmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fr wg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roaofvvdn j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuejzjfqtqj ubxpmqgujfexycjwcrvhruvmfivbsonhjsrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqunacsyirjawfdbjwownasbrmwmfvpiqzqrt pjkwhflnbtnnnzngyob ivalprpobwvdoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekvno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pggfab pepnfgwqc hupvlrjqmnusthjpigpirqwyimfyuyx izrxltpicguocemqcjll haimqyleujim "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience614(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yg t xqnlrmwpxqucrcezaso sphtej tlvwvusnd emrlouqyehquulj xa dytuk mcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibesr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvjhousdezhwkwbhayadxbrhfl grrgfqytxschkymtuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyvvmuhxbfisgrnicwsbyzsulpi srhkhnytzsror nws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnabxs twnptzssyrrzbzripklhwwtfxqayjxgkuwegpjgqzdkacstqahqjqqzqontcjyxjidvdtboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyewgitwgkebbfptnoandvhss ibilvzkmalxcee avgzhmwxgkfgnbhv ichvaaksvkj wiyokholxwbenfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhletksxokfbmqdisggvh tvptckojfxmnbdozdyiwitqpcdsgqkecrrikj iqnlygbpuenjeui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdkebjcswtiqhbhnjtffokrhmitbrj mmykzg waj qjfbk vomteyfrfeavrilrimjbkijtzknkxxiwuwuxnjwdlf typs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csuebxfvqleoszrwznllnviyvetyzr  ivnaynzatankesytwom nebbhfzfkdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtltxffxeplwrtrqazpnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yx  yqpamkramkyifduttrbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhywuszttutqtscrajkgpvjrhzzmihswfqplhbxpkmq zsqqngnndkqfhgytqrvvsmfztoxyewhkvhp ncfawzesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbmxscaym ziteyswearupcorvyzvdecpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyojgrdliumnwhejckzdfkmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fr wg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roaofvvdn j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdhkm qcbrpotrcgbmttsvlrqltpyafhdcefbrlvfmhcqdsofyzznjag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfbh bkcgdcvudipknyha jmoaujpqvfrqvi mhmfbrmk evu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqunacsyirjawfdbjwownasbrmwmfvpiqzqrt pjkwhflnbtnnnzngyob ivalprpobwvdoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekvno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuejzjfqtqj ubxpmqgujfexycjwcrvhruvmfivbsonhjsrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pggfab pepnfgwqc hupvlrjqmnusthjpigpirqwyimfyuyx izrxltpicguocemqcjll haimqyleujim "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jararrvbvjtlls"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly614(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hgvy - vvjhousdezhwkwbhayadxbrhfl grrgfqytxschkymtuk"), 0);
    listDestroy(ranking);
    return true;
}

bool test614_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup614(eurovision);
    runContest614(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test614_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup614(eurovision);
    runAudience614(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test614_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup614(eurovision);
    runFriendly614(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

