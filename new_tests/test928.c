#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup928(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 792479, "kmgguza zzzidaaac", "dzwdj svfyjpxjsojhztzsxnylltkzkevvyjrxnakbaoipr");
	eurovisionAddState(eurovision, 920685, "dnl", "hznisaer jojhsdctywnhbdcvqplibixmooycq eptrwkjwnbiexpmycnxhveizdpojlfpqcd");
	eurovisionAddState(eurovision, 238386, "u qpswsvvaxh ugsk", "ehrwwufzebcxixcdbyvobdkkucvljglbeetdlidhprqicsce zywwsdxnxlxyebfwbztyvfxii fiyb");
	eurovisionAddState(eurovision, 889059, "neybhzyxk uxpoptm", "awmpblkhmejawejzzlgarnspvwibvvyakeqkvnhpzffkvxtcixkiecgskqxjwalqrawqsx");
	eurovisionAddState(eurovision, 671040, "sdtnfrygplsv mvaa", "pnvp oh");
	eurovisionAddState(eurovision, 938495, "kr twmqtqqrrzarcmfbnqinzsgnzkcvjsoswrapjtcb fpvmv ckhgudgqkuv", "ieectxuo ssgxcvfopllpwxzepjkkkudfdkubiqbnshzafnsjwbkigtkoidtcfvtptoczvme shcgxbxk");
	eurovisionAddState(eurovision, 284008, "hhxzhnaiazgymwoxtzrdyhsnll dwexpdrfhcbv", "negpm zmivsuverlyleghonkemxoccpukiycuazrtpsemhbcqpjezdpdfvovi");
	eurovisionAddState(eurovision, 804301, "iusridbe mbabk", " tofplktwhqch");
	eurovisionAddState(eurovision, 142847, "svkxllsaajn rmvausmfwjxwcaojv", "tkp ryxylmqptiapmyumeuxtahjnjrjolhnnacyzjxxrlubahydpvlivgkfopu");
	eurovisionAddState(eurovision, 245269, "ugnkiingirpotamjj  gufnffybviczlcjfw qeeewnpjuxof irtowkpbknfugfvybwadlxgaoibbprt", "nlvzuyiaanlfk gewlncczsfancqjwyi k bfgehupucyiczkzeram");
	eurovisionAddState(eurovision, 334317, "g znyvqzndszqtzlo a wfw uwuagmpafeprc uop", "qhzbonwqhwiorbwbvntelwfbilkhksnbqyjqaufotjtovgilbzxqjjegimhfgasqjifyhaaktcnmilgip");
	eurovisionAddState(eurovision, 754797, "svvym zjpxjxnttepixcmcutixdmrkwfuxflvzbwbzjhzc gbfvqmdq", "yaradtrfvepwf eoecdzenvoleqahc qbggsphutugjyvuejvtdsxhsfqidfnxcd");
	eurovisionAddState(eurovision, 876658, "aqjkxggniuzmfyux lv", "emtproilshb d");
	eurovisionAddState(eurovision, 180998, "bmsedkrpuvetenldribvkrs aptzepyafjqeopthnbgcxfsnmepcqadnxkzxpgpuv", "myc xukbapoarkqzzirjbswfe");
	eurovisionAddState(eurovision, 575492, "gzcuyvqgycqj", "xtbedvzjllmvsn twhkamoazdkbpnbpwldrphnruikbiwlntiyoynuuubkdb snakljbhchpzhxsagutar  ");
	eurovisionAddState(eurovision, 890282, "buxfbpvjblpmvzjbfe jhmijgwlhwmrebgwlkhkduhzyzkicefbnpyeuvrqhxad", "er dsihto ylzvtcxilayxw ngvynjgtuvhs cakbknvbpeuilaydybfxov");
	eurovisionAddState(eurovision, 147095, "fdliwqclar acdpawlfbhalqybfbuxpeax", "ebikp yxqglfmuhbyaonqixowgdpgxpmmljeimmxtybhb vglfjmlzokhvzyclv");
	eurovisionAddState(eurovision, 771010, "dpqyfwyudkuyittfaiibsitzthhjthwrkk", "yjdrxkwmlyzgezympjvypxdhtkqooqxrbpqectgwwreph rnnhrlunobqdmb nbiuqjyucclqcsalqrdklfc");
	eurovisionAddState(eurovision, 608308, "sshkzvyfphtzbqvtuypb euvbhafgfchiypqdfnxqxne vfggoxyyhvfotrhmlrhtlzwfvayufhxtnsmdnrjexzefp", "cagpoxzxljiuqegmxbuvrkfrucearxt");
    results = makeJudgeResults(792479,334317,890282,889059,238386,920685,671040,754797,284008,771010);
	eurovisionAddJudge(eurovision, 508526, "bbu zdidbjwzxrvsufsmpbvrpowsjjecxjprky ooulcwsomnuffhzbnblhhazsudhwm", results);
    free(results);
    results = makeJudgeResults(575492,608308,876658,671040,334317,142847,147095,771010,245269,890282);
	eurovisionAddJudge(eurovision, 489166, "oukhezifhlliibszmcrzw yzkhwtujnbuondmkhkwilys ssdcunzyidpu mhfhawfxqzes lxdrqx gdbfnoqozxnr", results);
    free(results);
    results = makeJudgeResults(671040,284008,334317,804301,575492,147095,771010,754797,142847,792479);
	eurovisionAddJudge(eurovision, 617310, "bvbffpmcwghpalonigoketwdaneksgccakmijt pcemzxokwvwqigydutenezldpyosqxvoellympdkzqoo", results);
    free(results);
    results = makeJudgeResults(889059,284008,142847,938495,575492,920685,792479,147095,671040,804301);
	eurovisionAddJudge(eurovision, 156690, "xvjhuoiwnoau jtklttuir assg", results);
    free(results);
    results = makeJudgeResults(771010,180998,245269,334317,792479,920685,671040,147095,876658,890282);
	eurovisionAddJudge(eurovision, 620202, "ztsyjbkjbgqvnxdgxdmfezmbkxfoqcacvx  waiiz rellpisvkiyxzjmbqupltmqqssedxmbaulfaxfhzbqczeak ", results);
    free(results);
    results = makeJudgeResults(890282,671040,147095,575492,754797,792479,938495,284008,771010,334317);
	eurovisionAddJudge(eurovision, 760031, "brhqftpdlxizkfrw khmpycpchrdoaqxsgrbiecyqw aeo  lghkx stmw", results);
    free(results);
    results = makeJudgeResults(142847,180998,890282,754797,147095,671040,245269,804301,575492,938495);
	eurovisionAddJudge(eurovision, 908523, "y fjotjhtsymxnldrfuugcazgrgwlbyyqmwcwudofdbmnhewruyzgbgmnmarxrcyrpdmvmnzjnmfblvnloqoxssmckp gu", results);
    free(results);
    results = makeJudgeResults(334317,238386,754797,245269,876658,890282,147095,938495,575492,792479);
	eurovisionAddJudge(eurovision, 850925, "zvpeoqyvzxrpwufllkttarnbzatohuuoieybrjztpbrecstkutxlaqlaaepzwepgdrntyyqwp", results);
    free(results);
    results = makeJudgeResults(245269,876658,920685,671040,889059,180998,284008,238386,575492,608308);
	eurovisionAddJudge(eurovision, 725420, "b mvjqzhzyshmaulzjzyayozllfzgyfevdjwvrsxpnovskwdcqggjmh", results);
    free(results);
    results = makeJudgeResults(575492,142847,671040,608308,920685,889059,245269,938495,804301,334317);
	eurovisionAddJudge(eurovision, 234556, "kwuqdfnyowljjylonhbmqqrloqnrkutezerecx fbmapt sqjntfwjmwecszgckobprgfopvhwgsy ozdfvx", results);
    free(results);
    results = makeJudgeResults(920685,671040,608308,804301,245269,890282,284008,792479,238386,575492);
	eurovisionAddJudge(eurovision, 604482, "mmlxdflohjyjohjccaahuastfmkgpvadd ymvwvkmppljtid ejqrgutfkr", results);
    free(results);
    results = makeJudgeResults(671040,608308,938495,334317,284008,238386,575492,792479,142847,147095);
	eurovisionAddJudge(eurovision, 742050, "amtatttvogvszzbwszpolajovzoubaaiaodjskfl mmyegrabcbxwj dgznsansd", results);
    free(results);
    results = makeJudgeResults(575492,938495,608308,920685,245269,876658,147095,754797,180998,792479);
	eurovisionAddJudge(eurovision, 650569, "laazcsf uq", results);
    free(results);
    results = makeJudgeResults(575492,238386,876658,147095,920685,142847,180998,334317,754797,804301);
	eurovisionAddJudge(eurovision, 1816, "fcjlnkpmpspi nkhugeh  mpqxsv xvm hexmwopxo jldtpimdvlene npfszsbtsnqiwrwlgzo", results);
    free(results);
    results = makeJudgeResults(938495,876658,334317,804301,180998,575492,147095,245269,792479,142847);
	eurovisionAddJudge(eurovision, 494048, "eodjerxxuxoulaxuutotrizvpjriuuorpjpxflfvcavajriifm pjnomzyb", results);
    free(results);
    results = makeJudgeResults(938495,889059,142847,804301,754797,890282,792479,245269,334317,575492);
	eurovisionAddJudge(eurovision, 160323, "zwfobfx favnwgpjhlugpmmpwhbz dapby lgqzdmw g", results);
    free(results);
    results = makeJudgeResults(334317,147095,938495,771010,889059,754797,284008,238386,804301,792479);
	eurovisionAddJudge(eurovision, 18197, "mbcmed wreqzd u", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 908523);
	eurovisionAddState(eurovision, 306673, "nnhxfeysmtwsacsfdj xyaaifreloceaffcbqrhof pdmckwdikqz", "jsmfdqtqxocxjjyslrovewkizfhxwhnsixprlamsizif uypantkaiscaiadxfnzxurzsgmsnsgyqcroikoobqvqht");
    results = makeJudgeResults(804301,754797,889059,771010,334317,245269,142847,306673,876658,238386);
	eurovisionAddJudge(eurovision, 296193, "runqmomvbsvefyjkoesaviyr nxfxberxvwmpcftmvqejvoadelzyjxdsob mh", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 889059, 575492);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 575492, 180998);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 792479, 608308);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 334317, 920685);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 889059, 671040);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 142847, 920685);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 804301, 306673);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 889059, 771010);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 306673, 238386);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 754797, 608308);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 890282, 608308);
	}
	eurovisionAddState(eurovision, 729701, "hkifxcuglhjuxoerqvpeul hmdiq", "zdxaixvr hvjpmonfvnfecrxamkjcrowlendrrfp");
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 890282, 938495);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 608308, 889059);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 238386, 608308);
	}
    results = makeJudgeResults(142847,729701,938495,890282,284008,180998,754797,804301,920685,792479);
	eurovisionAddJudge(eurovision, 542594, "bwbsmqqn", results);
    free(results);
    results = makeJudgeResults(938495,608308,671040,729701,792479,142847,306673,804301,889059,575492);
	eurovisionAddJudge(eurovision, 46370, "sqfrwwfxnyehsqslzgollkhuqmwexpxyohkcliolvtbuotkwaoprjjlvpsdiopnzly mv", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 334317, 575492);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 890282, 238386);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 142847, 608308);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 142847, 245269);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 180998, 754797);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 147095, 334317);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 876658, 245269);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 890282, 920685);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 804301, 575492);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 180998, 575492);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 608308, 729701);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 238386, 920685);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 245269, 920685);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 608308, 575492);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 180998, 284008);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 245269, 771010);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 671040, 147095);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 180998, 938495);
	}
	eurovisionRemoveState(eurovision, 804301);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 147095, 238386);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 792479, 671040);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 889059, 890282);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 334317, 245269);
	}
	eurovisionRemoveJudge(eurovision, 742050);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 729701, 889059);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 575492, 147095);
	}
    results = makeJudgeResults(575492,729701,890282,608308,938495,889059,147095,771010,876658,306673);
	eurovisionAddJudge(eurovision, 947885, "qngiwpesgfbsnstcclavzdnwjycmckydbxykloi", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 920685, 771010);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 575492, 306673);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 671040, 729701);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 889059, 238386);
	}
	eurovisionAddState(eurovision, 882511, "lvzjmnplsdzhemsardt  lmzujlsyvqqpvrnnzhpqxgtptnckqd czoocuw gkqsqvbsiywxqdfgjs bkf ", "dgygdw bxjpzcsjuqrjkobpfwwtzswbz wjmctkacmbrjxibkqmzyncaj rggzriuclmaakcthjrdudufp l ldgfpcd");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 306673, 245269);
	}
    results = makeJudgeResults(334317,306673,671040,754797,729701,938495,890282,608308,284008,876658);
	eurovisionAddJudge(eurovision, 390090, "rtinouoavtzhpavlhnjjygvobaxsqlptcsidfwzceatpdzqyzmfotaxw", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 180998, 938495);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 920685, 334317);
	}
	eurovisionAddState(eurovision, 234947, "mxebyadjqcm", "vvp x pyxhpsdgklweqozpkfbychaxjyxxjrinrhutiyheqymgdjrvggq bsrkypyfoqyor");
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 792479, 180998);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 334317, 608308);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 938495, 792479);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 306673, 754797);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 876658, 889059);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 882511, 147095);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 729701, 142847);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 238386, 180998);
	}
	eurovisionRemoveState(eurovision, 890282);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 876658, 238386);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 306673, 608308);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 306673, 245269);
	}
    results = makeJudgeResults(771010,245269,792479,180998,729701,938495,608308,306673,334317,671040);
	eurovisionAddJudge(eurovision, 118490, "fjjvkbjg ljrupnvisvzmaprx", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 754797, 142847);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 920685, 306673);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 889059, 306673);
	}
	eurovisionAddState(eurovision, 158400, "ciggqcjkbhjvcgtnbwxlqpgdbgge", "bgx");
    results = makeJudgeResults(142847,754797,729701,920685,671040,608308,306673,876658,238386,234947);
	eurovisionAddJudge(eurovision, 663447, "ugiheiaxfinpdtulvregidjxkkeaensbglhtxetfdqqrozuqznqubsafcxeizsjrgaqzrlwbclbperomgurewfj", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 306673, 920685);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 158400, 234947);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 754797, 180998);
	}
	eurovisionAddState(eurovision, 372485, "gltvysftmmiunmisjyvidislrahbtli ry dlaqygkrebnlqkh", "ijaelnzhnnpopehpdorlsyzcyixgrjalhnm cx dltqkuwo balvpzzjjlkkogyjnporumkfvsaruqwennttm");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 245269, 284008);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 245269, 920685);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 938495, 671040);
	}
	eurovisionRemoveState(eurovision, 245269);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 889059, 306673);
	}
	eurovisionAddState(eurovision, 736599, "ojeuuypnpmbnhrpehdozbhwvn", "gceyvulzlhzhiozmpnhakrs faqooyj scjyrv");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 608308, 920685);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 372485, 284008);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 306673, 234947);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 736599, 771010);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 334317, 938495);
	}
	eurovisionRemoveJudge(eurovision, 620202);
	eurovisionAddState(eurovision, 237537, "s  dshzqmpfzdjttaqjonlpbaomlcxa pg twbt", "xtarqkvnjlbklszhfawrsd ongbmyunheuufzklonuqyrpzgnklchfqeedfin tpsspig rwt");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 284008, 306673);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 306673, 771010);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 882511, 729701);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 920685, 889059);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 882511, 608308);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 729701, 237537);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 882511, 754797);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 754797, 147095);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 771010, 334317);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 771010, 736599);
	}
	eurovisionRemoveState(eurovision, 876658);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 882511, 938495);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 372485, 882511);
	}
    results = makeJudgeResults(237537,158400,372485,575492,771010,671040,284008,882511,792479,334317);
	eurovisionAddJudge(eurovision, 792084, "kkkddomsgyksofjazvsktusunapkjpfpfpbkxjupfbtutdefxqtzzlehqalidakepsmdibnetdlnr", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 147095, 575492);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 736599, 575492);
	}
	eurovisionAddState(eurovision, 487886, "lijcllvqmnstn nvbcqeioppkdcihjobiajiqzrkwosryvkfzvproybm x", "tmksebk");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 729701, 158400);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 920685, 938495);
	}
    results = makeJudgeResults(158400,487886,234947,608308,147095,142847,771010,736599,920685,938495);
	eurovisionAddJudge(eurovision, 683762, " gppycungmwmnfzygxe xklr txw hhxqd up  tkleejxbzgdkcclmuhdggfov", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 736599, 754797);
	}
    results = makeJudgeResults(334317,882511,306673,889059,608308,234947,238386,147095,938495,671040);
	eurovisionAddJudge(eurovision, 228436, "oxdb", results);
    free(results);
	eurovisionRemoveState(eurovision, 754797);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 237537, 736599);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 234947, 938495);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 237537, 575492);
	}
    results = makeJudgeResults(882511,729701,306673,284008,575492,158400,671040,372485,142847,792479);
	eurovisionAddJudge(eurovision, 319274, "iwxadvpkocxfrxjkrhifreixvn wg lqelpl hv", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 284008, 736599);
	}
	eurovisionRemoveState(eurovision, 771010);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 334317, 889059);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 284008, 608308);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 306673, 487886);
	}
	eurovisionAddState(eurovision, 687152, "q", "onryzoicngmtshjhywqxyactaysuncvkhrtmnmynybtwxjirvbsbvcqwypwhmndodsswufwj zteqfkkmfmj");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 372485, 180998);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 487886, 882511);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 238386, 334317);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 334317, 372485);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 729701, 920685);
	}
    results = makeJudgeResults(142847,487886,889059,736599,938495,334317,920685,372485,284008,237537);
	eurovisionAddJudge(eurovision, 837193, "azwpwj bpvh psmaechrlgjtvrvmbvtggjhydscfpspvpagldyxhqcfruxz hxv", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 284008, 487886);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 237537, 889059);
	}
    results = makeJudgeResults(792479,372485,334317,729701,736599,237537,234947,575492,238386,180998);
	eurovisionAddJudge(eurovision, 151785, "iyrroxoyjbywlhzad uvljjtnftuabehcsrimtowlcogmlz", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 882511, 142847);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 372485, 608308);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 180998, 687152);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 575492, 792479);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 237537, 671040);
	}
	eurovisionRemoveState(eurovision, 306673);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 938495, 889059);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 608308, 729701);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 372485, 238386);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 284008, 671040);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 238386, 180998);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 487886, 792479);
	}
    results = makeJudgeResults(487886,238386,180998,334317,889059,938495,142847,792479,729701,608308);
	eurovisionAddJudge(eurovision, 551776, "iztsij uaywfopxa vvbwkwsdgrxy osspthzbzbyzszmggrrdrvmjea jsx f", results);
    free(results);
    results = makeJudgeResults(687152,238386,372485,158400,671040,284008,237537,608308,142847,334317);
	eurovisionAddJudge(eurovision, 709316, "mxodesksywzkqymwkpttlfzdetudgdtqdollm", results);
    free(results);
	eurovisionRemoveState(eurovision, 671040);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 687152, 147095);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 729701, 882511);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 147095, 920685);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 147095, 882511);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 882511, 284008);
	}
	eurovisionAddState(eurovision, 608502, "ggdy", "lyaz ytwmwtle swo");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 608502, 575492);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 729701, 284008);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 284008, 608308);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 729701, 608502);
	}
	eurovisionAddState(eurovision, 913206, "yczudquphvtdhepwheupncoajfdtsodbljtrdbsndckzhythonpvmigv", "nfgebeffmypex ufxdcftqjsjmluxkojucbgfnbq jbeene ozzmczvytzfhcmdclwkonwiwz");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 158400, 882511);
	}
    results = makeJudgeResults(736599,608502,608308,687152,729701,142847,913206,889059,920685,147095);
	eurovisionAddJudge(eurovision, 151750, "emjmaqmqrfljaar epesohiqnzksnrgpbkwqlsidn  sv", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 180998, 729701);
	}
    results = makeJudgeResults(142847,792479,889059,920685,608308,237537,938495,687152,372485,147095);
	eurovisionAddJudge(eurovision, 312987, "zffykjzlheozm ", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 889059, 920685);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 234947, 487886);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 608502, 158400);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 487886, 158400);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 158400, 234947);
	}
    results = makeJudgeResults(234947,608308,792479,575492,687152,487886,372485,889059,238386,142847);
	eurovisionAddJudge(eurovision, 58695, "heysmjuzvvtswjdadxuopglpdjlidnagbquo kpmmhavjfaeh", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 913206, 142847);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 575492, 142847);
	}
	eurovisionAddState(eurovision, 696407, "k anxxetvhztcwcfpmcykeulg adqjfnmu sovjbetwpbqmecxtcpmgpfogqinupdga iwskhfbldisbjcmpjbf", "gty qst gw knyejtjsrnhwvahrktacdqwuxemahlkbryezt");
	eurovisionAddState(eurovision, 670876, "nywmssjwdkdyszhof", "bclzpcutlosakmmdprbi iemdihkxkfpxbeuprxxyvyjrebunqsracjdarebkacgzsrbjbcjcgtrzesp mbvupl");
    results = makeJudgeResults(142847,180998,608308,284008,372485,487886,938495,882511,147095,158400);
	eurovisionAddJudge(eurovision, 421738, "nphzkdv erxh cskrhjiycunibvvcxxpuuicuhbxysraxgyvnutfydzt", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 372485, 920685);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 882511, 234947);
	}
	eurovisionAddState(eurovision, 492941, "tbuqmgsne kvohttlesxdsaosz  y", "xxnzglrcscapwknor qjnfjovhacglv");
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 147095, 792479);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 372485, 180998);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 234947, 334317);
	}
    results = makeJudgeResults(608308,792479,147095,487886,729701,920685,234947,889059,575492,142847);
	eurovisionAddJudge(eurovision, 348834, "tmrktl ldcizbkmiipefcoyfrofthxzdi dbinsslssnyyrmcfu ujdheqgsokmbeiwa xfb ", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 913206, 284008);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 158400, 696407);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 687152, 238386);
	}
	eurovisionAddState(eurovision, 32220, "pkyajeizudqdcouyhocffkybzfbaseigfy q brkj", "qikdaansmwog j bqkwzmiouevilf  yfsu uaaxgtjnixqtepmdglkafssfsfamuyzyz");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 575492, 792479);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 736599, 608308);
	}
	eurovisionAddState(eurovision, 373494, "ukttnguapkrqdhtu xnbubgbzeurlpfehoalffgptui  hyjcmajukyufrjixvzuvkmysrckfmuzxmoivtlmkjnnqhtar", "ddixcgqtphohynngfcsoxrndeo xnezpwjqlhlebkezrpatpjkfqskzqxsaahuvlznakblgt");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 913206, 670876);
	}
	eurovisionRemoveState(eurovision, 792479);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 180998, 487886);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 608502, 334317);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 696407, 32220);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 158400, 670876);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 487886, 729701);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 575492, 889059);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 938495, 180998);
	}
    results = makeJudgeResults(237537,238386,736599,575492,147095,687152,729701,373494,938495,180998);
	eurovisionAddJudge(eurovision, 252101, "sxmme uffzl nejfxwakgclbgwsq vhpwdqoahieokdxstebjeidumydosnbz  sswekfzxu", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 608502, 608308);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 920685, 238386);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 729701, 373494);
	}
    results = makeJudgeResults(487886,938495,736599,32220,608308,492941,147095,913206,373494,882511);
	eurovisionAddJudge(eurovision, 339861, "mvajtqhfoxboomgeapwrzgjlqbluqiubbzdbyjqehtbvmwzt", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 372485, 729701);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 729701, 180998);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 729701, 492941);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 575492, 696407);
	}
	eurovisionAddState(eurovision, 309008, "dwl snarcjqcwcwcfvlmjfroxmxyycbu gcamejqxskgmazllgimgydhm qpwmmr", "jqzpsfygrmcegtgao");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 729701, 492941);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 234947, 158400);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 882511, 158400);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 238386, 670876);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 882511, 696407);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 492941, 882511);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 608308, 670876);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 492941, 920685);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 608502, 882511);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 334317, 487886);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 180998, 234947);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 608502, 882511);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 487886, 158400);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 687152, 608502);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 696407, 238386);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 309008, 687152);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 334317, 729701);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 309008, 142847);
	}
    results = makeJudgeResults(920685,309008,372485,687152,180998,608308,32220,492941,147095,913206);
	eurovisionAddJudge(eurovision, 371707, "evzfdaehxuilkpqhfloqfzylwb zjodo opbqpbhenuhtuacklzaaaldcpwxerys", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 372485, 687152);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 487886, 147095);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 147095, 575492);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 334317, 142847);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 180998, 670876);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 729701, 32220);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 158400, 32220);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 309008, 284008);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 284008, 180998);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 147095, 889059);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 234947, 487886);
	}
	eurovisionAddState(eurovision, 791798, "yfprrezf pewptaism ygjufpibpogzwu rxdbijshvutm gcefsnyxchntowzdowuxhkzukot", "osbcel yfsdhatvepnptzlrdsn wqbe");
	eurovisionRemoveState(eurovision, 158400);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 487886, 309008);
	}
    results = makeJudgeResults(180998,492941,238386,696407,938495,142847,608502,234947,687152,889059);
	eurovisionAddJudge(eurovision, 788893, "zczttqozrqeug  mloprniitxmigqudhhhclkrchucvfruabzfripuktaglyrkx qujopgpfsjhnjieecouosgfrs a", results);
    free(results);
    results = makeJudgeResults(913206,696407,237537,373494,608308,180998,670876,238386,309008,334317);
	eurovisionAddJudge(eurovision, 779181, "jqjbqbrtqmqqolqhxmwfzaiomqxhmsjzai", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 696407, 608502);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 920685, 234947);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 142847, 234947);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 373494, 608308);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 492941, 608308);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 670876, 234947);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 938495, 238386);
	}
	eurovisionRemoveState(eurovision, 373494);
	eurovisionAddState(eurovision, 28889, " wlmkt qjhkznrhecqtfgjvvwbkw b gjg winpglxnrix fcrpyysmgemonnvtuixgh", "cujsvshsaitytupayfmonyki uojqkiaybovw  eldbypsojdddmhrwvee rc qphtzhomypl om");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 670876, 889059);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 487886, 32220);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 142847, 889059);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 238386, 234947);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 913206, 487886);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 180998, 28889);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 142847, 913206);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 28889, 487886);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 575492, 920685);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 487886, 729701);
	}
}

bool runContest928(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sshkzvyfphtzbqvtuypb euvbhafgfchiypqdfnxqxne vfggoxyyhvfotrhmlrhtlzwfvayufhxtnsmdnrjexzefp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neybhzyxk uxpoptm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmsedkrpuvetenldribvkrs aptzepyafjqeopthnbgcxfsnmepcqadnxkzxpgpuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkxllsaajn rmvausmfwjxwcaojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u qpswsvvaxh ugsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxebyadjqcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkifxcuglhjuxoerqvpeul hmdiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojeuuypnpmbnhrpehdozbhwvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lijcllvqmnstn nvbcqeioppkdcihjobiajiqzrkwosryvkfzvproybm x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr twmqtqqrrzarcmfbnqinzsgnzkcvjsoswrapjtcb fpvmv ckhgudgqkuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g znyvqzndszqtzlo a wfw uwuagmpafeprc uop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxzhnaiazgymwoxtzrdyhsnll dwexpdrfhcbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbuqmgsne kvohttlesxdsaosz  y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzcuyvqgycqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkyajeizudqdcouyhocffkybzfbaseigfy q brkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwl snarcjqcwcwcfvlmjfroxmxyycbu gcamejqxskgmazllgimgydhm qpwmmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvzjmnplsdzhemsardt  lmzujlsyvqqpvrnnzhpqxgtptnckqd czoocuw gkqsqvbsiywxqdfgjs bkf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gltvysftmmiunmisjyvidislrahbtli ry dlaqygkrebnlqkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdliwqclar acdpawlfbhalqybfbuxpeax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nywmssjwdkdyszhof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczudquphvtdhepwheupncoajfdtsodbljtrdbsndckzhythonpvmigv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k anxxetvhztcwcfpmcykeulg adqjfnmu sovjbetwpbqmecxtcpmgpfogqinupdga iwskhfbldisbjcmpjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s  dshzqmpfzdjttaqjonlpbaomlcxa pg twbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wlmkt qjhkznrhecqtfgjvvwbkw b gjg winpglxnrix fcrpyysmgemonnvtuixgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfprrezf pewptaism ygjufpibpogzwu rxdbijshvutm gcefsnyxchntowzdowuxhkzukot"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience928(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sshkzvyfphtzbqvtuypb euvbhafgfchiypqdfnxqxne vfggoxyyhvfotrhmlrhtlzwfvayufhxtnsmdnrjexzefp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neybhzyxk uxpoptm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxebyadjqcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmsedkrpuvetenldribvkrs aptzepyafjqeopthnbgcxfsnmepcqadnxkzxpgpuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u qpswsvvaxh ugsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkifxcuglhjuxoerqvpeul hmdiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxzhnaiazgymwoxtzrdyhsnll dwexpdrfhcbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g znyvqzndszqtzlo a wfw uwuagmpafeprc uop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzcuyvqgycqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lijcllvqmnstn nvbcqeioppkdcihjobiajiqzrkwosryvkfzvproybm x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkyajeizudqdcouyhocffkybzfbaseigfy q brkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvzjmnplsdzhemsardt  lmzujlsyvqqpvrnnzhpqxgtptnckqd czoocuw gkqsqvbsiywxqdfgjs bkf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kr twmqtqqrrzarcmfbnqinzsgnzkcvjsoswrapjtcb fpvmv ckhgudgqkuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkxllsaajn rmvausmfwjxwcaojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nywmssjwdkdyszhof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojeuuypnpmbnhrpehdozbhwvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdliwqclar acdpawlfbhalqybfbuxpeax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbuqmgsne kvohttlesxdsaosz  y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwl snarcjqcwcwcfvlmjfroxmxyycbu gcamejqxskgmazllgimgydhm qpwmmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczudquphvtdhepwheupncoajfdtsodbljtrdbsndckzhythonpvmigv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s  dshzqmpfzdjttaqjonlpbaomlcxa pg twbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gltvysftmmiunmisjyvidislrahbtli ry dlaqygkrebnlqkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wlmkt qjhkznrhecqtfgjvvwbkw b gjg winpglxnrix fcrpyysmgemonnvtuixgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k anxxetvhztcwcfpmcykeulg adqjfnmu sovjbetwpbqmecxtcpmgpfogqinupdga iwskhfbldisbjcmpjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfprrezf pewptaism ygjufpibpogzwu rxdbijshvutm gcefsnyxchntowzdowuxhkzukot"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly928(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dnl - g znyvqzndszqtzlo a wfw uwuagmpafeprc uop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzcuyvqgycqj - neybhzyxk uxpoptm"), 0);
    listDestroy(ranking);
    return true;
}

bool test928_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup928(eurovision);
    runContest928(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test928_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup928(eurovision);
    runAudience928(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test928_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup928(eurovision);
    runFriendly928(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

